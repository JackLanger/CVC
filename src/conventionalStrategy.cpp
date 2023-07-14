//
// Created by Jacek on 14.07.2023.
//

#include <regex>
#include "h/ConventionalStrategy.h"

std::string ConventionalStrategy::execute(const std::string& input) {
    bool colonPresent = input.find(':') != std::string::npos;
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


bool ConventionalStrategy::isBreakingChange(const std::string &input) {
    std::regex breaking_change(R"(.+!.*:|^.+\(breaking\schange\):.+$)");
    auto marker_begin = std::sregex_iterator (input.begin(), input.end(), breaking_change);
    auto marker_end = std::sregex_iterator();
    if(std::distance(marker_begin, marker_end) > 0){
        return true;
    }
    return false;
}


bool ConventionalStrategy::isFeature(const std::string &input) {
    return input == "feat:" || input == "feature:";
}
bool ConventionalStrategy::isFix(const std::string &input) {
    return input == "fix:";
}

