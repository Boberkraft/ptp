#include <iostream>
#include <vector>
#include <string>

using std::unique_ptr, std::vector, std::cout, std::endl;

#include "series.hpp"
#include "arithmetic.hpp"
#include "geometric.hpp"

unique_ptr<int> predict(vector<int> given) {
    int last = *(given.rbegin());
    int second_last = *(given.rbegin() + 1);

    vector<unique_ptr<Series>> series_types;
    series_types.emplace_back(new Arithmetic);
    series_types.emplace_back(new Geometric);

    for (auto &type : series_types) {
        if (type->is_a(given)) {
            static int prediction = type->get_next(second_last, last);
            return unique_ptr<int> (&prediction);
        }
    }
    return nullptr;
}

void respond_or_exit(unique_ptr<int> predicted_value) {
    if (predicted_value == nullptr) {
        exit(1);
    } else {
        cout << *predicted_value << endl;
        exit(0);
    }
}

int main() {
    vector<int> given = { 1, 2, 3, 4, 5 };

    respond_or_exit(predict(given));  
}
