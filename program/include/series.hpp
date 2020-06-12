#ifndef SERIES_H
#define SERIES_H
#include <vector>

class Series
{
    public:
    virtual ~Series() {};
    virtual bool is_a(std::vector<int> given) = 0;
    virtual int get_next(int first, int second) = 0;
};

#endif
