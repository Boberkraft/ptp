#ifndef TEST_H
#define TEST_H


#include "prediction.hpp"

void test(string expected_series_name, int expected_next_number, unique_ptr<Prediction> actual);
void run_tests();

#endif
