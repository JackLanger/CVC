//
// Created by Jacek on 14.07.2023.
//

#include "h/CVC.h"
#include <regex>


std::string CVC::parse(const std::string &input) {
    return strategy->execute(input);
}

CVC::CVC() {
    this->strategy = new ConventionalStrategy();
}

CVC::~CVC() = default;