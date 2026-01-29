#include <iostream>
using namespace std;
int main()
{
    int jumlahData;
    cout << "Masukkan jumlah data barang yang ingin dikelola: ";
    cin >> jumlahData;
    char nama[jumlahData][20];
    int harga[jumlahData];
    int stok[jumlahData];
    int pilihan;
    int dataMasuk = 0;
    do
    {
        cout << " Warung Barokah " << endl;
        cout << "1. Menambah Data Barang" << endl;
        cout << "2. Menampilkan Data Barang" << endl;
        cout << "3. Mengubah Data Barang" << endl;
        cout << "4. Mencari Data Barang" << endl;
        cout << "5. Selesai" << endl;
        cout << "Pilih: ";
        cin >> pilihan;
        if (pilihan == 1)
        {
            if (dataMasuk < jumlahData)
            {
                cout << "Nama Barang : ";
                cin >> nama[dataMasuk];
                cout << "Harga       : ";
                cin >> harga[dataMasuk];
                cout << "Stok        : ";
                cin >> stok[dataMasuk];
                dataMasuk++;
            }
            else
            {
                cout << "Data sudah penuh" << endl;
            }
        }
        else if (pilihan == 2)
        {
            if (dataMasuk == 0)
            {
                cout << "Data masih kosong" << endl;
            }
            else
            {
                for (int i = 0; i < dataMasuk; i++)
                {
                    cout << "------------------" << endl;
                    cout << "Index : " << i << endl;
                    cout << "Nama  : " << nama[i] << endl;
                    cout << "Harga : " << harga[i] << endl;
                    cout << "Stok  : " << stok[i] << endl;
                }
            }
        }
        else if (pilihan == 3)
        {
            int ubah;
            cout << "Masukkan nomor barang: ";
            cin >> ubah;
            if (ubah >= 0 && ubah < dataMasuk)
            {
                cout << "Nama Baru  : ";
                cin >> nama[ubah];
                cout << "Harga Baru : ";
                cin >> harga[ubah];
                cout << "Stok Baru  : ";
                cin >> stok[ubah];
            }
            else
            {
                cout << "Data tidak ditemukan" << endl;
            }
        }
        else if (pilihan == 4)
        {
            int cari;
            cout << "Masukkan nomor barang: ";
            cin >> cari;

            if (cari >= 0 && cari < dataMasuk)
            {
                cout << "Nama  : " << nama[cari] << endl;
                cout << "Harga : " << harga[cari] << endl;
                cout << "Stok  : " << stok[cari] << endl;
            }
            else
            {
                cout << "Data tidak ditemukan" << endl;
            }
        }
        else if (pilihan == 5)
        {
            cout << "Program selesai" << endl;
        }
        else
        {
            cout << "Pilihan tidak valid" << endl;
        }
        } while (pilihan != 5);
    return 0;
}