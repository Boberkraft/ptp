#ifndef GEOMETRIC_H
#define GEOMETRIC_H

#include "series.hpp"

class Geometric : public Series {
public:
    vector<int> given;
    string get_name() override;
    void initialize(vector<int> given) override;
    bool is_a() override;
    float get_next() override;
};

#endif
