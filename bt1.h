#pragma once
#include <iostream>
using namespace std;

const int MAX = 100;


void nhapMaTran(int a[][MAX], int& n);
void xuatMaTran(int a[][MAX], int n);
void lietKe2ChuSoBien(int a[][MAX], int n);
int demAmCotK(int a[][MAX], int n, int k);
int timMaxDongK(int a[][MAX], int n, int k);
int tongDongK(int a[][MAX], int n, int k);
int tongBoiK(int a[][MAX], int n, int k);

void menu(); 
