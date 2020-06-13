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


void parse_and_validate(int argc, char *argv[]) {
    vector<int> numbers;
    if(!strcmp(argv[1], "--tests")) {
        run_tests();
    }
    else if (argc >= 2) {
        for (int i = 1; i < argc; i++) {
            try {
                int number = std::stoi(argv[i]);
                numbers.push_back(number);
            }
            catch (...) {
                exit(2);
            }
        }
        respond_and_exit(predict(numbers));
    }
}


int main(int argc, char *argv[]) {
    run_tests();
    //parse_and_validate(argc, argv);
}
