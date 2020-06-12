#include "prediction.hpp"
#include "series.hpp"
#include "arithmetic.hpp"
#include "geometric.hpp"
#include "test.hpp"

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

void respond_and_exit(unique_ptr<Prediction> prediction) {
    if (prediction == nullptr) {
        exit(1);
    } else {
        print(std::move(prediction));
        exit(0);
    }
}

int main(int argc, char * argv[]) {
    vector<int> numbers;
    if(!strcmp(argv[1], "--test")) {
        printf("testy, bla bla bla" );
    }
    else if (argc >= 2) {
        for (int i = 1; i < argc; i++) {
            int number = std::stoi(argv[i]);
            numbers.push_back(number);
        }
        respond_and_exit(predict(numbers));
    }
}
