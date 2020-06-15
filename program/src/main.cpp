#include "prediction.hpp"
#include "series.hpp"
#include "constant.hpp"
#include "arithmetic.hpp"
#include "geometric.hpp"

unique_ptr<Prediction> predict(vector<int> given) {
    vector<Series *> series_types;
    series_types.emplace_back(new Constant);
    series_types.emplace_back(new Arithmetic);
    series_types.emplace_back(new Geometric);

    for (auto &type : series_types) {
        if (type->is_a(given)) {
            return unique_ptr<Prediction>(type->get_prediction(given));
        }
    }
    return nullptr;
}

void respond_and_exit(unique_ptr<Prediction> prediction) {
    if (prediction == nullptr) {
        exit(1);
    } else {
        print(std::move(prediction));
        exit(0);
    }
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};

    respond_and_exit(predict(numbers));
}
