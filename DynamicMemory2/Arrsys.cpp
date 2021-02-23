
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
	//1. ������� �������� ������ ������� �������
	T* buffer = new T[n + 1]{};
	//2. �������� �������� �� ��������� ������� � �������� �� ���������
	for (int i = 0; i < n; i++)
	{
		buffer[i + 1] = arr[i];

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
	//1)������� �������� ������ ����������
	T** buffer = new T * [m + 1];
	//2)�������� ������ ����� ��������� ������� � �������� ������ ����������:
	for (int i = 0; i < m; i++)
	{
		buffer[i] = arr[i];
	}
	//3)������� �������� ������ ����������:
	delete[]arr;
	//4)������� ��� buffer -��� ��� ����� ������:
	arr = buffer;
	//5)������ � ����� ������� ���� ����� ��� ���������� ��� ����� ������:
	buffer[m] = new T[n]{};
	//6)����� ���������� ������ � ������, ����������� ��� ����� ������������� �� ����:
	m++;
}

template<typename T>void push_row_front(T**& arr, int& m, const int n)
{
	T** buffer = new T * [m + 1]{};
	for (int i = 0; i < m; i++)
		buffer[i + 1] = arr[i];
	delete[] arr;
	arr = buffer;
	arr[0] = new T[n]{};
	m++;
}

template<typename T>void insert_row(T**& arr, int& m, const int n, int index)
{
	if (index > m)return;
	T** buffer = new T * [m + 1];
	for (int i = 0; i < index; i++)
		buffer[i] = arr[i];
	for (int i = index; i < m; i++)
		buffer[i + 1] = arr[i];
	delete[]arr;
	arr = buffer;
	arr[index] = new T[n]{};
	m++;
}

template<typename T>void pop_row_back(T**& arr, int& m, const int n)
{
	T** buffer = new T * [--m]{};
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i];
	delete[] arr[m];//������� ��������� ������ �� ������
	delete[] arr;//������� ������ ����������
	arr = buffer;//��������� �� ����� ������ ����������
}
template<typename T>void pop_row_front(T**& arr, int& m, const int n)
{
	T** buffer = new T * [--m];
	for (int i = 0; i < m; i++)
		buffer[i] = arr[i + 1];
	delete[] arr[0];
	delete[] arr;
	arr = buffer;
}

template<typename T>void push_col_back(T** arr, const int m, int& n)
{
	for (int i = 0; i < m; i++)
	{
		//1)������� �������� ������ ������� �������:
		T* buffer = new T[n + 1]{};
		//2)�������� �������� ������ � ��������:
		for (int j = 0; j < n; j++)
			buffer[j] = arr[i][j];
		//3)������� �������� ������:
		delete[]arr[i];
		//4)��������� �����:
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
			buffer[j + 1] = arr[i][j];
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
			buffer[j + 1] = arr[i][j];
		delete[]arr[i];
		arr[i] = buffer;
	}
	n++;
}

template<typename T>void erase_col(T**& arr, const int m, int& n, int index)
{
	if (index > m) return;

	T** buffer = new T * [m] {};

	for (int i = 0; i < m; i++)
	{
		buffer[i] = new T[n - 1]{};
		for (int j = 0; j < index; j++)
		{
			buffer[i][j] = arr[i][j];
		}
		for (int z = index; z < n; z++)
		{
			buffer[i][z] = arr[i][z + 1];
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

