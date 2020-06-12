#ifndef ARITHMETIC_H
#define ARITHMETIC_H

#include "series.hpp"

class Arithmetic : public Series
{
    public:
    std::string get_name() override;
    bool is_a(std::vector<int> given) override;
    int get_next(int first, int second) override;
};

#endif
