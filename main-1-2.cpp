#include <iostream>

extern double array_mean(int[],int);

int main() {
    int array[5] = {-1,5,-6,-7,8};
    std::cout.precision(2);
    std::cout << "The result is: " << array_mean(array, 5) << std::endl;
    return 0;
}