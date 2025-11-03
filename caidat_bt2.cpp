#define _CRT_SECURE_NO_WARNINGS //Tôi biết mình đang dùng hàm cũ, đừng báo lỗi nữa.
#include "bt2.h"

// nhập hóa đơn
void nhapHoaDon(HoaDon& hd) {
    cout << "Nhap ma hoa don: ";
    cin >> hd.mahd;
    cin.ignore();

    cout << "Nhap ho va ten khach hang: ";
    cin.getline(hd.hoten, 51);

    cout << "Nhap so dien thoai: ";
    cin.getline(hd.dt, 11);

    cout << "Nhap ngay lap hoa don (dd/mm/yyyy): ";
    cin.getline(hd.nglap, 11);

    cout << "Nhap tong tien (trieu dong): ";
    cin >> hd.ttien;
}

// xuất hóa đơn
void xuatHoaDon(const HoaDon& hd) {
    cout << "MaHD: " << hd.mahd
        << " | Ho ten: " << hd.hoten
        << " | SDT: " << hd.dt
        << " | Ngay lap: " << hd.nglap
        << " | Tong tien: " << hd.ttien << " trieu" << endl;
}

// nhập danh sách hóa đơn
void nhapDS(HoaDon a[], int& n) {
    cout << "Nhap so hoa don: ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cout << "\n--- Nhap hoa don thu " << i + 1 << " ---\n";
        nhapHoaDon(a[i]);
    }
}

// xuất danh sách hóa đơn
void xuatDS(const HoaDon a[], int n) {
    cout << "\n===== DANH SACH HOA DON =====\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". ";
        xuatHoaDon(a[i]);
    }
}

// tính tổng doanh thu theo ngày
float tongDoanhThuTheoNgay(const HoaDon a[], int n, const char ngay[]) {
    float tong = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(a[i].nglap, ngay) == 0)
            tong += a[i].ttien;
    }
    return tong;
}

// xóa hóa đơn tại vị trí
void xoaHoaDonTaiViTri(HoaDon a[], int& n, int vt) {
    if (vt < 0 || vt >= n) {
        cout << "Vi tri khong hop le!\n";
        return;
    }

    for (int i = vt; i < n - 1; i++)
        a[i] = a[i + 1];
    n--;

    cout << "Da xoa hoa don tai vi tri " << vt << endl;
}

// kiểm tra hóa đơn theo họ
bool coHoaDonTheoHo(const HoaDon a[], int n, const char ho[]) {
    for (int i = 0; i < n; i++) {
        char temp[51];
        strcpy(temp, a[i].hoten);

        char* hoTen = strtok(temp, " ");
        if (hoTen && strcmp(hoTen, ho) == 0)
            return true;
    }
    return false;
}
