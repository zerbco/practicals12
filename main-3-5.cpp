#include <iostream>

extern double sum_even(double array[], int n); 

int main(){
    double array[] = {1,2,3,4,5,6};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << "The sum of elements in even positions are: " << sum_even(array,size) << std::endl;
    return 0;
}