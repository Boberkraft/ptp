#include <iostream>
#include <vector>
#include <string>

using std::vector, std::cout, std::endl;

#include "arithmetic.hpp"
#include "geometric.hpp"




int predict(vector<int> given) {
    int last = *(given.rbegin());
    int second_last = *(given.rbegin() + 1);

    

    return NULL;
}

void respond_or_exit(int predicted_value) {
    if (predicted_value == NULL) {
        exit(1);
    } else {
        cout << predicted_value;
        exit(0);
    }
}

int main() {
    vector<int> given = { 1, 2, 3, 4, 5 };

    respond_or_exit(predict(given));  
}
