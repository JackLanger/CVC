//
// Created by Jacek on 14.07.2023.
//

#ifndef CVC_COMMITPARSER_H
#define CVC_COMMITPARSER_H
#include <string>
#include "ConventionalStrategy.h"

/**
 * Commit Parser. Parses a commit message.
 */
class CommitParser {
private:
    /**
     * Strategy used for parsing the string.
     */
    Strategy *strategy;
public:

    /**
     * Parse an input string and return the version change for change.
     * @return version change after parsing input.
     */
    std::string parse(const std::string&);

    /**
     * Creates a new parser that uses a given strategy.
     * @param strat the strategy to set.
     */
    explicit CommitParser(Strategy* strat){
        this->strategy = strat;
    }
    ~CommitParser();
};


#endif //CVC_COMMITPARSER_H
