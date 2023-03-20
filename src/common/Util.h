//
// Created by Heiko Vogeler on 18.03.23.
//

#ifndef ADV2201_UTIL_H
#define ADV2201_UTIL_H

#include <string>
#include <vector>

namespace adv22 {
    using namespace std;

    class AdvException : exception {
        string message;
    public:
        explicit AdvException(const string &msg);

        string getMessage();
    };

    class Util {
    public:
        static vector<string> readLines(const string &filePath);
    };

} // adv2022

#endif //ADV2201_UTIL_H
