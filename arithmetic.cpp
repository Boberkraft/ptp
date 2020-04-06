#include "arithmetic.hpp"

bool Arithmetic::is_a(std::vector<int> given) {
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

int Arithmetic::get_next(int first, int second) {
    int rest = second - first;
    return second + rest;
}