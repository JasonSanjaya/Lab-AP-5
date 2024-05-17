#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  char *kata = "K O M P U T E R";
  cout<<kata<<endl;
  kata += 8;
  cout << "Huruf ke-5: "<<*kata;
  //kalau cout<<kata; untuk dari kata 5 sampai akhir 
  return 0;
}