#include<iostream>
using namespace std;
int main()
{
    const float pajak = 0.05;
    int golongan,jumlah_anak,gaji_pokok,tunjangan_anak,gaji_total,potongan_pajak;
    string nama;
    
    cout<<"===Program Gaji Total===\n";
    cout<<"Masukan Nama: ";
    getline(cin,nama);
    cout<<"Masukan Golongan (1-3): ";
    cin>>golongan;
    cout<<"Masukan Jumlah Anak: ";
    cin>>jumlah_anak;

    if (golongan == 1)
    {
        gaji_pokok = 5000000;
    }
    else if (golongan == 2)
    {
        gaji_pokok = 3000000;
    }
    else if (golongan == 3)
    {
        gaji_pokok = 2500000;
    }
    else 
    {
        cout<<"Golongan yang Anda Masukan Tidak Valid.";
    }
    if (jumlah_anak <= 2)
    {
        tunjangan_anak = jumlah_anak * 500000; 
    }
    else 
    {
        tunjangan_anak = jumlah_anak  *750000;
    }
    
    gaji_total = gaji_pokok + tunjangan_anak;
    potongan_pajak = gaji_total * pajak;
    gaji_total -= potongan_pajak;
    cout<<"Gaji Total: Rp. "<<gaji_total;

    cout<<"\n";
    system("pause");
    return 0;
}