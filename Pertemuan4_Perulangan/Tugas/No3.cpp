#include <iostream>
using namespace std;

int main() {
    system("CLS");

    int tahun,interval;
    cout<<"Program Kabisat\n";
    cout<<"Syarat: "<<endl<<"1. Tahun harus berada di interval 1000 hingga 9000."<<endl<<"2. Interval harus berada di antara (-tahun) hingga (9999-tahun)."<<endl<<"Silahkan Mencoba!!\n";
    cout<<"Masukan Tahun: "; cin>>tahun;
    cout<<"Masukan Interval: "; cin>>interval;

    if ((tahun >= 1000 && tahun <= 9000) && (interval >= (-tahun) && interval <= (9999-tahun)))
    {
        if (interval > 0){
            for (int i=tahun;i<=interval+tahun;i++){
                if( i % 4 == 0){
                    cout<<i<<" kabisat"<<endl;
                }else{
                    cout<<i<<" bukan kabisat"<<endl;
                }
            }
        }else{
            for (int i=tahun;i>=interval+tahun;i--){
                if( i % 4 == 0){
                    cout<<i<<" kabisat"<<endl;
                }else{
                    cout<<i<<" bukan kabisat"<<endl;
                }
            }
        }
    }else{
        cout<<"Masukan inputan yang valid :))";
    }
    
    
    return 0;
}