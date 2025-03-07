#include <iostream>

extern int min_element(int array[], int n);

int main() {
    int array[] = {1,2,7,3,4,6};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "The smallest number is " << min_element(array,size) << std::endl;
    return 0;
}