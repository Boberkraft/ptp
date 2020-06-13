#include "prediction.hpp"
#include "series.hpp"
#include "arithmetic.hpp"
#include "geometric.hpp"

void print(unique_ptr<Prediction> prediction) {
    cout << "It's " << prediction->series_name
         << ". Next number is " << prediction->next_number << endl;
}

unique_ptr<Prediction> predict(vector<int> given) {
    vector<Series *> series_types;
    series_types.emplace_back(new Arithmetic);
    series_types.emplace_back(new Geometric);

    for (auto &type : series_types) {
        if (type->is_a(given)) {
            return unique_ptr<Prediction>(type->get_prediction(given));
        }
    }
    return nullptr;
}