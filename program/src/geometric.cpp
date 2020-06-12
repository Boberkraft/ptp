#include "geometric.hpp"

string Geometric::get_name() {
    return "Geometric Series";
}

bool Geometric::is_a(vector<int> given) {
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

float Geometric::get_next(int first, int second) {
    float q = second / float(first);
    return second * q;
}