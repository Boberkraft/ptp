#include "constant.hpp"

string Constant::get_name() {
    return "Constant Series";
}

bool Constant::is_a(vector<int> given) {
    int first = given[0];

    for (int i = 1; i < given.size(); i++) {
        if (first != given[i]) {
            return false;
        }
    }
    return true;
}

float Constant::get_next(int first, int _second) {
    return float(first);
}