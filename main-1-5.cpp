#include <iostream>

extern int count_evens(int number);

int main() {
    int number = 10;

    std::cout << "There are " << count_evens(number) << " even numbers"<< std::endl;
    return 0;
}