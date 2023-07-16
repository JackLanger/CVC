#include <string>
#include <vector>
#include <sstream>
#include "h/VersionProcessor.h"

//
// Created by Jacek on 15.07.2023.
//

std::vector<std::string> splitString(const std::string &input, char delimiter) {
    if (input.empty()) return splitString("0.0.0", delimiter);

    std::vector<std::string> parts;
    std::stringstream ss(input);
    std::string part;

    while (std::getline(ss, part, delimiter)) {
        parts.push_back(part);
    }

    return parts;
}

std::string combine(int major, int minor, int fix, char separator) {
    std::stringstream str;
    str << major << separator << minor << separator << fix;

    return str.str();
}

int toIntSum(std::string first, std::string sec) {
    return stoi(first) + stoi(sec);
}

void setValue(const std::string &val1, const std::string &val2, bool isNonZero ,int *target){
    if (isNonZero) {
        *target = toIntSum(val1, val2);
    } else *target = stoi(val2);
}

std::string VersionProcessor::process(const std::string &current_version,
                                      const std::string &version_diff) {

    if (current_version.empty())
        return version_diff.empty()
               ? "0.0.0" : version_diff;

    std::vector<std::string> current, diff;
    current = splitString(current_version, '.');
    diff = splitString(version_diff, '.');
    int  major, minor, fix;
    major = minor = fix = 0;

    for (int i = 0; i < 3; ++i) {
        bool isNonZero = diff[i] == "1";
        if (i == 0) {
            setValue(diff[i], current[i], isNonZero, &major);
            if(isNonZero)break;
        }
        else if (i == 1) {
            setValue(diff[i], current[i], isNonZero, &minor);
            if(isNonZero) break;
        }
        else {
            setValue(diff[i], current[i], isNonZero, &fix);
        }
    }

    return combine(major, minor, fix, '.');
}

