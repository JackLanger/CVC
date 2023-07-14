//
// Created by Jacek on 14.07.2023.
//
#include <gtest/gtest.h>
#include "../src/h/CVC.h"
#include "../src/h/ConventionalStrategy.h"

CVC* cvc = new CVC(new ConventionalStrategy());


TEST(compare_invalid_commit, no_string){

    std::string actual = cvc->parse("");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(compare_invalid_commit, string_of_x){

    std::string actual = cvc->parse("x");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(compare_invalid_commit, string_with_keyword){

    std::string actual = cvc->parse("commit with feat");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(compare_invalid_commit, string_of_exclamation_mark){

    std::string actual = cvc->parse("!");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(string_with_keyword,fix ){
    std::string actual = cvc->parse("fix:");
    GTEST_ASSERT_EQ("0.0.1", actual);
}

TEST(string_with_keyword,feat ){
    std::string actual = cvc->parse("fix:");
    GTEST_ASSERT_EQ("0.0.1", actual);
}

TEST(string_with_keyword,breaking_change_colon ){
    std::string actual = cvc->parse("breaking change: test");
    GTEST_ASSERT_EQ("0.0.0", actual);
}

TEST(string_with_keyword,scoped_breaking_change_colon ){
    std::string actual = cvc->parse("fix(breaking change): test");
    GTEST_ASSERT_EQ("1.0.0", actual);
}

TEST(string_with_keyword, breaking_change_refactor ){
    std::string actual = cvc->parse("refactor (breaking change): more");
    GTEST_ASSERT_EQ("1.0.0", actual);
}

TEST(string_with_keyword,fix_exclamation_breaking_change ){
    std::string actual = cvc->parse("fix!: some");
    GTEST_ASSERT_EQ("1.0.0", actual);
}

int main(int argc, char* argv[]){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}