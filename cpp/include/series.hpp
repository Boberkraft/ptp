#ifndef SERIES_H
#define SERIES_H

#include "prediction.hpp"

class Series {
public:
    vector<int> given;
    virtual ~Series() {};
    virtual std::string get_name() = 0;
    virtual void initialize(vector<int> given) = 0;
    virtual bool is_a() = 0;
    virtual float get_next() = 0;
    Prediction *get_prediction();
};

#endif
