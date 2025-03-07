#include <iostream>

extern int max_element(int array[], int n);

int main() {
    int array[] = {1,2,7,3,4,6};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "The highest number is " << max_element(array,size) << std::endl;
    return 0;
}