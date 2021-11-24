#include <iostream>
#include "array.h"

int main() {
	Array matr1;
	matr1.input(3, 3);
	matr1.print();
	Array matr2;
	matr2.input(3, 3);
	matr2.print();
	Array matr3;
	matr3.matrix(3, 3);
	matr3.matrixsum(matr2.matr);
	matr3.print();
	matr1.matrixmult(matr2.matr, matr2.get_columns(), matr2.get_rows());
	matr1.print();
	std::cout << matr1.trace() << std::endl;
}