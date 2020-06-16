#include "prediction.hpp"
#include "test.hpp"

void respond_and_exit(unique_ptr<Prediction> prediction) {
    if (prediction == nullptr) {
        exit(1);
    } else {
        print(std::move(prediction));
        exit(0);
    }
}


vector<int>* parse_and_validate(int argc, char *argv[]) {
    if (argc == 1 || argc == 2) {
        return nullptr;
    }

    if (!strcmp(argv[1], "--tests")) {
        run_tests();
        return nullptr;
    }

    auto numbers = new vector<int>;
    for (int i = 1; i < argc; i++) {
        try {
            int number = std::stoi(argv[i]);
            numbers->push_back(number);
        }
        catch (...) {
            return nullptr;
        }
    }
    return numbers;
}


int main(int argc, char *argv[]) {
    vector<int>* numbers = parse_and_validate(argc, argv);
    respond_and_exit(predict(*numbers));
    return 0;
}
