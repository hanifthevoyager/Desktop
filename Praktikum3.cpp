#include <iostream>
using namespace std;
double KelilingLingkaran (const float phi, int r);
int main (){
    int jari2;
    double hasil;
    cout<<"masukkan ukuran jari2";
    cin>>jari2;
    hasil=KelilingLingkaran(3.14,jari2);
    cout<<"keliling lingkaran = "<<hasil;
    return 0;
}
double KelilingLingkaran(float phi, int r){
    phi=1;
    return (2*phi*r);
}