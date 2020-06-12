#include "series.hpp"

Prediction* Series::get_prediction(std::vector<int> given) {
    int last = *(given.rbegin());
    int second_last = *(given.rbegin() + 1);

    auto answer = new Prediction {2, "da"};
    answer->next_number = this->get_next(second_last, last);
    answer->series_name = this->get_name();
    return answer;
}
