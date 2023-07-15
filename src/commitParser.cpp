//
// Created by Jacek on 14.07.2023.
//

#include "h/CommitParser.h"
#include "h/VersionProcessor.h"


std::string CommitParser::parse(const std::string &input) {
    return strategy->execute(input);
}


CommitParser::~CommitParser() = default;

