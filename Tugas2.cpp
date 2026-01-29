#include <iostream>
using namespace std;

// deklarasi variabel global (seperti punyamu)
string wilayah;
string hari;
int totalbelanja;
bool member;

int main() {

    // Input wilayah
    cout << "Haloo Silahkan Masukkan Area Anda [jabodetabek/luar]"<<endl;
    cin >> wilayah;

    // Input total belanja
    cout << "Silahkan Masukkan Total Belanja Anda"<<endl;
    cin >> totalbelanja;

    // Input apakah member
    cout << "Apakah Anda Termasuk Member TokoNusa? (1 = ya, 0 = tidak)"<<endl;
    cin >> member;

    // Input hari
    cout << "Pilih Hari (Senin - Minggu)"<<endl;
    cin >> hari;

    // Ubah input hari menjadi lowercase agar program tidak bingung
    for (int i = 0; i < hari.length(); i++) {
        hari[i] = tolower(hari[i]);
    }

    // Ubah wilayah menjadi lowercase juga agar lebih aman
    for (int i = 0; i < wilayah.length(); i++) {
        wilayah[i] = tolower(wilayah[i]);
    }

    // pengecekan wilayah
    if (wilayah == "jabodetabek") {

        //gratis ongkir apabila
        if (totalbelanja >= 300000 && (member || hari == "sabtu" || hari == "minggu")) {

            cout << "Anda Mendapat Gratis Ongkir"<<endl;
        }

        //mendapat diskon 50%
        else if ((totalbelanja >= 150000 && member) ||(totalbelanja >= 200000 && (hari == "sabtu" || hari == "minggu"))) {

            cout << "Diskon Ongkir 50%"<<endl;
        }

        //ongkir penuh apabila tidak memenuhi
        else {
            cout << "Mohon Maaf, Ongkir Penuh"<<endl;
        }
    }

    //untuk wilayah luar
    else {

        //mendapat diskon 70%
        if (totalbelanja >= 500000 && member && (hari == "sabtu" || hari == "minggu")) {

            cout << "Diskon Ongkir 70%"<<endl;
        }

        //mendapat diskon 40%
        else if (totalbelanja >= 350000 &&
                 (member || hari == "sabtu" || hari == "minggu")) {

            cout << "Diskon Ongkir 40%"<<endl;
        }

        //ongkir penuh
        else {
            cout << "Mohon Maaf, Ongkir Penuh"<<endl;
        }
    }

    return 0;
}