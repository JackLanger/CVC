#include <iostream>
#include <cstring>
#include <string>
#include "h/ConventionalStrategy.h"
#include "h/CommitParser.h"
#include "h/VersionProcessor.h"

void printHelp();

//
// Created by Jacek Langer on 16.07.2023.
//
int main(int argc, char *argv[]) {

    if (argc > 1 && argc % 2 == 1) {
        std::string message, version;
        Strategy *strategy;
        for (int i = 1; i < argc; i += 2) {
            if (strcmp(argv[i], "-m") == 0) {
                message = argv[i + 1];
            } else if (strcmp(argv[i], "-v") == 0) {
                version = argv[i + 1];
            }
        }

        strategy = new ConventionalStrategy();
        auto *parser = new CommitParser(strategy);
        auto version_diff = parser->parse(message);
        std::cout << VersionProcessor::process(version,version_diff) << std::endl;

    } else {
        printHelp();
    }
    return 0;
}

void printHelp() {
    std::cout << "here should be your help text" << std::endl;
}
