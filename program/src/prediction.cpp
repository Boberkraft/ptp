#include "prediction.hpp"

void print(unique_ptr<Prediction> prediction) {
    std::cout << "It's " << prediction->series_name
              << ". Next number is " << prediction->next_number << endl;
}