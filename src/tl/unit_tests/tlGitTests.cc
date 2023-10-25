
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2023 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

#if defined(HAVE_GIT2)

#include "tlGit.h"
#include "tlUnitTest.h"
#include "tlFileUtils.h"

static std::string test_url ("https://github.com/klayout/klayout_git_test.git");

TEST(1_plain)
{
  std::string path = tl::TestBase::tmp_file ("repo");
  tl::GitObject repo (path);
  repo.read (test_url, std::string (), std::string ());

  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "LICENSE")), true);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, ".gitignore")), true);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, ".git")), false);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "src/grain.xml")), true);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "src/macros/xsection.lym")), true);
}

TEST(2_pathspecs)
{
  std::string path = tl::TestBase::tmp_file ("repo");
  tl::GitObject repo (path);
  repo.read (test_url, std::string ("src/**"), std::string ());

  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "LICENSE")), false);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, ".gitignore")), false);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, ".git")), false);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "src/grain.xml")), true);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "src/macros/xsection.lym")), true);
}

TEST(3_subdir)
{
  std::string path = tl::TestBase::tmp_file ("repo");
  tl::GitObject repo (path);
  repo.read (test_url + "/src", std::string (), std::string ());

  EXPECT_EQ (tl::file_exists (tl::combine_path (path, ".git")), false);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "grain.xml")), true);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "macros/xsection.lym")), true);
}

TEST(4_single_file)
{
  std::string path = tl::TestBase::tmp_file ("repo");
  tl::GitObject repo (path);
  repo.read (test_url, std::string ("LICENSE"), std::string ());

  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "LICENSE")), true);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, ".gitignore")), false);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, ".git")), false);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "src")), false);
}

TEST(5_single_file_from_subdir)
{
  std::string path = tl::TestBase::tmp_file ("repo");
  tl::GitObject repo (path);
  repo.read (test_url + "/src", std::string ("grain.xml"), std::string ());

  EXPECT_EQ (tl::file_exists (tl::combine_path (path, ".git")), false);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "grain.xml")), true);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "macros")), false);

  tl::InputStream file (tl::combine_path (path, "grain.xml"));
  tl::TextInputStream grain (file);
  bool found = false;
  while (! grain.at_end () && ! found) {
    std::string line = grain.get_line ();
    if (line.find ("<version>1.7</version>") != std::string::npos) {
      found = true;
    }
  }
  EXPECT_EQ (found, true);
}

TEST(6_branch)
{
  std::string path = tl::TestBase::tmp_file ("repo");
  tl::GitObject repo (path);
  repo.read (test_url + "/src", std::string ("grain.xml"), std::string ("wip"));

  EXPECT_EQ (tl::file_exists (tl::combine_path (path, ".git")), false);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "grain.xml")), true);
  EXPECT_EQ (tl::file_exists (tl::combine_path (path, "macros")), false);

  tl::InputStream file (tl::combine_path (path, "grain.xml"));
  tl::TextInputStream grain (file);
  bool found = false;
  while (! grain.at_end () && ! found) {
    std::string line = grain.get_line ();
    if (line.find ("<version>1.4</version>") != std::string::npos) {
      found = true;
    }
  }
  EXPECT_EQ (found, true);
}

TEST(7_invalid_branch)
{
  std::string path = tl::TestBase::tmp_file ("repo");
  tl::GitObject repo (path);
  try {
    repo.read (test_url, std::string (), std::string ("brxxx"));
    EXPECT_EQ (true, false);
  } catch (tl::Exception &ex) {
    EXPECT_EQ (ex.msg (), "Error cloning Git repo: reference 'refs/remotes/origin/brxxx' not found");
  }
}

#endif

