//
// Created by Jacek on 14.07.2023.
//
#include <gtest/gtest.h>
#include "../src/h/CommitParser.h"

CommitParser* pCommitParser = new CommitParser(new ConventionalStrategy());


TEST(compare_invalid_commit, no_string){

    std::string actual = pCommitParser->parse("");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(compare_invalid_commit, string_of_x){

    std::string actual = pCommitParser->parse("x");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(compare_invalid_commit, string_with_keyword){

    std::string actual = pCommitParser->parse("commit with feat");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(compare_invalid_commit, string_of_exclamation_mark){

    std::string actual = pCommitParser->parse("!");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(string_with_keyword,fix ){
    std::string actual = pCommitParser->parse("fix:");
    GTEST_ASSERT_EQ("0.0.1", actual);
}

TEST(string_with_keyword,feat ){
    std::string actual = pCommitParser->parse("fix:");
    GTEST_ASSERT_EQ("0.0.1", actual);
}

TEST(string_with_keyword,breaking_change_colon ){
    std::string actual = pCommitParser->parse("breaking change: test");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(string_with_keyword,scoped_breaking_change_colon ){
    std::string actual = pCommitParser->parse("fix(breaking change): test");
    GTEST_ASSERT_EQ("1.0.0", actual);
}

TEST(string_with_keyword, breaking_change_refactor ){
    std::string actual = pCommitParser->parse("refactor (breaking change): more");
    GTEST_ASSERT_EQ("1.0.0", actual);
}

TEST(string_with_keyword,fix_exclamation_breaking_change ){
    std::string actual = pCommitParser->parse("fix!: some");
    GTEST_ASSERT_EQ("1.0.0", actual);
}
