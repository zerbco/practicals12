#include <iostream>

double weighted_average(int array[], int n) {
    if (n < 1) {
        return 0.0;
    }

    double weightedsum = 0.0;

    for (int i = 0; i < n; i++) {

        if (array[i] == -1) {
            continue;
        }
        
        int elements = array[i];
        int freq = 1;
        
        for (int j = i + 1; j < n; j++) {
            if (array[j] == elements) {
                freq++;
                array[j] = -1;
            }
        }
        weightedsum += elements * freq;
    }

    return weightedsum / n ;
}
