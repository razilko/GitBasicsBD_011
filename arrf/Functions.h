#pragma once
#include <iostream>

// �������� ������������ ��� ���������� ������� 
// ���������� ����/���� �������� �� �������
// ����������
// ����������� �����


using namespace std;
// ���������� ������� (Function overloading):
// ���������� ������� ���������� �������� ������ ���� ��� ��� ����� ������� � ���������� ������, �� ������ ������� ����������� ����������
// ������ ����������� ���������� ������������� ������� ����� ���������� ��� �� ����, ��� � �� ���-�� ����������. ����������� ������������� ������� 
// ����� ���������� ��� ����� �� ���� ��������� ���������. ��� ������� ���� ������ ����������� ���������� ������������� ������� ���������� ���� ����� ����������,
// �� �� ���������� ��������� ��� ��� ������� ������, ���� �� ������ ����������� ���������� ������������� ������� ���������� �� ���-�� ����������, �� ������ �����
// � ���������� � ��� ����� ������. ��� ������������ �������� ������������� ������� �� ����������� ������ ���������� ��� ����� ���� ����������, �� ������������� �������
// �� ����� ���������� ���� ����� ������������ ��������. �� ������� ��� ������ ���������� ������� �� ������������ ��������� ������� � � ����������� �� ���� � ���-��
// ���� ���������� �������� ��������������� ��������� ��������������� �������� 


//VCS - Version Control Systems
// ������� �������� ������  VSC ����� ��� ���������� �������������� ��������� ��������� ����, �� ���� �������� ������ ���� ����������� ����� �� ������� ������ �����
// ���������, � ��� �� ��� ����������� ���������� ������ �������������. ���������� ������� ����� ����� ��� Scram, Agile... � �.�
// Jira, SVN, Subversion, ////////  Git - �������� ����� ����������, ��� �� ����� ��������� ����� ������������� GitHub - ���� ����� ���� ����� ��������� ���� ���
// Commit  ����������� ����� ���� ��� ���������(��������� �� ��������� ���������� ��� �� ��������� ���� ��������� �� ����� ������ ������� ��� �� �� ��������� GitHub)
// ��������� �����������, ��� ��� ��� �� ������ ����������

const int n = 4;
const int m = 4;
const int ROWS = 4;
const int COLS = 4;

                          //���������� ������, ��� ���
void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);// ��������� �� ���������
void Print(int arr[], const int n);
int Sum(int arr[], const int n); //���������� ����� ��������� �������. ���������� ������ ���� ���
double Avg(int arr[], const int n); //���������� ������� �������������� ��������� �������
int minValueIn(int arr[], const int n); //���������� ����������� �������� �� �������
int maxValueIn(int arr[], const int n); //���������� ������������ �������� �� �������
void Sort(int arr[], const int n); //��������� ������

                              //��� ����
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(double arr[], const int n);
double Sum(double arr[], const int n);
double Avg(double arr[], const int n);
double minValueIn(double arr[], const int n);
double maxValueIn(double arr[], const int n);
void Sort(double arr[], const int n);




                                //��� �����
void FillRand(float arr[], const int n, int minRand = 0, int maxRand = 100);
void Print(float arr[], const int n);
int Sum(float arr[], const int n); 
double Avg(float arr[], const int n); 
int minValueIn(float arr[], const int n); 
int maxValueIn(float arr[], const int n); 
void Sort(float arr[], const int n); 



                                   // ��� ���
void FillRand(char arr[], const int n, int minRand = 0, int maxRand = 255);
void Print(char arr[], const int n);
int Sum(char arr[], const int n);
double Avg(char arr[], const int n);
int minValueIn(char arr[], const int n);
int maxValueIn(char arr[], const int n);
void Sort(char arr[], const int n);


                    //��������� ������, ��� ���
void FillRand(int arr[ROWS][COLS], const int m, const int n);//
void Print(int arr[ROWS][COLS], const int m, const int n);//
int Sum(int arr[ROWS][COLS], const int m, const int n);//
double Avg(int arr[ROWS][COLS], const int m, const int n);//
int minValueIn(int arr[ROWS][COLS], const int m, const int n);//
int maxValueIn(int arr[ROWS][COLS], const int m, const int n);//
void Sort(int arr[ROWS][COLS], const int m, const int n);//


                          //��� ����
void FillRand(double arr[ROWS][COLS], const int m, const int n);
void Print(double arr[ROWS][COLS], const int m, const int n);
int Sum(double arr[ROWS][COLS], const int m, const int n);
double Avg(double arr[ROWS][COLS], const int m, const int n);
int minValueIn(double arr[ROWS][COLS], const int m, const int n);
int maxValueIn(double arr[ROWS][COLS], const int m, const int n);
void Sort(double arr[ROWS][COLS], const int m, const int n);

                        //��� �����
void FillRand(float arr[ROWS][COLS], const int m, const int n);
void Print(float arr[ROWS][COLS], const int m, const int n);
int Sum(float arr[ROWS][COLS], const int m, const int n);
double Avg(float arr[ROWS][COLS], const int m, const int n);
int minValueIn(float arr[ROWS][COLS], const int m, const int n);
int maxValueIn(float arr[ROWS][COLS], const int m, const int n);
void Sort(float arr[ROWS][COLS], const int m, const int n);


                       //��� ���
void FillRand(char arr[ROWS][COLS], const int m, const int n);
void Print(char arr[ROWS][COLS], const int m, const int n);
int Sum(char arr[ROWS][COLS], const int m, const int n);
double Avg(char arr[ROWS][COLS], const int m, const int n);
int minValueIn(char arr[ROWS][COLS], const int m, const int n);
int maxValueIn(char arr[ROWS][COLS], const int m, const int n);
void Sort(char arr[ROWS][COLS], const int m, const int n);
