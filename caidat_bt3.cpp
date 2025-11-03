#include "bt3.h"

// nhập mảng
void nhapMang(int a[], int n, int i) {
    if (i == n) return; // điều kiện dừng
    cout << "Nhap a[" << i << "]: ";
    cin >> a[i];
    nhapMang(a, n, i + 1); // gọi đệ quy
}

// xuất mảng
void xuatMang(const int a[], int n, int i) {
    if (i == n) return;
    cout << a[i] << " ";
    xuatMang(a, n, i + 1);
}

// kiểm tra phần tử đầu là chẵn/lẻ
bool laChan(int n) {
    return n % 2 == 0;
}

bool kiemTraPhanTuDauChanLe(const int a[]) {
    return laChan(a[0]);
}

// đếm số phần tử cực đại
// Phần tử cực đại là phần tử lớn hơn phần tử trước và sau nó
int demCucDai(const int a[], int n, int i) {
    if (i >= n - 1) return 0; // dừng khi còn <2 phần tử
    int dem = 0;
    if (a[i] > a[i - 1] && a[i] > a[i + 1]) dem = 1;
    return dem + demCucDai(a, n, i + 1);
}

// tìm phần tử nhỏ nhất
int timMin(const int a[], int n, int i, int minVal) {
    if (i == n) return minVal;
    if (a[i] < minVal) minVal = a[i];
    return timMin(a, n, i + 1, minVal);
}

// tính tổng các phần tử đối xứng
int tongDoiXung(const int a[], int n, int i) {
    if (i >= n) return 0;
    if (i == 1 || i == n / 2 || i == n - 1)
        return a[i] + tongDoiXung(a, n, i + 1);
    return tongDoiXung(a, n, i + 1);
}
