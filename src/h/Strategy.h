//
// Created by Jacek on 14.07.2023.
//

#ifndef CVC_STRATEGY_H
#define CVC_STRATEGY_H


#include <string>

class Strategy {
public:
    virtual std::string execute(const std::string &input) {return "";};
    Strategy() = default;
    virtual ~Strategy();
};


#endif //CVC_STRATEGY_H
