#include <iostream>
using namespace std;

#define delimiter "\n-------------------------\n"
const int ROWS = 8;
const int COLS = 5;

void fillRand(int arr[], const int n);
void fillRand(double arr[], const int n);
void fillRand(char arr[], const int n);
void fillRand(int arr[ROWS][COLS], const int m, const int n);

template <typename T> void Print(T arr[], const int n);
template <typename T> void Print(T arr[ROWS][COLS], const int m, const int n);

template <typename T> void Sort(T arr[], const int n);
template <typename T> T Sum(T arr[], const int n);
template <typename T> double Avg(T arr[], const int n);

void main()

{
	setlocale(LC_ALL, "RUS");
	const int n = 5;
	int arr[n];
	fillRand(arr, n);
	Print(arr, n);
	Sort(arr, n);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "C������ �������������� ��������: " << Avg(arr, n) << endl;
	
	cout << delimiter << endl;
	
	const int D_SIZE = 8;
	double d_arr[D_SIZE];
	fillRand(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	Sort(d_arr, D_SIZE);
	Print(d_arr, D_SIZE);
	cout << "����� ��������� �������: " << Sum(d_arr, D_SIZE) << endl;
	cout << "C������ �������������� ��������: " << Avg(d_arr, D_SIZE) << endl;

	cout << delimiter << endl;

	const int C_SIZE = 25;
	char c_arr[C_SIZE];
	fillRand(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	Sort(c_arr, C_SIZE);
	Print(c_arr, C_SIZE);
	cout << "����� ��������� �������: " << Sum(c_arr, C_SIZE) << endl;
	cout << "C������ �������������� ��������: " << Avg(c_arr, C_SIZE) << endl;
	
	cout << delimiter << endl;

	int i_arr_2[ROWS][COLS];
	fillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);

}

void fillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}
void fillRand(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		arr[i] /= 10;
	}
}
void fillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
		
	}
}
void fillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}
template <typename T> void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T> void Print(T arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T> void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}
}

template<typename T> T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T> double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}