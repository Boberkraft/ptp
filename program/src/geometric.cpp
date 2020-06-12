#include "geometric.hpp"

bool Geometric::is_a(std::vector<int> given) {
    int first = given[0];
    int second = given[1];

    int q = second / float(first);

    for (int i = 2; i < given.size(); i++) {
        if (q != given[i] / float(given[i - 1])) {
            return false;
        }
    }
    return true;
}

int Geometric::get_next(int first, int second) {
    int q = second / float(first);
    return second * q;
}