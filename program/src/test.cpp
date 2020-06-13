#include "test.hpp"


void print_vector(vector<int> &given) {
    for (int i=0; i<given.size(); i++) {
        cout<<given.at(i) << " ";
    }
}

void test(string expected_series_name, int expected_next_number, unique_ptr<Prediction> actual) {
    if (actual->series_name == expected_series_name && actual->next_number == expected_next_number) {
        cout << ".";
        return;
    }

    cout << "\nTest falied!" << endl;
    cout << "input: ";
    print_vector(actual->input);
    cout << endl;

    if (actual->series_name != expected_series_name) {
        cout << "expected series name: " << expected_series_name << endl;
        cout << "actual: " << actual->series_name << endl;
    }

    if (actual->next_number != expected_next_number) {
        cout << "expected next number: " << expected_next_number << endl;
        cout << "actual: " << actual->next_number << endl;
    }
    cout << "-------\n";
}

void run_tests() {
    test("Arithmetic Series", 4, predict({1, 2, 3}));
    test("Arithmetic Series", 15, predict({0, 5, 10}));
    test("Arithmetic Series", -15, predict({0, -5, -10}));
    test("Arithmetic Series", -15, predict({0, -5, -10}));
    test("Arithmetic Series", 6, predict({2, 4}));
    test("Arithmetic Series", NULL, predict({1, 3, 2}));
    test("Arithmetic Series", 56, predict({1, 3, 2}));




}