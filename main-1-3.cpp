#include <iostream>

extern int num_count(int array[], int n, int number); 

int main() {

int array[] = {2,3,4,4,5};
int size = sizeof(array) / sizeof(array[0]);
int number = 4;

std::cout << "The number " << number << " appears " << num_count(array,size,number) << " times " << std::endl;
return 0;
}
