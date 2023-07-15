//
// Created by Jacek on 15.07.2023.
//

#ifndef CVC_VERSIONPROCESSOR_H
#define CVC_VERSIONPROCESSOR_H

#include <string>

class VersionProcessor{
public:
    /**
     * Process two version inputs and calculate the new version
     * depending on the diff.
     * Both versions must adhere to the form of Major.Minor.Fix.
     * TODO: process versions with pre and postfix
     * @return New version string after processing.
     */
    static std::string process(const std::string& current, const std::string& diff);
};
#endif //CVC_VERSIONPROCESSOR_H
