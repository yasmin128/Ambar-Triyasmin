#include <iostream>
using namespace std;

 int main() {

    int angka1, angka2, angka3;
    cout<< "Selamat datang di program pemilihan angka terbesar" << endl;
    cout<< "Masukkan angka1 : " ;
    cin>> angka1  ;
    cout<< "Masukkan angka2 : " ;
    cin>> angka2  ;
    cout<< "Masukkan angka3 : " ;
    cin>> angka3  ;

    if (angka1 > angka2 && angka3 ) {
        cout<< angka1 << endl;
    } else if (angka2 > angka1 && angka3) {
        cout<< angka2 << endl;
    } else if (angka3 > angka1 && angka2) {
        cout<< angka3 << endl;


    }
    return 0;
    }
