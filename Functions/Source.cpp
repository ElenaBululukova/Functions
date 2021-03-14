#include<iostream>
using namespace std;
#define tab "\t"

void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void Sum(int arr[], const int n);
void Avg(int arr[], const int n);
void Min(int arr[], const int n);
void Max(int arr[], const int n);

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
	Sum(arr, n);
	Avg(arr, n);
	Print(arr, n);
	Min(arr, n);
	Max(arr, n);
	

	const int m = 8;
	int brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Введите колличество сдвигов:"; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	Sum(brr, m);
	Avg(brr, m);
	Print(brr, m);
	Min(brr, m);
	Max(brr, m);
}
void FillRand(int arr[], const int n)
{
	//Заполняем массив случайными числами;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void Print(int arr[], const int n)
{
	// Выводим массив на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}

void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}


void Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов:" << sum << endl;
}

void Avg(int arr[], const int n)
{
	double avg = 0;
	for (int i = 0; i < n; i++)
	{
		avg += arr[i];
	}
	cout << "Среднее значение элементов:" << avg / n << endl;
}

void Min(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min);
		min = arr[i];

	}
	cout << "Минимальное значение элемента:" << min << endl;

}

void Max(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max);
		max = arr[i];

	}
	cout << "Максимальное значение элемента:" << max << endl;
}
