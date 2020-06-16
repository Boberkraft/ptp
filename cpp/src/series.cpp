#include "series.hpp"

Prediction *Series::get_prediction() {
    auto answer = new Prediction;
    answer->next_number = this->get_next();
    answer->series_name = this->get_name();
    answer->input = given;
    return answer;
}
