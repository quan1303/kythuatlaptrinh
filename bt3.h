#pragma once
#include <iostream>
using namespace std;

const int MAX = 100;


void nhapMang(int a[], int n, int i = 0);
void xuatMang(const int a[], int n, int i = 0);
bool laChan(int n);
bool kiemTraPhanTuDauChanLe(const int a[]);
int demCucDai(const int a[], int n, int i = 1);
int timMin(const int a[], int n, int i = 0, int minVal = INT32_MAX);
int tongDoiXung(const int a[], int n, int i = 0);


void menu();
#pragma once
