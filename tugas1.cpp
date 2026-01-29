#include <iostream>
using namespace std;

int main() {
    int semester;
    float ipk;
    float pendapatanorangtua;
    bool aktiforganisasi;
    bool punyasertifikat;
    
    cout<<"Semester: ";
    cin>>semester;
    cout<<"Ipk: ";
    cin>>ipk;
    cout<<"Pendapatan orang tua: ";
    cin>>pendapatanorangtua;
    cout<<"Aktif organisasi: "; 
    cin>>aktiforganisasi;
    cout<<"Punya sertifikat: ";
    cin>>punyasertifikat;

if (semester >=3) {
    if (pendapatanorangtua<= 5 &&
    ipk >=3.50&&
    (aktiforganisasi || punyasertifikat)) {
        cout<<"Beasiswa penuh";
    }
    else if (ipk>=3.20&&
    (aktiforganisasi || punyasertifikat)) {
        cout<<"Beasiswa parsial";
    }
    else {
        cout<<"Tidak lolos";
    }
}
else {
    cout<<"Tidak lolos";
}
return 0;
}
