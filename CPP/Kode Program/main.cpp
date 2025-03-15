#include <iostream>
#include <string>
#include <vector>
#include "Kasir.cpp"
#include "Pasta.cpp"
#include "NasiGoreng.cpp"
#include "Jus.cpp"

using namespace std;

int main()
{
    Kasir kasir;

    // Input data kasir
    string idKasir, namaKasir;
    cout << "Masukkan ID Kasir: ";
    getline(cin, idKasir);
    kasir.setId(idKasir);

    cout << "Masukkan Nama Kasir: ";
    getline(cin, namaKasir);
    kasir.setNama(namaKasir);

    int jumlahCustomer;
    cout << "\nMasukkan Jumlah Customer yang Dilayani: ";
    cin >> jumlahCustomer;
    cin.ignore();

    for (int i = 0; i < jumlahCustomer; ++i)
    {
        Customer* customer = new Customer();

        // Input data customer
        string namaCustomer, tanggal;
        cout << "\nMasukkan Nama Customer: ";
        getline(cin, namaCustomer);
        customer->setNama(namaCustomer);

        cout << "Masukkan Tanggal Pemesanan (dd/mm/yyyy): ";
        getline(cin, tanggal);
        customer->setTanggal(tanggal);

        int jumlahItem;
        cout << "Masukkan Jumlah Item yang Dipesan: ";
        cin >> jumlahItem;
        cin.ignore();

        for (int j = 0; j < jumlahItem; ++j)
        {
            cout << "\nPilih Jenis Item (1. Pasta, 2. Nasi Goreng, 3. Jus): ";
            int pilihan;
            cin >> pilihan;
            cin.ignore();

            Items* item = nullptr;

            if (pilihan == 1)
            {
                item = new Pasta();

                string saus, pasta;
                cout << "Masukkan Nama Pasta: ";
                getline(cin, saus);
                item->setNama(saus);
                
                cout << "Masukkan Jenis Pasta: ";
                getline(cin, pasta);
                ((Pasta*)item)->setPasta(pasta);
                
                cout << "Masukkan Tipe Saus: ";
                getline(cin, saus);
                ((Pasta*)item)->setSaus(saus);

                cout << "Masukkan Harga Pasta: ";
                int harga;
                cin >> harga;
                cin.ignore();
                item->setHargaProduk(harga);
            }
            else if (pilihan == 2)
            {
                item = new NasiGoreng();

                string jenis;
                int lvl;
                cout << "Masukkan Nama Nasi Goreng: ";
                getline(cin, jenis);
                item->setNama(jenis);

                
                cout << "Masukkan Jenis Nasi Goreng (Ayam / Seafood): ";
                getline(cin, jenis);
                ((NasiGoreng*)item)->setJenis(jenis);
                
                cout << "Masukkan Level Kepedasan (1-5): ";
                cin >> lvl;
                cin.ignore();
                ((NasiGoreng*)item)->setLvlKepedasan(lvl);
                
                cout << "Masukkan Harga Nasi Goreng: ";
                int harga;
                cin >> harga;
                cin.ignore();
                item->setHargaProduk(harga);
            }
            else if (pilihan == 3)
            {
                item = new Jus();

                string buah;
                cout << "Masukkan Nama Jus: ";
                getline(cin, buah);
                item->setNama(buah);

                cout << "Masukkan Harga Jus: ";
                int harga;
                cin >> harga;
                cin.ignore();
                item->setHargaProduk(harga);

                cout << "Masukkan Jenis Buah: ";
                getline(cin, buah);
                ((Jus*)item)->setBuah(buah);
            }
            else
            {
                cout << "Pilihan tidak valid. Coba lagi.\n";
                --j;
                continue;
            }

            customer->tambahPesanan(item);
        }

        kasir.tambahCustomer(customer);
    }

    // Menampilkan seluruh data yang telah diinputkan
    cout << "\n============================================\n";
    kasir.tampilkanCustomer();
    cout << "============================================\n";

    return 0;
}
