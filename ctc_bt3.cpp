#include "bt3.h"
#include <cstdlib> 


void menu() {
   
    int a[MAX] = { 12, 33, 140, 2112, 5, 123, 202, 404, 99, 303 };
    int n = 10;

    int chon;
    do {
        cout << "\n========== CHUONG TRINH DE QUY MANG ==========\n";
        cout << "1. Nhap mang bang de quy\n";
        cout << "2. Xuat mang bang de quy\n";
        cout << "3. Kiem tra phan tu dau tien chan hay le\n";
        cout << "4. Dem so phan tu cuc dai\n";
        cout << "5. Tim phan tu be nhat trong mang\n";
        cout << "6. Tinh tong cac phan tu doi xung\n";
        cout << "0. Thoat\n";
        cout << "==============================================\n";
        cout << "Moi ban chon: ";
        cin >> chon;
        cin.ignore();

        //system("cls");

        switch (chon) {
        case 1:
            cout << "\n--- NHAP MANG ---\n";
            cout << "Nhap so phan tu n: ";
            cin >> n;
            nhapMang(a, n);
            cout << "\nDa nhap xong mang!\n";
            break;

        case 2:
            cout << "\n--- XUAT MANG ---\n";
            xuatMang(a, n);
            cout << endl;
            break;

        case 3:
            if (kiemTraPhanTuDauChanLe(a))
                cout << "Phan tu dau tien la so CHAN.\n";
            else
                cout << "Phan tu dau tien la so LE.\n";
            break;

        case 4: {
            int dem = demCucDai(a, n);
            cout << "So phan tu cuc dai trong mang: " << dem << endl;
            break;
        }

        case 5: {
            int minVal = timMin(a, n);
            cout << "Phan tu nho nhat trong mang la: " << minVal << endl;
            break;
        }

        case 6: {
            int tong = tongDoiXung(a, n);
            cout << "Tong cac phan tu doi xung la: " << tong << endl;
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
