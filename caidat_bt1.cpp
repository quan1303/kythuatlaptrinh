#include "bt1.h" 


void nhapMaTran(int a[][MAX], int& n)
{
    cout << "Nhap kich thuoc ma tran n: ";
    cin >> n;

    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j]; 
        }
    }
}


void xuatMaTran(int a[][MAX], int n)
{
    cout << "\nMa tran vua nhap la:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t"; 
        }
        cout << endl; 
    }
}

 
void lietKe2ChuSoBien(int a[][MAX], int n)
{
    cout << "\nCac phan tu co 2 chu so nam tren duong bien:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x = a[i][j];
            if (x < 0) x = -x; // Đổi sang dương để kiểm tra số chữ số

            bool laBien = (i == 0 || j == 0 || i == n - 1 || j == n - 1); // Kiểm tra phần tử nằm ở biên
            if (laBien && x >= 10 && x <= 99)
                cout << a[i][j] << " ";
        }
    }
    cout << endl;
}

// ===== HÀM ĐẾM PHẦN TỬ ÂM TRÊN CỘT K =====
int demAmCotK(int a[][MAX], int n, int k)
{
    if (k < 0 || k >= n) 
        return -1;

    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i][k] < 0)
            dem++;
    return dem;
}

// ===== HÀM TÌM GIÁ TRỊ LỚN NHẤT TRÊN DÒNG K =====
int timMaxDongK(int a[][MAX], int n, int k)
{
    if (k < 0 || k >= n)
        return -1;

    int maxVal = a[k][0];
    for (int j = 1; j < n; j++)
        if (a[k][j] > maxVal)
            maxVal = a[k][j];

    return maxVal;
}

// ===== HÀM TÍNH TỔNG TRÊN DÒNG K =====
int tongDongK(int a[][MAX], int n, int k)
{
    if (k < 0 || k >= n)
        return -1;

    int tong = 0;
    for (int j = 0; j < n; j++)
        tong += a[k][j];
    return tong;
}

// ===== HÀM TÍNH TỔNG CÁC PHẦN TỬ LÀ BỘI SỐ CỦA K =====
int tongBoiK(int a[][MAX], int n, int k)
{
    if (k == 0) // Tránh chia cho 0
        return 0;

    int tong = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] % k == 0)
                tong += a[i][j];
    return tong;
}
