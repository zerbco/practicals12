#include <iostream>

extern double weighted_average(int array[], int n);

int main() {
    int array[] = {1,2,1,4,1,3};
    int size = sizeof(array) / sizeof(array[0]);

    double result = weighted_average(array,size);
    std::cout << "The weighted average is: " << result << std::endl;

    return 0;
}