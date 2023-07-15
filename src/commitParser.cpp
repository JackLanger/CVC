//
// Created by Jacek on 14.07.2023.
//

#include "h/CommitParser.h"
#include <regex>
#include "h/VersionProcessor.h"


std::string CommitParser::parse(const std::string &input) {
    return strategy->execute(input);
}

std::string CommitParser::computeNewVersion(const std::string &version_new, const std::string &version_old){
    return VersionProcessor::process(version_old, version_new);
}


CommitParser::~CommitParser() = default;

