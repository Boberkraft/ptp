#ifndef GEOMETRIC_H
#define GEOMETRIC_H

#include "series.hpp"

class Geometric : public Series
{
    public:
    std::string get_name() override;
    bool is_a(std::vector<int> given) override;
    int get_next(int first, int second) override;
};

#endif
