//
// Created by Jacek on 15.07.2023.
//
#include <string>
#include "gtest/gtest.h"
#include "../src/h/CVC.h"

CVC *cvc = new CVC(new ConventionalStrategy());

TEST(cvc_process,no_input){
    std::string actual = cvc->process("","0.0.0");
    ASSERT_EQ("0.0.0", actual);
}

TEST(cvc_process,random_message){
    std::string actual = cvc->process("message","0.0.0");
    ASSERT_EQ("0.0.0", actual);
}

TEST(cvc_process,fix){
    std::string actual = cvc->process("fix: message","0.0.0");
    ASSERT_EQ("0.0.1", actual);
}

TEST(cvc_process,feat){
    std::string actual = cvc->process("feat: message","0.1.2");
    ASSERT_EQ("0.2.0", actual);
}