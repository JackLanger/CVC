//
// Created by Jacek on 14.07.2023.
//

#ifndef CVC_CVC_H
#define CVC_CVC_H
#include <string>
#include "ConventionalStrategy.h"

class CVC {
private:
    Strategy *strategy;
public:
    std::string parse(const std::string&);
    CVC();
    explicit CVC(Strategy* strat){
        this->strategy = strat;
    }
    ~CVC();
};


#endif //CVC_CVC_H
