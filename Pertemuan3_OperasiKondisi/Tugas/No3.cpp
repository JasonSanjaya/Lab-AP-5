#include<iostream>
using namespace std;
int main ()
{
    float berat,tinggi,BMI;

    cout<<"===Program BMI===\n";
    cout<<"Masukan berat badan Anda (Kg): ";
    cin>>berat;
    cout<<"Masukan tinggi Anda (M): ";
    cin>>tinggi;
    
    BMI = berat/(tinggi * tinggi);
    cout<<"BMI Anda: "<<BMI<<endl;

    if (BMI < 18.5)
    {
        cout<<"Kategori Berat Badan: Berat Badan Kurang.\n";
    } 
    else if (BMI >= 18.5 && BMI < 25)
    {
        cout<<"Kategori Berat Badan: Berat Badan Normal.\n";
    }
    else if (BMI >=25 && BMI < 30)
    {
        cout<<"Kategori Berat Badan: Berat Badan Berlebih.\n";
    }
    else if (BMI >= 30)
    {
        cout<<"Kategori Berat Badan: Obesitas.\n";
    }
    else 
    {
        cout<<"Kategori Berat Badan: invalid\n";
    }

    system ("pause");
    return 0;
}