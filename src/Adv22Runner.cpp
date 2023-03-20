//
// Created by Heiko Vogeler on 19.03.23.
//
#include <iostream>
#include "Adv22Runner.h"
#include "Util.h"

using namespace adv22;
using std::cout;

void Adv22Runner::run(int day, int part, long long f(char *c)) {
    try {
        auto result = f("x");
        cout << "RESULT - "<< "Day " << day << ", part " << part << ": " << result;
    } catch (AdvException &e) {
        cerr << "ERROR - " << "Day " << day << ", part " << part << ": "<< e.getMessage();
    }
}