#ifndef CONSTANT_H
#define CONSTANT_H
#include "series.hpp"

class Constant : public Series {
public:
    string get_name() override;
    void initialize(vector<int> given) override;
    bool is_a() override;
    float get_next() override;
};

#endif
