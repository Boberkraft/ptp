#include "arithmetic.hpp"

string Arithmetic::get_name() {
    return "Arithmetic Series";
}

void Arithmetic::initialize(vector<int> given) {
    this->given = given;
}

bool Arithmetic::is_a() {
    int first = given[0];
    int second = given[1];

    int rest = second - first;

    for (int i = 2; i < given.size(); i++) {
        if (rest != given[i] - given[i - 1]) {
            return false;
        }
    }
    return true;
}

float Arithmetic::get_next() {
//    int first = given[given.size() - 2];
    int first = given.end()[-2];
    int second = given.end()[-1];

    int rest = second - first;
    return second + rest;
}