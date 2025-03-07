#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
    int array[] = {2,2,2,2,4,4,5,5,5,6,6,6,7,7,7,9,9,9,9};
    int size = sizeof(array) / sizeof(array[0]);

    two_five_nine(array,size);

    return 0;
}