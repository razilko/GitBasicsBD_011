#include <iostream>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;
//Массив структура данных, хранящая набор значений 
//Имя Массива указатель(копируется адрес массива

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
	cout << "Введит размер массива: "; cin >> n;
	int* arr = new int[n];

	FillRand(arr, n);
	Print(arr, n);

	int value;
	cout << "Введите добавляемое значение "; cin >> value;
	push_back_mutable(arr, n, value);
	Print(arr, n);

	cout << "Введите добавляемое значение "; cin >> value;
	push_front_mutable(arr, n, value);
	Print(arr, n);

	int index;
	cout << "Введите добавляемое значение "; cin >> value;
	cout << "Введите индекс "; cin >> index;
	insert(arr, n, value, index);
	Print(arr, n);

	cout << "Удалить сзади "; cin >> value;
	pop_back(arr, n);
	Print(arr, n);

	cout << "Удалить спереди "; cin >> value;
	pop_front(arr, n);
	Print(arr, n);

	int value;
	cout << "Удаляет добавляемое значение "; cin >> index;
	cout << "Введите индекс "; cin >> value;
	insert(arr, n, index, value);
	Print(arr, n);


#ifdef DEBUG_ASSERTION_FAILEd_2

	int* buffer = arr;
	delete buffer;
#endif // DEBUG_ASSERTION_FAILEd_2

	delete[] arr;
}

#endif // DYNAMIC_MEMORY_1
// Для того чтобы объявить двумерный динамический массив нужно объявить указатель на указатель  и создать массив указателей
//Элементы массива указателей будут хранить адреса строк двумерного массива. Каждая строка двумерного динамического массива представляет собой обычный одномерный
//динамический массив. После того как массив указателей создан можно выделять память подстроки, это обычно делают в цикле.

int m; //Количество строк
int n; //Количество столбцов(элементров строки)
cout << "Введи количество строк: "; cin >> m;
cout << "Введи количество элементов строки: "; cin >> n;
DataType** arr = Allocate<DataType>(m, n);
//Обращаться к элементам двумерного динамического массива можно точно так же, как к элементам двумерного статического массива через двойные [] скобки во вложенным цикле 
//3) работа с двумерном динамическим массивом:
FillRand(arr, m, n);
Print(arr, m, n);
cout << "Добавляем строку в конец:\n";
push_row_back(arr, m, n);
FillRand(arr[m - 1], n, 0, 100);
Print(arr, m, n);
cout << "Добавляем строку в начало:\n";
push_row_front(arr, m, n);
arr[0][3] = 123;
FillRand(arr,m,n);
Print(arr, m, n);
int index;
cout << "Введите индекс добавляемой строки: "; cin >> index;
insert_row(arr, m, n, index);
Print(arr, m, n);

cout << "Добавление столбца в конец массива:\n";
push_col_back(arr, m, n);
Print(arr, m, n);

cout << "Добавление столбца в начало массива:\n";
push_col_front(arr, m, n);
Print(arr, m, n);

cout << "Введите индекс добавляемой столбца: "; cin >> index;
insert_col(arr, m, n, index);
Print(arr, m, n);

cout << "Удаление последней строки:\n";
pop_row_back(arr, m, n);
Print(arr, m, n);

cout << "Удаление нулевой строки:\n";
pop_row_front(arr, m, n);
Print(arr, m, n);

cout << "Удаляет столбик в двумерном динамическом массиве по индексу: \n";
cout << "По какому индексу: "; cin >> index;
erase_col(arr, m, n, index);
Print(arr, m, n);



Clear(arr, m);



//для того чтобы передать двумерный динамический массив в функцию достаточно, чтобы функция принимала указатель на указатель
}

