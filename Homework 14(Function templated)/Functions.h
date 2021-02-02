#pragma once
#include <iostream>
using namespace std;

#define delimiter "\n-------------------------\n"
const int ROWS = 8;
const int COLS = 5;

void fillRand(int arr[], const int n);
void fillRand(double arr[], const int n);
void fillRand(char arr[], const int n);
void fillRand(int arr[ROWS][COLS], const int m, const int n);
void fillRand(double arr[ROWS][COLS], const int m, const int n);
void fillRand(char arr[ROWS][COLS], const int m, const int n);

template <typename T>void Print(T arr[], const int n);
template <typename T>void Print(T arr[ROWS][COLS], const int m, const int n);

template <typename T>void Sort(T arr[], const int n);
template <typename T>T Sum(T arr[], const int n);
template <typename T>double Avg(T arr[], const int n);

