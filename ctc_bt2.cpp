#include "bt2.h"
#include <cstdlib> 

void menu() {
   
    HoaDon a[MAX] = {
        {1001, "Nguyen Van A", "0901234567", "01/10/2025", 12.5f},
        {1002, "Le Thi B", "0912345678", "01/10/2025", 7.8f},
        {1003, "Tran Van C", "0987654321", "02/10/2025", 15.2f},
        {1004, "Hoang Thi D", "0971112222", "02/10/2025", 9.4f},
        {1005, "Pham Van E", "0933334444", "03/10/2025", 6.7f},
        {1006, "Nguyen Thi F", "0925556666", "03/10/2025", 11.3f},
        {1007, "Tran Van G", "0917778888", "04/10/2025", 20.1f},
        {1008, "Le Hoang H", "0969990000", "04/10/2025", 13.8f},
        {1009, "Nguyen Van I", "0901122334", "05/10/2025", 8.9f},
        {1010, "Ho Thi K", "0956677889", "05/10/2025", 17.6f}
    };
    int n = 10;

    int chon;
    do {
        cout << "\n========= CHUONG TRINH QUAN LY HOA DON =========\n";
        cout << "1. Nhap danh sach hoa don\n";
        cout << "2. Xuat danh sach hoa don\n";
        cout << "3. Tinh tong doanh thu cua cac hoa don lap vao ngay k bat ky\n";
        cout << "4. Xoa hoa don tai vi tri k bat ky\n";
        cout << "5. Kiem tra xem co hoa don nao cua khach hang ho k bat ky khong\n";
        cout << "0. Thoat\n";
        cout << "===============================================\n";
        cout << "Moi ban chon: ";
        cin >> chon;
        cin.ignore();

        //system("cls"); 

        switch (chon) {
        case 1:
            cout << "\n--- NHAP DANH SACH HOA DON ---\n";
            nhapDS(a, n);
            break;

        case 2:
            cout << "\n--- XUAT DANH SACH HOA DON ---\n";
            xuatDS(a, n);
            break;

        case 3: {
            char ngay[11];
            cout << "Nhap ngay lap (dd/mm/yyyy): ";
            cin.getline(ngay, 11);
            float tong = tongDoanhThuTheoNgay(a, n, ngay);
            cout << "Tong doanh thu ngay " << ngay << " la: " << tong << " trieu dong\n";
            break;
        }

        case 4: {
            int vt;
            cout << "Nhap vi tri can xoa (0 -> " << n - 1 << "): ";
            cin >> vt;
            xoaHoaDonTaiViTri(a, n, vt);
            xuatDS(a, n);
            break;
        }

        case 5: {
            char ho[51];
            cout << "Nhap ho can kiem tra: ";
            cin.getline(ho, 51);
            if (coHoaDonTheoHo(a, n, ho))
                cout << "=> Co hoa don cua khach hang ho " << ho << ".\n";
            else
                cout << "=> Khong co hoa don cua khach hang ho " << ho << ".\n";
            break;
        }

        case 0:
            cout << "Tam biet!\n";
            break;

        default:
            cout << "Lua chon khong hop le!\n";
        }

        cout << endl;
        system("pause"); 
        system("cls");  
    } while (chon != 0);
}


int main() {
    menu();
    return 0;
}
