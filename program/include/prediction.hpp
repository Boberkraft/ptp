#ifndef PREDICTION_H
#define PREDICTION_H

#include <vector>
#include <string>
#include <iostream>


using std::unique_ptr, std::vector, std::cout, std::endl, std::string;

struct Prediction {
    float next_number;
    string series_name;
};

void print(unique_ptr<Prediction> prediction);

#endif
