#ifndef SERIES_H
#define SERIES_H

#include "prediction.hpp"

class Series {
public:
    virtual ~Series() {};
    virtual std::string get_name() = 0;
    virtual bool is_a(vector<int> given) = 0;
    virtual int get_next(int first, int second) = 0;
    Prediction *get_prediction(vector<int>);
};

#endif
