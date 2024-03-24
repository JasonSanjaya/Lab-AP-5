#include <iostream>
using namespace std;

int main() {
    
    
    int umur;

    cout<<"Berapa umur kamu: ";
    cin>>umur;

    if (umur<0){
        cout<<"Kamu Bukan Manusia";
    } else {
        switch(umur){
            case 0 ... 5 :
            cout<<"kamu masih balita";
            break;

            case 6 ... 17 :
            cout<<"kamu masih remaja";
            break;

            case 18 ... 40 :
            cout<<"kamu masih dewasa";
            break;

            case 41 ... 60 :
            cout<<"kamu masih lansia";
            break;

            default:
            cout<<"kamu ketuaan";
            break;
        }
    }
    
    

    return 0;
}