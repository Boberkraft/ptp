#include "prediction.hpp"
#include "series.hpp"
#include "constant.hpp"
#include "arithmetic.hpp"
#include "geometric.hpp"

void print(unique_ptr<Prediction> prediction) {
    cout << "It's " << prediction->series_name
         << ". Next number is " << prediction->next_number << endl;
}

unique_ptr<Prediction> predict(vector<int> given) {
    vector<unique_ptr<Series>> series_types;
    series_types.emplace_back(new Constant());
    series_types.emplace_back(new Arithmetic());
    series_types.emplace_back(new Geometric());

    for (auto &type : series_types) {
        type->initialize(given);
        if (type->is_a()) {
            return unique_ptr<Prediction>(type->get_prediction());
        }
    }
    return nullptr;
}
