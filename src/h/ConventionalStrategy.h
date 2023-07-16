//
// Created by Jacek on 14.07.2023.
//

#ifndef CVC_CONVENTIONALSTRATEGY_H
#define CVC_CONVENTIONALSTRATEGY_H
#include <string>
#include "Strategy.h"

class ConventionalStrategy : public Strategy {
public:
    std::string execute(const std::string& input) override;

    static bool isFeature(const std::string &input);

    static bool isFix(const std::string &input);

    static bool isBreakingChange(const std::string &input);

    ConventionalStrategy();
    ~ConventionalStrategy() override;
};


#endif //CVC_CONVENTIONALSTRATEGY_H
