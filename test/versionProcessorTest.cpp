//
// Created by Jacek on 15.07.2023.
//
#include <gtest/gtest.h>
#include <string>
#include "../src/h/VersionProcessor.h"

const std::string baseVersion = "0.0.0";
const std::string fix = "0.0.1";
const std::string feat = "0.1.0";
const std::string breaking = "1.0.0";

TEST(test_no_current_version, no_string){
    std::string actual = VersionProcessor::process("","");
    GTEST_ASSERT_EQ(baseVersion,actual);
}

TEST(test_no_current_version, fix){
    std::string actual = VersionProcessor::process("",fix);
    GTEST_ASSERT_EQ(fix,actual);
}

TEST(test_with_current_version, fix){
    std::string actual = VersionProcessor::process(fix,fix);
    GTEST_ASSERT_EQ("0.0.2",actual);
}

TEST(test_with_current_version, feat){
    std::string actual = VersionProcessor::process(fix,feat);
    GTEST_ASSERT_EQ("0.1.0",actual);
}


TEST(test_with_current_version, major){
    std::string actual = VersionProcessor::process(fix,breaking);
    GTEST_ASSERT_EQ("1.0.0",actual);
}

TEST(test_with_current_version, feat_fix){
    std::string actual = VersionProcessor::process(feat,fix);
    GTEST_ASSERT_EQ("0.1.1",actual);
}

TEST(test_with_current_version, major_fix){
    std::string actual = VersionProcessor::process(breaking,fix);
    GTEST_ASSERT_EQ("1.0.1",actual);
}