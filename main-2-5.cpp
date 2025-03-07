#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    int array[] = {5,4,3,2,1};
    int size = sizeof(array) / sizeof(array[0]);

    if (is_descending(array, size)) {
        std::cout << "The order is descending" << std::endl;

    } else {
        std::cout << "The order is not descending" << std::endl;
    }
    return 0;
}