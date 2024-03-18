#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    // Variabel 
    float a,b,c,diskriminan,hasil1,hasil2;

    // Program Utama
    cout<<"===Program Mencari Akar dari Persamaan Kuadrat===\n";
    cout<<"Nilai A: ";
    cin>>a;
    cout<<"Nilai B: ";
    cin>>b;
    cout<<"Nilai C: ";
    cin>>c;
    
    // Cari Diskriminan
    diskriminan = (b * b - (4 * a * c)) ; 

    // Seleksi Diskriminan
    if ( diskriminan < 0 )
    {
        cout<<"Akar-akar dari persamaan kuadrat bukan merupakan bilangan real atau imajiner.";
    }
    else 
    {
        hasil1 = (- b + sqrt (diskriminan))/2*a;
        hasil2 = (- b - sqrt (diskriminan))/2*a;

        printf("Akar-akar dari persamaan yang Anda maksud adalah: %f dan %f.",hasil1,hasil2);
    }

    cout<<endl;
    system("pause");
    return 0;
}