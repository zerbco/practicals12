#include <iostream>

int array_sum(int array[], int n) {

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += array[i];
        if (total < 1) {
            array[i] = 0;
        }
    }
    return total;
}
