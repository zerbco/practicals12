#include <iostream>

extern bool is_fanarray(int array[], int n);

int main() {
    int array[] = {1,2,3,2,1};
    int size = sizeof(array) / sizeof(array[0]);
    
    if (is_fanarray(array,size)) {
        std::cout << "This is fan array" << std::endl;
    } else {
        std::cout << "This is not fan array" << std::endl;
    }
    return 0;
}