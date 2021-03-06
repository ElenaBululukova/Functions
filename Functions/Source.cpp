#include<iostream>
using namespace std;
#define tab "\t"                    
									

void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(double arr[], const int n, int minRand=0, int maxRand=100);
void FillRand(float arr[], const int n, int minRand=0, int maxRand=100);
void Print(int arr[], const int n);
void Print(double arr[], const int n);
void ShiftLeft(int arr[], const int n, const int number_of_shifts);
void ShiftLeft(double arr[], const int n, const int number_of_shifts);
int Sum(int arr[], const int n);
double Sum(double arr[], const int n);
double Avg(int arr[], const int n);
double Avg(double arr[], const int n);
int Min(int arr[], const int n);
double Min(double arr[], const int n);
int Max(int arr[], const int n);
double Max(double arr[], const int n);
void Sort(int arr[], const int n);
void Sort(double arr[], const int n);

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
	cout << "������������ �������� ��������:" << Max(arr,n) << endl;
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

	
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	//��������� ������ ���������� �������;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+minRand;
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
void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	//��������� ������ ���������� �������;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(int arr[], const int n)
{
	// ������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
void Print(double arr[], const int n)
{
	// ������� ������ �� �����:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}void Print(float arr[], const int n)
{
	// ������� ������ �� �����:
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
void ShiftLeft(double arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		double buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++) 
	{
		sum += arr[i];
	}
	return sum;
}
double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}
double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

int Min(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

double Min(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int Max(int arr[], const int n)
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];

	}
	return max;
}
double Max(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];

	}
	return max;
}


void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i]) 
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}
void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}