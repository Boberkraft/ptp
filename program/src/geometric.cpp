#include "geometric.hpp"

string Geometric::get_name() {
    return "Geometric Series";
}

void Geometric::initialize(vector<int> given) {
    this->given = given;
}

bool Geometric::is_a() {
    int first = given[0];
    int second = given[1];

    float q = second / float(first);

    for (int i = 2; i < given.size(); i++) {
        if (q != given[i] / float(given[i - 1])) {
            return false;
        }
    }
    return true;
}

float Geometric::get_next() {
    auto first = float(given.end()[-2]);
    auto second = float(given.end()[-1]);

    float q = second / first;
    return second * q;
}