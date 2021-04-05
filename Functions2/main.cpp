
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"ShiftLeft.h"
#include"Statistic.h"

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions!" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	int number_of_shifts;
	cout << "Введите колличество сдвигов:"; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Сумма элементов массива:" << Sum(arr, n) << endl;
	cout << "Среднее арифмитическое массива:" << Avg(arr, n) << endl;
	cout << "Минимальное значение элемента:" << Min(arr, n) << endl;
	cout << "Максимальное значение элемента:" << Max(arr, n) << endl;
	cout << "Отсортированный массив:" << endl;
	Sort(arr, n);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	Min(arr, n);
	Max(arr, n);


	const int m = 8;
	double brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Введите колличество сдвигов:"; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	cout << "Сумма элементов массива:" << Sum(brr, m) << endl;
	cout << "Среднее арифмитическое массива:" << Avg(brr, m) << endl;
	cout << "Минимальное значение элемента:" << Min(brr, m) << endl;
	cout << "Максимальное значение элемента:" << Max(brr, m) << endl;
	cout << "Отсортированный массив:" << endl;
	Sort(brr, m);
	Print(brr, m);
	Sum(brr, m);
	Avg(brr, m);
	Min(brr, m);
	Max(brr, m);

	//////Вывод CHAR
	cout << "CHAR:\n";
	const int SIZE_CHAR = 10;
	char c_arr[SIZE_CHAR];
	FillRand(c_arr, SIZE_CHAR);
	Print(c_arr, SIZE_CHAR);

	//////Вывод FLOAT
	cout << "FLOAT:" << endl;
	const int SIZE_FLOAT = 7;
	float f_arr[SIZE_FLOAT];
	FillRand(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);
	cout << "Сумма элементов массива:" << Sum(f_arr, SIZE_FLOAT) << endl;
	cout << "Среднее арифмитическое массива:" << Avg(f_arr, SIZE_FLOAT) << endl;
	cout << "Минимальное значение элемента:" << Min(f_arr, SIZE_FLOAT) << endl;
	cout << "Максимальное значение элемента:" << Max(f_arr, SIZE_FLOAT) << endl;
	cout << "Отсортированный массив:" << endl;
	Sort(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);
	cout << "Введите кол-во сдвигов:"; cin >> number_of_shifts;
	ShiftLeft(f_arr, SIZE_FLOAT, number_of_shifts);
	Print(f_arr, SIZE_FLOAT);
}



