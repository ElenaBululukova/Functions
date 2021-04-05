
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



