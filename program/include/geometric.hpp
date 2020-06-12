#ifndef GEOMETRIC_H
#define GEOMETRIC_H

#include "series.hpp"

class Geometric : public Series {
public:
    string get_name() override;
    bool is_a(vector<int> given) override;
    float get_next(int first, int second) override;
};

#endif
