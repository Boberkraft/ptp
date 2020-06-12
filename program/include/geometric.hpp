#ifndef GEOMETRIC_H
#define GEOMETRIC_H

#include "series.hpp"

class Geometric : public Series
{
    public:
    bool is_a(std::vector<int> given);
    int get_next(int first, int second);
};

#endif
