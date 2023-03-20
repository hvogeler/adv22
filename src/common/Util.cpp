//
// Created by Heiko Vogeler on 18.03.23.
//

#include "Util.h"
#include <vector>
#include <fstream>

namespace adv22 {
    string AdvException::getMessage() {
        return this->message;
    }

    AdvException::AdvException(const string &msg) {
        this->message = msg;
    }

    vector<string> Util::readLines(const string &filePath) {
        ifstream in(filePath);
        if (!in.is_open()) {
            throw AdvException("File not found");
        }

        vector<string> out_lines;
        string line;
        while (getline(in, line)) {
            out_lines.emplace_back(line);
        }

        return out_lines;
    }
} // adv2022