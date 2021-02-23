#include <iostream>
//using namespace std;
using std::cin;
using std::cout;
using std::endl;
//Массив структура данных, хранящая набор значений 
//Имя Массива указатель(копируется адрес массива

template<typename T>T** Allocate(const int m, const int n);
template<typename T>void Clear(T** arr,const int m);

template<typename T>void Random(T& variable);

void FillRand(int arr[], const int n, int maxRand =100, int minRand =0);
void FillRand(float arr[], const int n, int maxRand = 100, int minRand = 0);
void FillRand(double arr[], const int n, int maxRand = 100, int minRand = 0);
void FillRand(char arr[], const int n, int maxRand = 100, int minRand = 0);

void FillRand(int** arr, const int m, const int n);
void FillRand(float** arr, const int m, const int n);
void FillRand(double** arr, const int m, const int n);
void FillRand(char** arr, const int m, const int n);

template<typename T>void Print(T arr[], const int n);
template<typename T>void Print(T** arr, const int m, const int n);

template<typename T>void push_back_mutable(T*& arr, int& n, T value);// Добавить значение в конце 
template<typename T>void push_front_mutable(T*& arr, int& n, T value);//Добавить значение в начало
template<typename T>void insert(T*& arr, int& n, T value, int index);// Вставляет значение в массив по указанному индексу

template<typename T>void push_row_back(T**& arr, int& m, const int n);
template<typename T>void push_row_front(T**& arr, int& m, const int n);
template<typename T>void insert_row(T**& arr, int& m, const int n, int index);

template<typename T>void pop_row_back(T**& arr, int& m, const int n);
template<typename T>void pop_row_front(T**& arr, int& m, const int n);
template<typename T>void erase_col(T**& arr, const int m, int& n, int index);



template<typename T>void push_col_back(T** arr, const int m, int & n);
template<typename T>void push_col_front(T** arr, const int m, int& n);
template<typename T>void insert_col(T** arr, const int m, int& n, int index);




template<typename T>void pop_back(T*& arr, int& n);// Удаляет значение в конце массива
template<typename T>void pop_front(T*& arr, int& n);// Удаляет значение в начале массива
template<typename T>void erase(T*& arr, int& n, int index, T value);// Удаляет значение из массива по указанному индексу
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
template<typename T>T** Allocate(const int m, const int n)
{
	//Первое действие создаем массив указателей:
	T** arr = new T* [m];//
	//Второе выделяем память для строк двумерного динамического массив:
	for (int i = 0; i < m; i++)
	{
		arr[i] = new T[n];
	}
	return arr;
}

template<typename T>void Clear(T** arr, const int m)
{
	//4) удаление двумерного динамического массива:
	for (int i = 0; i < m; i++)
	{
		delete[] arr[i];
	}
	delete[]arr;
}

template<typename T>void Random(T& variable)
{
	if (typeid(variable) == typeid(int))
	{
		variable = rand() % 100;
	}
	else if (typeid(variable) == typeid(float) || typeid(variable) == typeid(double))
	{
		variable = double(rand() % 10000) / 100;
	}
	else if (typeid(variable) == typeid(char))
	{
		variable = rand();
	}
	else
	{
		variable = T(); // Записываем в переменную значение по умолчанию
	}
}

///////////////////////////////////////////////////////////////////////////////////////////////
void FillRand(int arr[], const int n, int maxRand, int minRand)
{
	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand() % (maxRand-minRand)+minRand;
		Random(arr[i]);
	}
}
void FillRand(float arr[], const int n, int maxRand, int minRand)
{
	for (int i = 0; i < n; i++)
	{
		//arr[i] = float(rand() % (maxRand - minRand) + minRand)/10;
		Random(arr[i]);
	}
}
void FillRand(double arr[], const int n, int maxRand, int minRand)
{
	for (int i = 0; i < n; i++)
	{
		//arr[i] = double(rand() % (maxRand - minRand) + minRand)/10;
		Random(arr[i]);
	}
}
void FillRand(char arr[], const int n, int maxRand, int minRand)
{
	for (int i = 0; i < n; i++)
	{
		//arr[i] = rand();
		Random(arr[i]);
	}
}

void FillRand(int** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//arr[i][j] = rand() % 100;
			Random(arr[i][j]);
		}
	}
}
void FillRand(float** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//arr[i][j] = float(rand() % 100)/10;
			Random(arr[i][j]);
		}
	}
}
void FillRand(double** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//arr[i][j] = double(rand() % 100) / 10;
			Random(arr[i][j]);
		}
	}
}
void FillRand(char** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			//arr[i][j] = rand();
			Random(arr[i][j]);
		}
	}
}

template<typename T>void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
template<typename T>void Print(T** arr, const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>void push_back_mutable(T*& arr, int& n, T value)
{
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];

	}
	delete arr;
	arr = buffer;
	arr[n] = value;
	n++;

}
template<typename T>void push_front_mutable(T*& arr, int& n, T value)
{
	//1. Создаем буферный массив нужного размера
	T* buffer = new T[n + 1]{};
	//2. Копируем значения из исходного массива в буферный со смещением
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];

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

template<typename T>void insert(T*& arr, int& n, T value, int index)
{
	if (index >= n)return;
	T* buffer = new T[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		(i < index ? buffer[i] : buffer[i + 1]) = arr[i];
	}

	delete[] arr;
	arr = buffer;
	arr[index] = value;
	n++;
}

template<typename T>void push_row_back(T**& arr, int& m, const int n)
{
	//1)создаем буферный массив указателей
	T** buffer = new T* [m + 1];
	//2)копируем адреса строк исходного массива в буферный массив указателей:
	for (int i = 0; i < m; i++)
	{
		buffer[i] = arr[i];
	}
	//3)Удаляем исходный массив указателей:
	delete[]arr;
	//4)говорим что buffer -это наш новый массив:
	arr = buffer;
	//5)Теперь в нашем массиве есть место для добавления еще одной строки:
	buffer[m] = new T[n] {};
	//6)После добавления строки в массив, колличество его строк увеличивается на одну:
	m++;
}

template<typename T>void push_row_front(T**& arr, int& m, const int n)
{
	T** buffer = new T* [m + 1]{};
	for (int i = 0; i < m; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = new T[n] {};
	m++;
}

template<typename T>void insert_row(T**& arr, int& m, const int n, int index)
{
	if (index > m)return;
	T** buffer = new T* [m + 1];
	for (int i = 0; i < index; i++)
		buffer[i] = arr[i];
	for (int i = index; i < m; i++)
		buffer[i + 1] = arr[i];
	delete[]arr;
	arr = buffer;
	arr[index] = new T[n] {};
	m++;
}

template<typename T>void pop_row_back(T**& arr, int& m, const int n)
{
	T** buffer = new T* [--m]{};
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i];
	delete[] arr[m];//Удаляем последнюю строку из памяти
	delete[] arr;//Удаляем массив указателей
	arr = buffer;//Подменяем на новый массив указателей
}
template<typename T>void pop_row_front(T**& arr, int& m, const int n)
{
	T** buffer = new T* [--m];
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i+1];
	delete[] arr[0];
	delete[] arr;
	arr = buffer;
}

template<typename T>void push_col_back(T** arr, const int m, int & n)
{	
	for (int i = 0; i < m; i++)
	{
	//1)Создаем буферную строку нужного размера:
	T* buffer = new T[n + 1]{};
	//2)Копируем исходную строку в буферную:
	for (int j = 0; j < n; j++)
		buffer[j] = arr[i][j];
	//3)Удаляем исходную строку:
	delete[]arr[i];
	//4)Подменяем адрес:
	arr[i] = buffer;
	}
	n++;
}

template<typename T>void push_col_front(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n + 1]{};
		for (int j = 0; j < n; j++)
			buffer[j+1] = arr[i][j];
		delete[]arr[i];
		arr[i] = buffer;
	}
	n++;
}

template<typename T>void insert_col(T** arr, const int m, int& n, int index)
{
	for (int i = 0; i < m; i++)
	{
		T* buffer = new T[n + 1]{};
		for (int j = 0; j < index; j++)
			buffer[j] = arr[i][j];
		for (int j = index; j < n; j++)
			buffer[j+1] = arr[i][j];
		delete[]arr[i];
		arr[i] = buffer;
	}
	n++;
}

template<typename T>void erase_col(T**& arr, const int m, int& n, int index)
{
	if (index >m ) return;

	T** buffer = new T* [m] {};

	for (int i = 0; i < m; i++)
	{
		buffer[i] = new T[n - 1]{};
		for (int j = 0; j < index; j++)
		{
			buffer[i][j] = arr[i][j];
		}
		for (int z = index; z < n; z++)
		{
			buffer[i][z] = arr[i][z+1];
		}
		delete arr[i];
	}
	delete[] arr;
	arr = buffer;
	n--;
}

template<typename T>void pop_back(T*& arr, int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i];

	}
	delete arr;
	arr = buffer;

}
template<typename T>void pop_front(T*& arr, int& n)
{
	T* buffer = new T[--n];
	for (int i = 0; i < n; i++)
	{
		buffer[i] = arr[i + 1];

	}
	delete arr;
	arr = buffer;
}

/*void erase(int*& arr, int& n, int value, int position)
{
	if (position >= n) return;

	int* temp = new int[n];
	for (int i = 0; i < n; ++i) temp[i] = arr[i];
	{
		delete[] arr;
	}
	arr = new int[n - 1];

	for (int i = 0, j = 0; i < n; ++i, ++j)
	{
		if (i != position) arr[j] = temp[i];
		else --j;
	}
	--n;

	delete[] temp;
}*/


/*void erase(int*& arr, int& n, int index, int value)
{
	//if (value >= n)return;
	int* buffer = new int[n + 1]{};
	for (int i = 0; i < n; i++)
	{
		(i < index ? buffer[i] : buffer[i + 1]) = arr[i];
	}

	delete[] arr;
	arr = buffer;
	arr[value] = index;
	n++;
}*/

