#include<iostream>
using namespace std;

int main()
{
    // Variabel
    const int I = 2;
    const int K = 7;
    const int L = 1;
    const int C = 9;
    const int U = 5;
    const int S = 6;
    bool a,b,c;
    int d;
    
    // Program Utama 
    cout<<"===Program Prioritas Operator Nomor 1===\n";
    a = (((3 - 1) < I) || (((K - 5) < (8 + 2)) && ((L + 7) >= (9 + 3))));
    b = (((L % 3) > U) && (((C / U) < S) || (((3 * I) - K) > 0)));
    c = (((I - 9) > K) || ((L + 3) < (4 * C)));
    d = (I | ((K & L) ^ (3 << 2)));

    // Output
    cout<<"Diketahui I=2;K=7;L=1;C=9;U=5;S=6. Tentukan hasil dari ekspresi relasi dan logika di bawah ini:\n ";
    cout<<"a. 3-1<I OR K-5<8+2 AND L+7>=9+3 "<<endl;
    cout<<"Jawaban: "<<a<<endl;
    cout<<"b. L%3>U AND (C/U<S OR 3*I-K>0) "<<endl;
    cout<<"Jawaban: "<<b<<endl;
    cout<<"c. I-9>K OR L+3<4*C "<<endl;
    cout<<"Jawaban: "<<c<<endl;
    cout<<"d. I OR K AND L XOR 3 SHL 2 (bitwise) "<<endl;
    cout<<"Jawaban: "<<d<<endl;
    system("pause");

    return 0;
}