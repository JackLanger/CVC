//
// Created by Jacek on 15.07.2023.
//

#ifndef CVC_CVC_H
#define CVC_CVC_H


#include <string>
#include "CommitParser.h"

class CVC {
private:
    CommitParser *parser;
public:
    std::string process(const char *input, const char *version);
    explicit CVC(Strategy* strategy);
};


#endif //CVC_CVC_H
