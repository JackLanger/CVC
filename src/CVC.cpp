//
// Created by Jacek on 15.07.2023.
//

#include "h/CVC.h"
#include "h/VersionProcessor.h"

std::string CVC::process(const char *input, const char *version) {

    std::string diff = this->parser->parse(input);
    std::string result =  VersionProcessor::process(version,diff);
    return result;
}

CVC::CVC(Strategy *strategy) {
    this->parser = new CommitParser(strategy);
}
