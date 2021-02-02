#include"Fuctions.h"
double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}

double Avg(char arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}