#include "constant.hpp"

string Constant::get_name() {
    return "Constant Series";
}

void Constant::initialize(vector<int> given) {
    this->given = given;
}

bool Constant::is_a() {
    int first = given[0];

    for (int i = 1; i < given.size(); i++) {
        if (first != given[i]) {
            return false;
        }
    }
    return true;
}

float Constant::get_next() {
    return float(given[0]);
}