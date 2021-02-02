#include"Fuctions.h"

void main()

{
	setlocale(LC_ALL, "RUS");
	const int n = 5;
	int arr[n];
	fillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Cреднее арифмитическое значение: " << Avg(arr, n) << endl;

	cout << delimiter << endl;

	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	fillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "Сумма элементов массива: " << Sum(d_arr, D_SIZE) << endl;
	cout << "Cреднее арифмитическое значение: " << Avg(d_arr, D_SIZE) << endl;

	cout << delimiter << endl;

	const int C_SIZE = 25;
	char c_arr[C_SIZE];
	fillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "Сумма элементов массива: " << Sum(c_arr, C_SIZE) << endl;
	cout << "Cреднее арифмитическое значение: " << Avg(c_arr, C_SIZE) << endl;

	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	fillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	double d_arr_2[ROWS][COLS];
	fillRand(d_arr_2, ROWS, COLS);
	Print(d_arr_2, ROWS, COLS);

	cout << delimiter << endl;

	char c_arr_2[ROWS][COLS];
	fillRand(c_arr_2, ROWS, COLS);
	Print(c_arr_2, ROWS, COLS);

}









