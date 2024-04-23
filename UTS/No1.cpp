#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, kalimat);

    cout << "Hasil Akhir:\n";

    int panjangKalimat = kalimat.length();
    string kata = "";

    for (int i = 0; i < panjangKalimat; i++) {
        if (kalimat[i] != ' ') {
            kata += kalimat[i];
        } else if (kalimat[i] = ' ') {
            kata += kalimat[i];
            }else{
            int panjangKata = kata.length();
            for (int j = panjangKata - 1; j >= 0; j--) {
                cout << kata[j] << endl;
            }
            kata = "";
        }
    }

    int panjangKata = kata.length();
    for (int j = panjangKata - 1; j >= 0; j--) {
        cout << kata[j] << endl;
    }

    return 0;
}
