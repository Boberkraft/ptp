#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "series.hpp"

class Arithmetic : public Series
{
    public:
    bool is_a(std::vector<int> given);
    int get_next(int first, int second);
};

#endif
