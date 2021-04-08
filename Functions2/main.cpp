#include<iostream>
using namespace std;
#define tab "\t"                     

void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);

template<typename T>void Print(T arr[], const int n);
template<typename T>void ShiftLeft(T arr[], const int n, const int number_of_shifts);
template<typename T>T Sum(T arr[], const int n);
template<typename T>double Avg(T arr[], const int n);
template<typename T>T Min(T arr[], const int n);
template<typename T>T Max(T arr[], const int n);
template<typename T>void Sort(T arr[], const int n);

void main()
{
	setlocale(LC_ALL, "");
	cout << "Hello Functions!" << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	int number_of_shifts;
	cout << "������� ����������� �������:"; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "����� ��������� �������:" << Sum(arr, n) << endl;
	cout << "������� �������������� �������:" << Avg(arr, n) << endl;
	cout << "����������� �������� ��������:" << Min(arr, n) << endl;
	cout << "������������ �������� ��������:" << Max(arr, n) << endl;
	cout << "��������������� ������:" << endl;
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
	cout << "������� ����������� �������:"; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	cout << "����� ��������� �������:" << Sum(brr, m) << endl;
	cout << "������� �������������� �������:" << Avg(brr, m) << endl;
	cout << "����������� �������� ��������:" << Min(brr, m) << endl;
	cout << "������������ �������� ��������:" << Max(brr, m) << endl;
	cout << "��������������� ������:" << endl;
	Sort(brr, m);
	Print(brr, m);
	Sum(brr, m);
	Avg(brr, m);
	Min(brr, m);
	Max(brr, m);

	//////����� CHAR
	cout << "CHAR:\n";
	const int SIZE_CHAR = 10;
	char c_arr[SIZE_CHAR];
	FillRand(c_arr, SIZE_CHAR);
	Print(c_arr, SIZE_CHAR);

	//////����� FLOAT
	cout << "FLOAT:" << endl;
	const int SIZE_FLOAT = 7;
	float f_arr[SIZE_FLOAT];
	FillRand(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);
	cout << "����� ��������� �������:" << Sum(f_arr, SIZE_FLOAT) << endl;
	cout << "������� �������������� �������:" << Avg(f_arr, SIZE_FLOAT) << endl;
	cout << "����������� �������� ��������:" << Min(f_arr, SIZE_FLOAT) << endl;
	cout << "������������ �������� ��������:" << Max(f_arr, SIZE_FLOAT) << endl;
	cout << "��������������� ������:" << endl;
	Sort(f_arr, SIZE_FLOAT);
	Print(f_arr, SIZE_FLOAT);
	cout << "������� ���-�� �������:"; cin >> number_of_shifts;
	ShiftLeft(f_arr, SIZE_FLOAT, number_of_shifts);
	Print(f_arr, SIZE_FLOAT);
}
void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	//��������� ������ ���������� �������;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 256;
	}
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//��������� ������ ���������� �������;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	//��������� ������ ���������� �������;
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		// ������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767
	}
}
void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	//��������� ������ ���������� �������;
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
		// ������� rand() ���������� ��������������� ����� � ��������� �� 0 �� 32 767
	}
}
template<typename T>void Print(T arr[], const int n)
{
	// ������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
template <typename T>void ShiftLeft(T arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		T buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
template<typename T>T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
template<typename T>double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

template<typename T>T Min(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

template<typename T>T Max(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];

	}
	return max;
}
template<typename T>void Sort(T arr[], const int n)
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
