//
// Created by Heiko Vogeler on 18.03.23.
//

#include <iostream>
#include "Adv2201.h"
#include "Util.h"

namespace adv2201 {
    using std::cout, adv22::Util;
    static const auto FILE_NAME = "/Users/hvo/Cpp/adv22/data/adv22_day01_part1.dat";

    const int64_t Adv2201::part1() {
        auto lines = Util::readLines(FILE_NAME);
        // cout << "Read " << FILE_NAME << ", " << lines.size() << " lines" << "\n";
        int64_t maxKalories = 0;
        int64_t elfSum = 0;
        for (const auto &line: lines) {
            if (line.empty()) {
                maxKalories = elfSum > maxKalories ? elfSum : maxKalories;
                elfSum = 0;
            } else {
                elfSum += stoi(line);
            }
        }
        return maxKalories;
    }
} // Adv2201

