#include <iostream>

using namespace std;

int main(){

    double d1, d2, luas, keliling;
    double sisi;

    cout << "= Menghitung Luas & Keliling Belah Ketupat =" << endl;
    cout << "============================================" << endl;
    cout << "Diagonal 1             : "; cin >> d1;
    cout << "Diagonal 2             : "; cin >> d2;
    cout << "Sisi                   : "; cin >> sisi;

    luas = (d1*d2)/2;
    keliling = sisi*4;

    cout << "Luas                   : " << luas << endl;
    cout << "Keliling               : " << keliling << endl;

    return 0;
}
