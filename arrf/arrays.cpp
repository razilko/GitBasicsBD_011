#include "Functions.h"

// Параметры по умолчанию. мы говорили о том, что функцию нужно передавать ровно столько параметров сколько она принимает не меньше и не больше,
// но в некоторых случаях в функцию можно передать меньше параметров чем она принимает, благодарю параметрам по умолчанию 
// параметры по умолчанию - это параметры у которых есть значение по умолчанию, если параметр получает значение при вызове функции, то он принимает полученное значение 
//#define DEBUG
#define delimeter "\n--------------------------------------------------\n"
void main()
{
	setlocale(LC_ALL, "ru");

	//
	int arr[n];
	cout << "Одномерный массив  :  \n";
	cout << "Тип int :  \n";
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива : " << Sum(arr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве : " << minValueIn(arr, n) << endl;
	cout << "Максильмальное значение в массиве : " << maxValueIn(arr, n) << endl;
	cout << "Отсортированный массив :\n";
	Sort(arr, n);
	Print(arr, n);
	cout << delimeter << endl;
	//
	//
	cout << "Тип double :  \n";
	double brr[n];
	FillRand(brr, n);
	Print(brr, n);
	cout << "Сумма элементов массива :" << Sum(brr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(brr, n) << endl;
	cout << "Минимальное значение в массиве : " << minValueIn(brr, n) << endl;
	cout << "Максильмальное значение в массиве : " << maxValueIn(brr, n) << endl;
	cout << "Отсортированный массив :\n";
	Sort(brr, n);
	Print(brr, n);
	cout << delimeter << endl;
	//
	//
	cout << "Тип float :  \n";
	float frr[n];
	FillRand(frr, n);
	Print(frr, n);
	cout << "Сумма элементов массива : " << Sum(frr, n) << endl;
	cout << "Среднее арифметическое : " << Avg(frr, n) << endl;
	cout << "Минимальное значение в массиве : " << minValueIn(frr, n) << endl;
	cout << "Максильмальное значение в массиве : " << maxValueIn(frr, n) << endl;
	cout << "Отсортированный массив :\n";
	Sort(frr, n);
	Print(frr, n);
	cout << delimeter << endl;
	//
	//
	cout << "Тип char :  \n";
	char crr[n];
	cout << "Одномерный массив типа char :  \n";
	setlocale(LC_ALL, "C");
	FillRand(crr, n);
	Print(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "Сумма элементов массива : ";
	setlocale(LC_ALL, "C");
	Sum(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "Среднее арифметическое : ";
	setlocale(LC_ALL, "C");
	Avg(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;


	cout << "Минимальное значение в массиве : ";
	setlocale(LC_ALL, "C");
	minValueIn(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "Минимальное значение в массиве : ";
	setlocale(LC_ALL, "C");
	maxValueIn(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;


	cout << "Отсортированный массив :\n";
	setlocale(LC_ALL, "C");
	Sort(crr, n);
	Print(crr, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;
	cout << delimeter << endl;
	//
	cout << "Двумерный массив  :  \n";///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Тип int :  \n";
	int arr2[ROWS][COLS];
	FillRand(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << "Сумма элементов массива : " << Sum(arr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве : " << minValueIn(arr2, ROWS, COLS) << endl;
	cout << "Максильмальное значение в массиве : " << maxValueIn(arr2, ROWS, COLS) << endl;
	cout << "Отсортированный массив :\n";
	Sort(arr2, ROWS, COLS);
	Print(arr2, ROWS, COLS);
	cout << delimeter << endl;
	//
	//
	cout << "Тип double :  \n";
	double brr2[ROWS][COLS];
	FillRand(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << "Сумма элементов массива : " << Sum(brr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(brr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве : " << minValueIn(brr2, ROWS, COLS) << endl;
	cout << "Максильмальное значение в массиве : " << maxValueIn(brr2, ROWS, COLS) << endl;
	cout << "Отсортированный массив :\n";
	Sort(brr2, ROWS, COLS);
	Print(brr2, ROWS, COLS);
	cout << delimeter << endl;
	//
	//
	cout << "Тип float :  \n";
	float frr2[ROWS][COLS];
	FillRand(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);
	cout << "Сумма элементов массива : " << Sum(frr2, ROWS, COLS) << endl;
	cout << "Среднее арифметическое : " << Avg(frr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве : " << minValueIn(frr2, ROWS, COLS) << endl;
	cout << "Максильмальное значение в массиве : " << maxValueIn(frr2, ROWS, COLS) << endl;
	cout << "Отсортированный массив :\n";
	Sort(frr2, ROWS, COLS);
	Print(frr2, ROWS, COLS);
	cout << delimeter << endl;
	//
	//
	cout << "Тип char :  \n";
	char crr2[n];
	cout << "Двумерный массив типа char :  \n";
	setlocale(LC_ALL, "C");
	FillRand(crr2, n);
	Print(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "Сумма элементов массива : ";
	setlocale(LC_ALL, "C");
	Sum(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "Среднее арифметическое : ";
	setlocale(LC_ALL, "C");
	Avg(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;


	cout << "Минимальное значение в массиве : ";
	setlocale(LC_ALL, "C");
	minValueIn(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;

	cout << "Минимальное значение в массиве : ";
	setlocale(LC_ALL, "C");
	maxValueIn(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;


	cout << "Отсортированный массив :\n";
	setlocale(LC_ALL, "C");
	Sort(crr2, n);
	Print(crr2, n);
	setlocale(LC_ALL, "Rus");
	cout << endl;
	cout << delimeter << endl;
	


#ifdef DEBUG
	FillRand(arr, n, 1000, 2000);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Cреднее арифметическое: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	cout << "Отсортированный массив: " << endl;
	Sort(arr, n);
	Print(arr, n);
	cout << endl;

	const int m = 10;
	int brr[m];
	FillRand(brr, m, 80);
	Print(brr, m);
	cout << "Сумма элементов массива: " << Sum(brr, m) << endl;
	cout << "Cреднее арифметическое: " << Avg(brr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, m) << endl;
	cout << "Отсортированный массив: " << endl;
	Sort(brr, m);
	Print(brr, m);
	cout << endl;

	const int SIZE_C = 12;
	int crr[SIZE_C];
	FillRand(crr, SIZE_C);
	Print(crr, SIZE_C);
	cout << "Сумма элементов массива: " << Sum(crr, SIZE_C) << endl;
	cout << "Cреднее арифметическое: " << Avg(crr, SIZE_C) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(crr, SIZE_C) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(crr, SIZE_C) << endl;
	cout << "Отсортированный массив: " << endl;
	Sort(crr, SIZE_C);
	Print(crr, SIZE_C);
	cout << endl;

#endif // DEBUG
}
