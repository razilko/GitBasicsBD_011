#include <iostream>
using namespace std;
//Массив структура данных, хранящая набор значений 
//Имя Массива указатель(копируется адрес массива
void FillRand(int arr[], const int n);
void Print(int arr[], const int n);
void push_back_mutable(int*& arr, int& n, int value);// Добавить значение в конце 
void push_front_mutable(int*& arr, int& n, int value);//Добавить значение в начало
void pop_back(int*& arr, int& n, int value);// Удаляет значение в конце массива
void pop_front(int*& arr, int& n, int value);// Удаляет значение в начале массива
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

	cout << "Немного почикрыжить сзади "; cin >> value;
	pop_back(arr, n, value);
	Print(arr, n);

	cout << "Немного почикрыжить спереди "; cin >> value;
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
	//1. Создаем буферный массив нужного размера
	int* buffer = new int[n + 1]{};
	//2. Копируем значения из исходного массива в буферный со смещением
	for (int i = 0; i < n; i++)
	{
		buffer[i+1] = arr[i];

	}
	//3. Удаляем исходный массив
	delete arr;
	//4. Подменяем указатель в начало массива
	arr = buffer;
	//.5 Добавляем значение в начало массива
	arr[0] = value;
	//.6 Увечиваем размер массива
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
void pop_front(int*& arr, int& n, int value)//кашамаша
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