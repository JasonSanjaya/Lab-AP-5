#include <iostream>
#include <cmath>
using namespace std;

float hitungEfisiensi(int matriks[3][3], int kolom1, int kolom2, int kolom3) {
    int a = matriks[0][kolom1];
    int b = matriks[1][kolom2];
    int c = matriks[2][kolom3];
    return sqrt(a * a + b * b + c * c);
}

int main() {
    system("CLS");
    int matriks[3][3];

    cout<<"===Program Efisiensi===\n";
    cout << "Masukkan Angka 3x3:\n";
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << "Masukkan Angka baris " << i + 1 << " kolom " << j + 1 << ": ";
            cin >> matriks[i][j];
        }
    }

    float maksEfisiensi = 0.0;

    for (int kolom1 = 0; kolom1 < 3; ++kolom1) {
        for (int kolom2 = 0; kolom2 < 3; ++kolom2) {
            for (int kolom3 = 0; kolom3 < 3; ++kolom3) {
                if (kolom1 != kolom2 && kolom1 != kolom3 && kolom2 != kolom3) {
                    float efisiensi = hitungEfisiensi(matriks, kolom1, kolom2, kolom3);
                    if (efisiensi > maksEfisiensi) {
                        maksEfisiensi = efisiensi;
                    }
                }
            }
        }
    }

    cout << "Efisiensi terbesar dari angka yang diberikan adalah: " << maksEfisiensi << endl;

    return 0;
}