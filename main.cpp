#include <iostream>
#include <vector>
#include <string>

using std::vector, std::cout, std::endl;

bool is_arithmetic(vector<int> given) {
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

int next_arithmetic(int first, int second) {
    int rest = second - first;
    return second + rest;
}

bool is_geometric(vector<int> given) {
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

int next_geometric(int first, int second) {
    int q = second / float(first);
    return second * q;
}

int predict(vector<int> given) {
    int last = *(given.rbegin());
    int second_last = *(given.rbegin() + 1);

    
    if (is_arithmetic(given)) {
        return next_arithmetic(second_last, last);
    }
    if (is_geometric(given)) {
        return next_geometric(second_last, last);
    }

    return 0;
}

int main() {
    vector<int> given = { 1, 2, 3, 4, 5 };
    std::cout << predict(given) << std::endl;
    return 0;    
}
