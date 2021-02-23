#include <iostream>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;
//������ ��������� ������, �������� ����� �������� 
//��� ������� ���������(���������� ����� �������

#include "Arrays.h"
#include "Arrsys.cpp"
#include "Memory.h"
#include "Memory.cpp"
#include "Print.h"
#include "Print.cpp"
#include "Random.h"
#include "Random.cpp"



//#define DEBUG_ASSERTION_FAILEd_1
//#define DEBUG_ASSERTION_FAILEd_2

//#define DYNAMIC_MEMORY_1
#define DYNAMIC_MEMORY_2


//////////////////////////////////////////////////////////////////////////////////////////////

typedef double DataType;

void main()
{
	setlocale(LC_ALL, "Ru");

#ifdef DEBUG_ASSERTION_FAILEd_1
	int = 2;
	int* pa = &a;
	delete pa;
#endif // !DEBUG_ASSERTION_FAILEd_1

#ifdef DYNAMIC_MEMORY_1
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

	int index;
	cout << "������� ����������� �������� "; cin >> value;
	cout << "������� ������ "; cin >> index;
	insert(arr, n, value, index);
	Print(arr, n);

	cout << "������� ����� "; cin >> value;
	pop_back(arr, n);
	Print(arr, n);

	cout << "������� ������� "; cin >> value;
	pop_front(arr, n);
	Print(arr, n);

	int value;
	cout << "������� ����������� �������� "; cin >> index;
	cout << "������� ������ "; cin >> value;
	insert(arr, n, index, value);
	Print(arr, n);


#ifdef DEBUG_ASSERTION_FAILEd_2

	int* buffer = arr;
	delete buffer;
#endif // DEBUG_ASSERTION_FAILEd_2

	delete[] arr;
}

#endif // DYNAMIC_MEMORY_1
// ��� ���� ����� �������� ��������� ������������ ������ ����� �������� ��������� �� ���������  � ������� ������ ����������
//�������� ������� ���������� ����� ������� ������ ����� ���������� �������. ������ ������ ���������� ������������� ������� ������������ ����� ������� ����������
//������������ ������. ����� ���� ��� ������ ���������� ������ ����� �������� ������ ���������, ��� ������ ������ � �����.

int m; //���������� �����
int n; //���������� ��������(���������� ������)
cout << "����� ���������� �����: "; cin >> m;
cout << "����� ���������� ��������� ������: "; cin >> n;
DataType** arr = Allocate<DataType>(m, n);
//���������� � ��������� ���������� ������������� ������� ����� ����� ��� ��, ��� � ��������� ���������� ������������ ������� ����� ������� [] ������ �� ��������� ����� 
//3) ������ � ��������� ������������ ��������:
FillRand(arr, m, n);
Print(arr, m, n);
cout << "��������� ������ � �����:\n";
push_row_back(arr, m, n);
FillRand(arr[m - 1], n, 0, 100);
Print(arr, m, n);
cout << "��������� ������ � ������:\n";
push_row_front(arr, m, n);
arr[0][3] = 123;
FillRand(arr,m,n);
Print(arr, m, n);
int index;
cout << "������� ������ ����������� ������: "; cin >> index;
insert_row(arr, m, n, index);
Print(arr, m, n);

cout << "���������� ������� � ����� �������:\n";
push_col_back(arr, m, n);
Print(arr, m, n);

cout << "���������� ������� � ������ �������:\n";
push_col_front(arr, m, n);
Print(arr, m, n);

cout << "������� ������ ����������� �������: "; cin >> index;
insert_col(arr, m, n, index);
Print(arr, m, n);

cout << "�������� ��������� ������:\n";
pop_row_back(arr, m, n);
Print(arr, m, n);

cout << "�������� ������� ������:\n";
pop_row_front(arr, m, n);
Print(arr, m, n);

cout << "������� ������� � ��������� ������������ ������� �� �������: \n";
cout << "�� ������ �������: "; cin >> index;
erase_col(arr, m, n, index);
Print(arr, m, n);



Clear(arr, m);



//��� ���� ����� �������� ��������� ������������ ������ � ������� ����������, ����� ������� ��������� ��������� �� ���������
}

