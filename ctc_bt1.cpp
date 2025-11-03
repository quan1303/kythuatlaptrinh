#include "bt1.h"
#include <cstdlib> // dùng cho system("cls") và system("pause")


void menu()
{
    int a[MAX][MAX], n = 0, k;
    bool daNhap = false; // cờ kiểm tra đã nhập ma trận hay chưa
    int chon;

   
    int mau[5][5] = {
        {12, -4, 55,  9,  88},
        {10, -99, 0,  7,  22},
        {8,   6, -3, -45, 100},
        {33, -12, 5,  9,  66},
        {77,  -8, 44, -2, 11}
    };
    n = 5;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            a[i][j] = mau[i][j];
    daNhap = true;

    do
    {
        cout << "\n===== CHUONG TRINH XU LY MA TRAN =====\n";
        cout << "1. Nhap ma tran\n";
        cout << "2. Xuat ma tran\n";
        cout << "3. Liet ke cac phan tu co 2 chu so tren bien\n";
        cout << "4. Dem so phan tu am tren cot k\n";
        cout << "5. Tim gia tri lon nhat tren dong k\n";
        cout << "6. Tinh tong cac phan tu tren dong k\n";
        cout << "7. Tinh tong cac phan tu la boi so cua k\n";
        cout << "0. Thoat chuong trinh\n";
        cout << "=====================================\n";
        cout << "Moi ban chon chuc nang: ";
        cin >> chon;

        switch (chon)
        {
        case 1:
            nhapMaTran(a, n);
            daNhap = true;
            break;

        case 2:
            if (daNhap)
                xuatMaTran(a, n);
            else
                cout << "Ban chua nhap ma tran!\n";
            break;

        case 3:
            if (daNhap)
                lietKe2ChuSoBien(a, n);
            else
                cout << "Ban chua nhap ma tran!\n";
            break;

        case 4:
            if (daNhap)
            {
                cout << "Nhap cot k (0 -> " << n - 1 << "): ";
                cin >> k;
                cout << "So phan tu am tren cot " << k
                    << " la: " << demAmCotK(a, n, k) << endl;
            }
            else
                cout << "Ban chua nhap ma tran!\n";
            break;

        case 5:
            if (daNhap)
            {
                cout << "Nhap dong k (0 -> " << n - 1 << "): ";
                cin >> k;
                cout << "Gia tri lon nhat tren dong " << k
                    << " la: " << timMaxDongK(a, n, k) << endl;
            }
            else
                cout << "Ban chua nhap ma tran!\n";
            break;

        case 6:
            if (daNhap)
            {
                cout << "Nhap dong k (0 -> " << n - 1 << "): ";
                cin >> k;
                cout << "Tong cac phan tu tren dong " << k
                    << " la: " << tongDongK(a, n, k) << endl;
            }
            else
                cout << "Ban chua nhap ma tran!\n";
            break;

        case 7:
            if (daNhap)
            {
                cout << "Nhap so k: ";
                cin >> k;
                cout << "Tong cac phan tu la boi so cua "
                    << k << " la: " << tongBoiK(a, n, k) << endl;
            }
            else
                cout << "Ban chua nhap ma tran!\n";
            break;

        case 0:
            cout << "Tam biet!\n";
            break;

        default:
            cout << "Lua chon khong hop le, vui long chon lai!\n";
        }

        cout << endl;
        system("pause"); // Dừng màn hình để xem kết quả
        system("cls");   // Xóa màn hình trước khi quay lại menu
    } while (chon != 0);
}


int main()
{
    menu();
    return 0;
}
