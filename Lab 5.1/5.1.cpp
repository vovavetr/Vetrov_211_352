#include <iostream>
#include "array.h"

int main() {
    Array matr1;
    matr1.input();
    matr1.print();
    std::cout << matr1.trace(matr1.matr, matr1.get_rows()) << std::endl;
    return 0;
}