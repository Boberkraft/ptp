#ifndef PREDICTION_H
#define PREDICTION_H

#include <vector>
#include <string>
#include <iostream>

#include "arithmetic.hpp"
#include "geometric.hpp"

using std::unique_ptr, std::vector, std::cout, std::endl, std::string;

struct Prediction {
    float next_number;
    string series_name;
};

void print(unique_ptr<Prediction> prediction);

unique_ptr<Prediction> predict(vector<int> given);

#endif
