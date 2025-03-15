#ifndef CUSTOMER_CPP
#define CUSTOMER_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Items.cpp"

using namespace std;

class Customer
{
    private:
        string Nama;                         // Nama Customer
        string Tanggal;                      // Tanggal Pemesanan
        vector<Items*> pesanan;              // List pesanan (menggunakan pointer ke Items)
    
    public:
        // Constructor Default
        Customer() 
        {

        }

        // Setter Nama
        void setNama(string nama1)
        {
            Nama = nama1;
        }

        // Getter Nama
        string getNama()
        {
            return Nama;
        }

        // Setter Tanggal
        void setTanggal(string tanggal1)
        {
            Tanggal = tanggal1;
        }

        // Getter Tanggal
        string getTanggal()
        {
            return Tanggal;
        }

        // Menambahkan Pesanan ke dalam daftar
        void tambahPesanan(Items* item)
        {
            pesanan.push_back(item);
        }

        // Menampilkan Daftar Pesanan
        void tampilkanPesanan()
        {
            cout << "Daftar Pesanan untuk Customer: " << Nama << endl;
            for (Items* item : pesanan)
            {
                cout << "- " << item->getNama() << " (Rp" << item->getHargaProduk() << ")" << endl;
            }
        }

        // Destructor untuk menghapus semua pesanan (Pointer Cleanup)
        ~Customer()
        {
            for (Items* item : pesanan)
            {
                delete item;  // Menghapus objek yang di-pointer agar tidak terjadi memory leak
            }
            pesanan.clear();
        }
};

#endif  // CUSTOMER_CPP