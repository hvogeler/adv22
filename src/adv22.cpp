//
// Created by Heiko Vogeler on 19.03.23.
//
#include <iostream>
#include "day01/Adv2201.h"
#include "Util.h"
#include "Adv22Runner.h"

using std::cout, std::cerr;
using adv2201::Adv2201, adv22::AdvException;

int main() {
    //const Adv2201 adv2201;
    const char* x = "42";
//    const int x = 42;
    auto lambda = [&](char* x) -> int64_t {
        return (int64_t) atoi(x);
//        return x;
//            return adv2201.part1();
    };
    adv22::Adv22Runner::run(1, 1, lambda);
}
// test	
