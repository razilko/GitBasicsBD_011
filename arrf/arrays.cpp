#include "Functions.h"

// ��������� �� ���������. �� �������� � ���, ��� ������� ����� ���������� ����� ������� ���������� ������� ��� ��������� �� ������ � �� ������,
// �� � ��������� ������� � ������� ����� �������� ������ ���������� ��� ��� ���������, ��������� ���������� �� ��������� 
// ��������� �� ��������� - ��� ��������� � ������� ���� �������� �� ���������, ���� �������� �������� �������� ��� ������ �������, �� �� ��������� ���������� �������� 
//#define DEBUG
#define delimeter "\n--------------------------------------------------\n"
void main()
{
	setlocale(LC_ALL, "ru");

	//
	int arr[n];
	cout << "���������� ������  :  \n";
	cout << "��� int :  \n";
	FillRand(arr, n);
	Print(arr, n);
	cout << "����� ��������� ������� : " << Sum(arr, n) << endl;
	cout << "������� �������������� : " << Avg(arr, n) << endl;
	cout << "����������� �������� � ������� : " << minValueIn(arr, n) << endl;
	cout << "�������������� �������� � ������� : " << maxValueIn(arr, n) << endl;
	cout << "��������������� ������ :\n";
	Sort(arr, n);
	Print(arr, n);
	cout << delimeter << endl;
	//
	//
	cout << "��� double :  \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "����� ��������� ������� :" << Sum(brr, n) << endl;
	cout << "������� �������������� : " << Avg(brr, n) << endl;
	cout << "����������� �������� � ������� : " << minValueIn(brr, n) << endl;
	cout << "�������������� �������� � ������� : " << maxValueIn(brr, n) << endl;
	cout << "��������������� ������ :\n";
	Sort(brr, n);
	Print(brr, n);
	cout << delimeter << endl;
	//
	//
	cout << "��� float :  \n";
	float frr[n];
	FillRand(frr, n);
	Print(frr, n);
	cout << "����� ��������� ������� : " << Sum(frr, n) << endl;
	cout << "������� �������������� : " << Avg(frr, n) << endl;
	cout << "����������� �������� � ������� : " << minValueIn(frr, n) << endl;
	cout << "�������������� �������� � ������� : " << maxValueIn(frr, n) << endl;
	cout << "��������������� ������ :\n";
	Sort(frr, n);
	Print(frr, n);
	cout << delimeter << endl;
	//
	//
	cout << "��� char :  \n";
	char crr[n];
	cout << "���������� ������ ���� char :  \n";
	setlocale(LC_ALL, "C");
	FillRand(crr, n);
	Print(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "����� ��������� ������� : ";
	setlocale(LC_ALL, "C");
	Sum(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "������� �������������� : ";
	setlocale(LC_ALL, "C");
	Avg(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;


	cout << "����������� �������� � ������� : ";
	setlocale(LC_ALL, "C");
	minValueIn(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "����������� �������� � ������� : ";
	setlocale(LC_ALL, "C");
	maxValueIn(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;


	cout << "��������������� ������ :\n";
	setlocale(LC_ALL, "C");
	Sort(crr, n);
	Print(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;
	cout << delimeter << endl;
	//
	cout << "��������� ������  :  \n";///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "��� int :  \n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "����� ��������� ������� : " << Sum(arr2, ROWS, COLS) << endl;
	cout << "������� �������������� : " << Avg(arr2, ROWS, COLS) << endl;
	cout << "����������� �������� � ������� : " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "�������������� �������� � ������� : " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << "��������������� ������ :\n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << delimeter << endl;
	//
	//
	cout << "��� double :  \n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "����� ��������� ������� : " << Sum(brr2, ROWS, COLS) << endl;
	cout << "������� �������������� : " << Avg(brr2, ROWS, COLS) << endl;
	cout << "����������� �������� � ������� : " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "�������������� �������� � ������� : " << maxValueIn(brr2, ROWS, COLS) << endl;
	cout << "��������������� ������ :\n";
	Sort(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << delimeter << endl;
	//
	//
	cout << "��� float :  \n";
	float frr2[ROWS][COLS];
	FillRand(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);
	cout << "����� ��������� ������� : " << Sum(frr2, ROWS, COLS) << endl;
	cout << "������� �������������� : " << Avg(frr2, ROWS, COLS) << endl;
	cout << "����������� �������� � ������� : " << minValueIn(frr2, ROWS, COLS) << endl;
	cout << "�������������� �������� � ������� : " << maxValueIn(frr2, ROWS, COLS) << endl;
	cout << "��������������� ������ :\n";
	Sort(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);
	cout << delimeter << endl;
	//
	//
	cout << "��� char :  \n";
	char crr2[n];
	cout << "��������� ������ ���� char :  \n";
	setlocale(LC_ALL, "C");
	FillRand(crr2, n);
	Print(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "����� ��������� ������� : ";
	setlocale(LC_ALL, "C");
	Sum(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "������� �������������� : ";
	setlocale(LC_ALL, "C");
	Avg(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;


	cout << "����������� �������� � ������� : ";
	setlocale(LC_ALL, "C");
	minValueIn(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "����������� �������� � ������� : ";
	setlocale(LC_ALL, "C");
	maxValueIn(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;


	cout << "��������������� ������ :\n";
	setlocale(LC_ALL, "C");
	Sort(crr2, n);
	Print(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;
	cout << delimeter << endl;
	


#ifdef DEBUG
	FillRand(arr, n, 1000, 2000);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "C������ ��������������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	cout << "��������������� ������: " << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << endl;

	const int m = 10;
	int brr[m];
	FillRand(brr, m, 80);
	Print(brr, m);
	cout << "����� ��������� �������: " << Sum(brr, m) << endl;
	cout << "C������ ��������������: " << Avg(brr, m) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, m) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, m) << endl;
	cout << "��������������� ������: " << endl;
	Sort(brr, m);
	Print(brr, m);
	cout << endl;

	const int SIZE_C = 12;
	int crr[SIZE_C];
	FillRand(crr, SIZE_C);
	Print(crr, SIZE_C);
	cout << "����� ��������� �������: " << Sum(crr, SIZE_C) << endl;
	cout << "C������ ��������������: " << Avg(crr, SIZE_C) << endl;
	cout << "����������� �������� � �������: " << minValueIn(crr, SIZE_C) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(crr, SIZE_C) << endl;
	cout << "��������������� ������: " << endl;
	Sort(crr, SIZE_C);
	Print(crr, SIZE_C);
	cout << endl;

#endif // DEBUG
}
