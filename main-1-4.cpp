#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);

int main() {
    int array[] = {-1,3,4,5,3};
    int secondarray[] = {-2,3,5,3,-5};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "The sum of two array is " << sum_two_arrays(array,secondarray,size) << std::endl;
    return 0;
}