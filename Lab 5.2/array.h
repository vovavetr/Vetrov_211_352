#pragma once
class Array {
private:

	int col, rows;

public:

	double * matr = new double;

	/////////////////////////////////////////////////////////////////////// ����������� �������

	void matrix(int i, int j) {
		col = i, rows = j;
		matr = new double[i * j]{ 0 };
	}

	void matrix(int i, int j, double* arr) {
		col = i, rows = j;
		matr = new double[i * j];
		for (int i = 0; i < rows * col; i++) {
			matr[i] = arr[i];
		}
	}



	/////////////////////////////////////////////////////////////////////// ���� �������

	void input() { //����. �������
		std::cout << "Input size of matrix: ";
		std::cin >> col >> rows;
		matr = new double[(col) * (rows)];
		std::cout << "Input elements:" << std::endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < col; j++) {
				std::cout << "Input " << "[" << i << "][" << j << "]: ";
				std::cin >> matr[i * col + j];
			}
		}
		std::cout << std::endl;
	}

	void input(int col1, int rows1) { //����. ����������.
		col = col1; rows = rows1;
		matr = new double[(col) * (rows)];
		std::cout << "Input elements:" << std::endl;
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < col; j++) {
				std::cout << "Input " << "[" << i << "][" << j << "]: ";
				std::cin >> matr[i * col + j];
			}
		}
		std::cout << std::endl;
	}

	void input(int col1, int rows1, double* arr) { //����. ����������.
		col = col1; rows = rows1;
		matr = new double[(col) * (rows)];
		for (int i = 0; i < rows * col; i++) {
			matr[i] = arr[i];
		}
		std::cout << std::endl;
	}



	/////////////////////////////////////////////////////////////////////// ����� �������

	void print() {
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < col; j++) {
				std::cout << matr[i * (col) + j] << "\t";
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;
	}



	/////////////////////////////////////////////////////////////////////// ����� ������

	int matrixsum(double *matr1, double *matr2, int col1, int rows2) {
		if (col1 != rows2) return 0;
		matr = new double[col1 * rows2];
		col = col1; rows = rows2;
		for (int i = 0; i < col1 * rows2; i++) {
			matr[i] = matr1[i] + matr2[i];
		}
		return 1;
	}

	void matrixsum(double* matr1) {
		for (int i = 0; i < this -> get_size(); i++) {
			matr[i] += matr1[i];
		}
	}

	int matrixsum(double* matr1, int size) {
		if (this -> get_size() != size) return 0;
		for (int i = 0; i < size; i++) {
			matr[i] += matr1[i];
		}
		return 1;
	}



	/////////////////////////////////////////////////////////////////////// ��������� ������

	int matrixmult(double* matr1, int col1, int rows1, double* matr2, int col2, int rows2) { //���� ������� = ������ ������� * ������ �������
		if (col1 == rows2) {
			col = col1; rows = rows2;
			matr = new double[rows * col];
			for (int i = 0; i < rows1; i++)
				for (int j = 0; j < col2; j++)
				{
					matr[i * col2 + j] = 0;
					for (int k = 0; k < col1; k++)
						matr[i * col2 + j] += matr1[i * col1 + k] + matr2[k * col2 + j];
				}
			return 0;
		}
		else {
			std::cout << "Error of mult: sizes are not equal.";
			col = rows = 0;
			return 1;
		}
	}

	int matrixmult(double* matr1, int col1, int rows1) { // ���� ������� = ���� ������� * ������ �������
		if (col == rows1) {
			for (int i = 0; i < rows; i++)
				for (int j = 0; j < col; j++)
				{
					matr[i * col1 + j] = 0;
					for (int k = 0; k < col; k++)
						matr[i * col1 + j] += matr[i * col + k] + matr1[k * col1 + j];
				}
			return 0;
		}
		else {
			std::cout << "Error of mult: sizes are not equal.";
			return 1;
		}
	}



	/////////////////////////////////////////////////////////////////////// ��������� ������� �� �����

	void mult_by_num(double num) {
		for (int i = 0; i < rows * col; i++) {
			matr[i] *= num;
		}
		std::cout << "Multiplied successful with " << num << ".\n\n";
	}



	/////////////////////////////////////////////////////////////////////// ����� ���������

	double trace() {
		double sum = 0;
		int diag = this -> get_size() / 2;
		for (int i = 0; i < diag; i++) {
			sum += matr[i * diag];
		}
		return sum;
	}



	/////////////////////////////////////////////////////////////////////// Get'� ����������

	int get_columns() {
		return col;
	}

	int get_rows() {
		return rows;
	}

	int get_size() {
		return col * rows;
	}

	double get_elem(int i, int j) {
		return matr[i * col + j];
	}
};