#include <iostream>
#include <algorithm>

extern int median_array(int array[], int n);

int main() {
    int array[] = {3,4,2,1,5};
    int size = sizeof(array) / sizeof(array[0]);

    int median = median_array(array,size);

    if (median != 0) {
        std::cout << "The median is " << median << std::endl;
    } else {
        std::cout << "The median is invalid" << std::endl;
    }

    return 0;
}