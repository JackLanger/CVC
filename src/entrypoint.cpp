//
// Created by Jacek on 15.07.2023.
//


#include <string>
#include <iostream>

void printHelp();

int main(int argc, char* argv[]){
    if(argc >1){
        for (int i = 0; i < argc; ++i) {
            std::cout << argv[i]<< std::endl;
        }

    }else{
        printHelp();
    }
}

void printHelp() {

    std::cout << "This cli tool computes a semantic version from a provided version and commit message."<< std::endl;
    std::cout << "To use this, you need to provide the command with the respective flags."<< std::endl;
    std::cout << "e.g: cvc -m <commit message> -v <version>"<< std::endl;
    std::cout << "Flags:"<< std::endl;
    std::cout << "\tm\t\tmessage to parse"<< std::endl;
    std::cout << "\tv\t\tprevious version"<< std::endl;
}
