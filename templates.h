#pragma once
#include <iostream>
using namespace std;

// ���� �� ������ ���������� ����� ������ 1, �� �������� ���������� ������

// nikak ne poluchaetcya sortirovky cdelat s voskresenya s kodom cidela?  pro dvumernue massivi: net sortirovki/ 

//???? � sortirovrjq vce grustno, tak ona i ne poluchilas' 

const int STROK = 1;
const int STOL = 5;
template <typename T1, typename T2, typename T3>
//void Massivchik(int arr2[STROK], const int n);
void Massiv(T1 arr1[STROK][STOL], const int n, const int m);

template <typename T1, typename T2, typename T3>
void MassivSort(T1 arr1[STROK][STOL], const int n, const int m);

template <typename T1, typename T2, typename T3>
void MassivSum(T1 arr1[STROK][STOL], const int n, const int m);

template <typename T1, typename T2, typename T3>
void MassivAVG(T1 arr1[STROK][STOL], const int n, const int m);

template <typename T1, typename T2, typename T3>
void MassivMax(T1 arr1[STROK][STOL], const int n, const int m);

template <typename T1, typename T2, typename T3>
void MassivMin(T1 arr1[STROK][STOL], const int n, const int m);

template <typename T1, typename T2, typename T3>
void PrintMassiv(T1 arr1[STROK][STOL], const int n, const int m);

template <typename T1, typename T2, typename T3>
void PrintSort(T1 arr1[STROK][STOL], const int n, const int m);


