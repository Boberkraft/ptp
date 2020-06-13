#include "prediction.hpp"
#include "series.hpp"
#include "arithmetic.hpp"
#include "geometric.hpp"
#include "test.hpp"
#include <sstream>
#include <iostream>
#include <cassert>

unique_ptr<Prediction> predict(vector<int> given) {
    vector<Series *> series_types;
    series_types.emplace_back(new Arithmetic);
    series_types.emplace_back(new Geometric);

    for (auto &type : series_types) {
        if (type->is_a(given)) {
            return unique_ptr<Prediction>(type->get_prediction(given));
        }
    }
    return nullptr;
}

void respond_and_exit(unique_ptr<Prediction> prediction) {
    if (prediction == nullptr) {
        exit(1);
    } else {
        print(std::move(prediction));
        exit(0);
    }
}

void testowanie() {
    vector<int> numbers;
    numbers = {1, 2, 3};
    cout<<predict(numbers)->next_number;
}


void parse_and_validate(int argc, char *argv[]) {
    vector<int> numbers;
    if(!strcmp(argv[1], "--tests")) {
        testowanie();
    }
    else if (argc >= 2) {
        for (int i = 1; i < argc; i++) {
            try {
                int number = std::stoi(argv[i]);
                numbers.push_back(number);
            }
            catch (...) {
                exit(2);
            }
        }
        respond_and_exit(predict(numbers));
    }
}


int main(int argc, char *argv[]) {
    parse_and_validate(argc, argv);
}
