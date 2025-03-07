// Write a function that returns the number of elements in an array that are equal to a given parameter.
// The function should take as parameters the array, its size, and the desired number. The function should return 0 if the size parameter, n, is less than 1.

#include <iostream>

int num_count(int array[], int n, int number) {
    if (n < 1) {
        return 0;
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] == number) {
            count++;
        }
    }

    return count;
}