#include <iostream>
using namespace std;

int main() {
    int pilihan;
    float luas;

    cout << "Pilih bentuk yang ingin dihitung luasnya:" << endl;
    cout << "1. Persegi" << endl;
    cout << "2. Persegi Panjang" << endl;
    cout << "3. Segitiga" << endl;
    cout << "Masukkan pilihan (1/2/3): ";
    cin >> pilihan;

    switch (pilihan) {
        case 1:
            {
                // Menghitung luas persegi
                float sisi;
                cout << "Masukkan panjang sisi persegi: ";
                cin >> sisi;
                luas = sisi * sisi;
                cout << "Luas persegi: " << luas << endl;
            }
            break;

        case 2:
            {
                // Menghitung luas persegi panjang
                float panjang, lebar;
                cout << "Masukkan panjang persegi panjang: ";
                cin >> panjang;
                cout << "Masukkan lebar persegi panjang: ";
                cin >> lebar;
                luas = panjang * lebar;
                cout << "Luas persegi panjang: " << luas << endl;
            }
            break;

        case 3:
            {
                // Menghitung luas segitiga
                float alas, tinggi;
                cout << "Masukkan alas segitiga: ";
                cin >> alas;
                cout << "Masukkan tinggi segitiga: ";
                cin >> tinggi;
                luas = 0.5 * alas * tinggi;
                cout << "Luas segitiga: " << luas << endl;
            }
            break;

        default:
            cout << "Pilihan tidak valid. Silakan pilih 1, 2, atau 3." << endl;
    }

    return 0;
}
