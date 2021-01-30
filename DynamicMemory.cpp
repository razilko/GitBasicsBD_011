#include <iostream>
using namespace std;
//������ ��������� ������, �������� ����� �������� 
//��� ������� ���������(���������� ����� �������
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void push_back_mutable(int*& arr, int& n, int value);// �������� �������� � ����� 
void push_front_mutable(int*& arr, int& n, int value);//�������� �������� � ������
void pop_back(int*& arr, int& n, int value);// ������� �������� � ����� �������
void pop_front(int*& arr, int& n, int value);// ������� �������� � ������ �������
//#define DEBUG_ASSERTION_FAILEd_1
//#define DEBUG_ASSERTION_FAILEd_2

//////////////////////////////////////////////////////////////////////////////////////////////
void main()
{
	setlocale(LC_ALL, "Ru");
	
	#ifdef DEBUG_ASSERTION_FAILEd_1
	int = 2;
	int* pa = &a;
	delete pa;
#endif // !DEBUG_ASSERTION_FAILEd_1

	int n;
	cout << "������ ������ �������: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);
	
	int value;
	cout << "������� ����������� �������� "; cin >> value;
	push_back_mutable(arr, n, value);
	Print(arr, n);

	cout << "������� ����������� �������� "; cin >> value;
	push_front_mutable(arr, n, value);
	Print(arr, n);

	cout << "������� ����������� ����� "; cin >> value;
	pop_back(arr, n, value);
	Print(arr, n);

	cout << "������� ����������� ������� "; cin >> value;
	pop_front(arr, n, value);
	Print(arr, n);


#ifdef DEBUG_ASSERTION_FAILEd_2

	int* buffer = arr;
	delete buffer;
#endif // DEBUG_ASSERTION_FAILEd_2

	delete[] arr;
}
///////////////////////////////////////////////////////////////////////////////////////////////
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}


void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
void push_back_mutable(int*& arr, int& n, int value)
{
int* buffer = new int[n + 1]{};
	for (int i=0; i < n; i++)
	{
		buffer[i] = arr[i];

	}
	delete arr;
	arr = buffer;
	arr[n] = value;
	n++;
	
}
void push_front_mutable(int*& arr, int& n, int value)
{
	//1. ������� �������� ������ ������� �������
	int* buffer = new int[n + 1]{};
	//2. �������� �������� �� ��������� ������� � �������� �� ���������
	for (int i = 0; i < n; i++)
	{
		buffer[i+1] = arr[i];

	}
	//3. ������� �������� ������
	delete arr;
	//4. ��������� ��������� � ������ �������
	arr = buffer;
	//.5 ��������� �������� � ������ �������
	arr[0] = value;
	//.6 ��������� ������ �������
	n++;
}
void pop_back(int*& arr, int& n, int value)
{
	int* buffer = new int[n]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];

	}
	delete arr;
	arr = buffer;
	n--;
}
void pop_front(int*& arr, int& n, int value)//��������
{
	int* buffer = new int[n] {};
	for (int i = n+1; i < n; i++)
	{
		buffer[i] = arr[i];

	}
	delete arr;
	arr = buffer;
	n--;
}