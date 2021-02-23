#pragma once
#include "Arrsys.cpp"

template<typename T>void push_back_mutable(T*& arr, int& n, T value);// ƒобавить значение в конце 
template<typename T>void push_front_mutable(T*& arr, int& n, T value);//ƒобавить значение в начало
template<typename T>void insert(T*& arr, int& n, T value, int index);// ¬ставл€ет значение в массив по указанному индексу

template<typename T>void push_row_back(T**& arr, int& m, const int n);
template<typename T>void push_row_front(T**& arr, int& m, const int n);
template<typename T>void insert_row(T**& arr, int& m, const int n, int index);

template<typename T>void pop_row_back(T**& arr, int& m, const int n);
template<typename T>void pop_row_front(T**& arr, int& m, const int n);
template<typename T>void erase_col(T**& arr, const int m, int& n, int index);

template<typename T>void push_col_back(T** arr, const int m, int& n);
template<typename T>void push_col_front(T** arr, const int m, int& n);
template<typename T>void insert_col(T** arr, const int m, int& n, int index);

template<typename T>void pop_back(T*& arr, int& n);// ”дал€ет значение в конце массива
template<typename T>void pop_front(T*& arr, int& n);// ”дал€ет значение в начале массива
template<typename T>void erase(T*& arr, int& n, int index, T value);// ”дал€ет значение из массива по указанному индексу