#ifndef CONSTANT_H
#define CONSTANT_H
#include "series.hpp"

class Constant : public Series {
public:
    string get_name() override;
    bool is_a(vector<int> given) override;
    float get_next(int first, int second) override;
};

#endif
