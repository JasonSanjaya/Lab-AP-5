#include <iostream>
#include <cmath>
using namespace std;

int main() {
    system("CLS");

    int angka;
    char perintah ='Y';
    
    while (perintah == 'Y') {
        bool prima = true; 
        cout << "Masukan sebuah bilangan bulat: ";
        cin >> angka;

        if (angka <= 1) {
            prima = false;
        } else {
            for (int i = 2; i <= sqrt(angka); i++) { 
                if (angka % i == 0) {
                    prima = false;
                    break;
                }
            }
        }   

        if (prima) {
            cout << angka << " adalah bilangan prima";
        } else {
            cout << angka << " bukan bilangan prima";
        }

        cout << "\nUlangi program? (Y/N): ";
        cin >> perintah;
        perintah = toupper(perintah);

        // Clear input buffer
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return 0;
}
