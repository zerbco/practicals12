#include <iostream>

int min_element(int array[], int n) {
    if (n < 1) {
        return 0;
    }

    int min = array[0];
    for (int i = 0; i < n; i++) {
        if (min > array[i]) {
            min = array[i];
        }
    }
    return min;
}