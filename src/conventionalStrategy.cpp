//
// Created by Jacek on 14.07.2023.
//

#include <regex>
#include "h/ConventionalStrategy.h"

const std::string major_change_regex = R"(.+!.*:|^.+\(breaking\schange\):.+$)";
const std::string feature_regex = R"(^feat.*:)";
const std::string fix_regex = R"(^fix.*:)";

std::string ConventionalStrategy::execute(const std::string& input) {
    std::string out = "0.0.0";
    if (isFix(input))
        out = "0.0.1";
    if (isFeature(input))
        out = "0.1.0";
    if(isBreakingChange(input)){
        out = "1.0.0";
    }
    return out;
}


bool findRegex(const std::string &input, const std::string &regex_str){
    std::regex regex(regex_str);
    auto marker_begin = std::sregex_iterator (input.begin(), input.end(), regex);
    auto marker_end = std::sregex_iterator();
    if(std::distance(marker_begin, marker_end) > 0){
        return true;
    }
    return false;
}

bool ConventionalStrategy::isBreakingChange(const std::string &input) {
    return findRegex(input, major_change_regex);
}

bool ConventionalStrategy::isFeature(const std::string &input) {
    return findRegex(input, feature_regex);
}
bool ConventionalStrategy::isFix(const std::string &input) {
    return findRegex(input, fix_regex);
}

