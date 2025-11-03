#pragma once
#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 100;

// cấu trúc hóa đơn
struct HoaDon {
    int mahd;           // Mã hóa đơn
    char hoten[51];     // Họ và tên khách hàng
    char dt[11];        // Số điện thoại
    char nglap[11];     // Ngày lập hóa đơn (dd/mm/yyyy)
    float ttien;        // Tổng tiền (triệu đồng)
};

void nhapHoaDon(HoaDon& hd);    
void xuatHoaDon(const HoaDon& hd);                     
void nhapDS(HoaDon a[], int& n);                      
void xuatDS(const HoaDon a[], int n);                  
float tongDoanhThuTheoNgay(const HoaDon a[], int n, const char ngay[]); 
void xoaHoaDonTaiViTri(HoaDon a[], int& n, int vt);    
bool coHoaDonTheoHo(const HoaDon a[], int n, const char ho[]); 

void menu();