#include "Functions.h"
/////////////////////////////////////////////////////////////////////////////    одномерный массив     ///////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////   // инт     ///////////////////////////////////////////////////////////////////////////////////
void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}
	// Заполнение слуучайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

}

void Print(int arr[], const int n)
{
	// Вывод на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
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

double Avg(int arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}


int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

int maxValueIn(int arr[], const int n)
{
	int max = arr[0];
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





/////////////////////////////////////////////////////////////////////////////    //дабл     ///////////////////////////////////////////////////////////////////////////////////



void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	if (maxRand < minRand)
	{
		int buffer = maxRand;
		maxRand = minRand;
		minRand = buffer;
	}
	// Заполнение слуучайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 10;
	}

}

void Print(double arr[], const int n)
{
	// Вывод на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
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

double Avg(double arr[], const int n)
{
	return Sum(arr, n) / n;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
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





/////////////////////////////////////////////////////////////////////////////    //float     ///////////////////////////////////////////////////////////////////////////////////

void FillRand(float arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(float arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(float arr[], const int n)
{
	return (float)Sum(arr, n) / n;
}
int minValueIn(float arr[], const int n)
{
	float min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(float arr[], const int n)
{
	float max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void Sort(float arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				float buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}
}




/////////////////////////////////////////////////////////////////////////////    //char      ///////////////////////////////////////////////////////////////////////////////////

void FillRand(char arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}
void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int Sum(char arr[], const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}
double Avg(char arr[], const int n)
{
	return (char)Sum(arr, n) / n;
}
int minValueIn(char arr[], const int n)
{
	char min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}
int maxValueIn(char arr[], const int n)
{
	char max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}

	}
}












/////////////////////////////////////////////////////////////////////////////   двумерный массив     ///////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////    //2 int     ///////////////////////////////////////////////////////////////////////////////////

void FillRand(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}


void Print(int arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}



int Sum(int arr[ROWS][COLS], const int m, const int n)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(int arr[ROWS][COLS], const int m, const int n)
{
	return Sum(arr, m, n) / (m * n);
}

int minValueIn(int arr[ROWS][COLS], const int m, const int n)
{
	int min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}

int maxValueIn(int arr[ROWS][COLS], const int m, const int n)
{
	int max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}


void Sort(int arr[ROWS][COLS], const int m, const int n)
{
	int iterations = 0;
	int exchanges = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = i; k < m; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < n; l++)
				{
					iterations++;
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
						exchanges++;
					}
				}
			}
		}
	}
	cout << "Количество итераций: " << iterations << endl;
	cout << "Количество обменов: " << exchanges << endl;
}


/////////////////////////////////////////////////////////////////////////////    //2 double   ///////////////////////////////////////////////////////////////////////////////////
void FillRand(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

void Print(double arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(double arr[ROWS][COLS], const int m, const int n)
{
	double sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

double Avg(double arr[ROWS][COLS], const int m, const int n)
{
	return (double)Sum(arr, m, n) / (m * n);
}

int minValueIn(double arr[ROWS][COLS], const int m, const int n)
{
	double min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}


int maxValueIn(double arr[ROWS][COLS], const int m, const int n)
{
	double max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}






void Sort(double arr[ROWS][COLS], const int m, const int n)
{
	int iterations = 0;
	int exchanges = 0;
	for (int k = 0; k > n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m - 1; j++)
			{

				iterations++;
				if (arr[i][k] < arr[i][j + 1])
				{
					double buffer = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = buffer;
					exchanges++;
				}

			}
		}
	}
	cout << "Количество итераций: " << iterations << endl;
	cout << "Количество обменов: " << exchanges << endl;
}







/////////////////////////////////////////////////////////////////////////////   // 2float     ///////////////////////////////////////////////////////////////////////////////////
void FillRand(float  arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = rand()%100;
		}

	}
}
void Print(float  arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(float  arr[ROWS][COLS], const int m, const int n)
{
	float sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}
double Avg(float arr[ROWS][COLS], const int m, const int n)
{
	return (float)Sum(arr, m, n) / (n * m);
}

int minValueIn(float arr[ROWS][COLS], const int m, const int n)
{
	float min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}

int maxValueIn(float arr[ROWS][COLS], const int m, const int n)
{
	float max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}


void Sort(float arr[ROWS][COLS], const int m, const int n)
{
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m - 1; j++)
			{
				if (arr[i][j] < arr[i][j+1])
				{
					float buffer = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = buffer;
				}
			}
		}
	}
}






/////////////////////////////////////////////////////////////////////////////    2char      ///////////////////////////////////////////////////////////////////////////////////
void FillRand(char  arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand();
		}

	}
}

void Print(char  arr[ROWS][COLS], const int m, const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

int Sum(char  arr[ROWS][COLS], const int m, const int n)
{
	char sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)//fsafa
		{
			sum += arr[i][j];//fsafa
		}
	}
	return sum;
}

double Avg(char arr[ROWS][COLS], const int m, const int n)
{
	return Sum(arr, m, n) / (n * m);
}

int minValueIn(char arr[ROWS][COLS], const int m, const int n)
{
	char min = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] < min) min = arr[i][j];
		}
	}
	return min;
}

int maxValueIn(char arr[ROWS][COLS], const int m, const int n)
{
	char max = arr[0][0];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (arr[i][j] > max) max = arr[i][j];
		}
	}
	return max;
}




void Sort(char arr[ROWS][COLS], const int m, const int n)
{
	int iterations = 0;
	int exchanges = 0;
	for (int k = 0; k < n; k++)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m-1;j++)
			{
				
					iterations++;
					if (arr[i][j] < arr[i][j+1])
					{
						char buffer = arr[i][j];
						arr[i][j] = arr[i][j+1];
						arr[i][j+1] = buffer;
						exchanges++;
					}
				
			}
		}
	}
	cout << "Количество итераций: " << iterations << endl;
	cout << "Количество обменов: " << exchanges << endl;
}