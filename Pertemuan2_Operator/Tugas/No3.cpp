#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int main()
{
    // Variabel
    char bangun;
    const float phi = 3.14;
    float r,s,t,Luas_Permukaan,Volume;
    float a1,a2,a3,a4,t1,t2,t3,t4,Luas_alas1,Luas_alas2,Luas_alas3,Luas_alas4;
    float ss1,ss2,ss3,Keliling_alas;

    // Program Utama 
    cout<<"===Program Menghitung Luas Permukaan dan Volume dari Bangun Ruang:\n";
    cout<<"a. Kerucut\n";
    cout<<"b. Limas Segitiga\n";
    cout<<"c. Bola\n";
    cout<<"d. Prisma\n";
    cout<<"Masukan bangun ruang yang ingin Anda hitung: ";
    cin>>bangun;

    system("cls");
    bangun = tolower(bangun);
    switch(bangun)
    {
        // Program Kerucut 
        case 'a':
        cout<<"===Program Kerucut===\n";
        cout<<"Masukan jari-jari alas(Cm): "; cin>>r;
        cout<<"Masukan garis pelukis(Cm): "; cin>>s;
        cout<<"Masukan tinggi kerucut(Cm): "; cin>>t;

        Luas_Permukaan = phi * r * s + phi * r * r;
        Volume = 0.33 * phi * r * r * t;
        cout<<fixed<<setprecision(3);
        cout<<"Luas Permukaan Kerucut(Cm^2): "<<Luas_Permukaan<<endl;
        cout<<"Volume Kerucut(Cm^3): "<<Volume<<endl;
        break;

        // Program Limas Segitiga
        case 'b':
        cout<<"===Program Limas Segitiga===\n";
        cout<<"Masukan alas(Cm)(Bagian Bawah): "; cin>>a1;
        cout<<"Masukan tinggi alas(Cm)(Bagian Bawah): "; cin>>t;
        cout<<"Masukan alas segitiga 1: ";cin>>a2;
        cout<<"Masukan tinggi segitiga 1: ";cin>>t1;
        cout<<"Masukan alas segitiga 2: ";cin>>a3;
        cout<<"Masukan tinggi segitiga 2: ";cin>>t2;
        cout<<"Masukan alas segitiga 3: ";cin>>a4;
        cout<<"Masukan tinggi segitiga 3: ";cin>>t3;
        cout<<"Masukan tinggi limas: ";cin>>t4;

        Luas_alas1 = 0.5 * a1 * t;
        Luas_alas2 = 0.5 * a2 * t1;
        Luas_alas3 = 0.5 * a3 * t2;
        Luas_alas4 = 0.5 * a4 * t3;

        Luas_Permukaan = Luas_alas1 + Luas_alas2 + Luas_alas3 + Luas_alas4;
        Volume = 0.33 * Luas_alas1 * t4;

        cout<<fixed<<setprecision(3);
        cout<<"Luas Permukaan Limas Segitiga(Cm^2): "<<Luas_Permukaan<<endl;
        cout<<"Volume Limas Segitiga(Cm^3): "<<Volume<<endl;
        break;        

        // Program Bola
        case 'c':
        cout<<"===Program Bola===\n";
        cout<<"Masukan jari-jari bola(Cm): "; cin>> r;

        Luas_Permukaan = 4 * phi * r * r;
        Volume = 1.33 * phi * r * r * r;
        cout<<fixed<<setprecision(3);
        cout<<"Luas Permukaan Bola(Cm^2): "<<Luas_Permukaan<<endl;
        cout<<"Volume Bola(Cm^3): "<<Volume<<endl;
        break;

        // Program Prisma
        case 'd':
        cout<<"===Program Prisma===\n";
        cout<<"Masukan panjang sisi 1/alas(Cm): "; cin>>ss1;
        cout<<"Masukan panjang sisi 2(Cm): "; cin>>ss2;
        cout<<"Masukan panjang sisi 3(Cm): "; cin>>ss3;
        cout<<"Masukan tinggi alas(Cm): "; cin>>t;
        cout<<"Masukan tinggi prisma(Cm): "; cin>>t1;

        Luas_alas1 = 0.5 * ss1 * t;
        Keliling_alas = ss1 + ss2 + ss3;
        Luas_Permukaan = (2 * Luas_alas1) + (Keliling_alas * t1);
        Volume = Luas_alas1 * t1;
        cout<<fixed<<setprecision(3);
        cout<<"Luas Permukaan Prisma(Cm^2): "<<Luas_Permukaan<<endl;
        cout<<"Volume Prisma(Cm^3): "<<Volume<<endl;
        break;
    }

    system("pause");
    return 0;
}