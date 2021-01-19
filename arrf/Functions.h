#pragma once
#include <iostream>

// доделать перезагрузку для двумерного массива 
// возращение макс/микс значение из массива
// сортировку
// циклический сдвиг


using namespace std;
// Перегрузка функций (Function overloading):
// перегрузка функций называется ситуация ккогда есть две или более функции с одинаковым именем, но разным списком принимаемым параметрам
// список принимаемых параметров перегруженных функций может отличаться как по типу, так и по кол-ву аргументов. Реализацией перегруженных функций 
// могут отличаться или могут же быть полностью идентичны. Как правило если список принимаемых параметров перегруженных функций отличается лишь типом аргументов,
// то их реализации идентичны или как минимум похожи, если же список принимаемых параметров перегруженных функций отличается по кол-ву аргументов, то скорее всего
// и реализации у них будут разные. Тип возращаемого значения перегруженных функций не обязательно должен отличаться или может быть одинаковым, но перегруженные функции
// не могут отличаться лишь типом возращаемого значение. По сколько при вызове компилятор смотрит на передаваемые параметры функции и в зависимости от типа и кол-во
// этих параметров вызывает соответствующий экземпляр соответствующий функцией 


//VCS - Version Control Systems
// Система контроля версий  VSC нужна для сохранения промежуточного состояния исходного кода, то есть создания своего рода контрольных точек на которые всегда можно
// вернуться, а так же для организации совместной работы разработчиков. Реализации методик работ таких как Scram, Agile... и т.д
// Jira, SVN, Subversion, ////////  Git - является самое популярной, так же очень популярно среди разработчиков GitHub - типа диска куда можем сохранять свой код
// Commit  репозиторий может быть как локальным(храниться на локальном компьютере или же удаленным если храниться на каком нибудь сервере или же на плотформе GitHub)
// Удаленный репозиторий, это все что не намшем компьютере

const int n = 4;
const int m = 4;
const int ROWS = 4;
const int COLS = 4;

                          //одномерный массив, тип инт
void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);// параметры по умолчанию
void Print(int arr[], const int n);
int Sum(int arr[], const int n); //возвращает сумму элементов массива. Одномерный массив типа инт
double Avg(int arr[], const int n); //возвращает среднее арифметическое элементов массива
int minValueIn(int arr[], const int n); //возвращает минимальное значение из массива
int maxValueIn(int arr[], const int n); //возвращает максимальное значение из массива
void Sort(int arr[], const int n); //Сортирует массив

                              //тип дабл
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(double arr[], const int n);
double Sum(double arr[], const int n);
double Avg(double arr[], const int n);
double minValueIn(double arr[], const int n);
double maxValueIn(double arr[], const int n);
void Sort(double arr[], const int n);




                                //тип флоат
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(float arr[], const int n);
int Sum(float arr[], const int n); 
double Avg(float arr[], const int n); 
int minValueIn(float arr[], const int n); 
int maxValueIn(float arr[], const int n); 
void Sort(float arr[], const int n); 



                                   // тип чар
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 255);
void Print(char arr[], const int n);
int Sum(char arr[], const int n);
double Avg(char arr[], const int n);
int minValueIn(char arr[], const int n);
int maxValueIn(char arr[], const int n);
void Sort(char arr[], const int n);


                    //двумерный массив, тип инт
void FillRand(int arr[ROWS][COLS], const int m, const int n);//
void Print(int arr[ROWS][COLS], const int m, const int n);//
int Sum(int arr[ROWS][COLS], const int m, const int n);//
double Avg(int arr[ROWS][COLS], const int m, const int n);//
int minValueIn(int arr[ROWS][COLS], const int m, const int n);//
int maxValueIn(int arr[ROWS][COLS], const int m, const int n);//
void Sort(int arr[ROWS][COLS], const int m, const int n);//


                          //тип дабл
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);
int Sum(double arr[ROWS][COLS], const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);
int minValueIn(double arr[ROWS][COLS], const int m, const int n);
int maxValueIn(double arr[ROWS][COLS], const int m, const int n);
void Sort(double arr[ROWS][COLS], const int m, const int n);

                        //тип флоат
void FillRand(float arr[ROWS][COLS], const int m, const int n);
void Print(float arr[ROWS][COLS], const int m, const int n);
int Sum(float arr[ROWS][COLS], const int m, const int n);
double Avg(float arr[ROWS][COLS], const int m, const int n);
int minValueIn(float arr[ROWS][COLS], const int m, const int n);
int maxValueIn(float arr[ROWS][COLS], const int m, const int n);
void Sort(float arr[ROWS][COLS], const int m, const int n);


                       //тип чар
void FillRand(char arr[ROWS][COLS], const int m, const int n);
void Print(char arr[ROWS][COLS], const int m, const int n);
int Sum(char arr[ROWS][COLS], const int m, const int n);
double Avg(char arr[ROWS][COLS], const int m, const int n);
int minValueIn(char arr[ROWS][COLS], const int m, const int n);
int maxValueIn(char arr[ROWS][COLS], const int m, const int n);
void Sort(char arr[ROWS][COLS], const int m, const int n);
