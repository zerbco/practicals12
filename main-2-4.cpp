#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
    int array[] = {1,2,3,4,5,6};
    int size = sizeof(array) / sizeof(array[0]);

    if (is_ascending(array,size)) {
        std::cout << "The array is ascending" << std::endl;
    } else {
        std::cout << "The array is not ascending" << std::endl;
    }

    return 0;
}