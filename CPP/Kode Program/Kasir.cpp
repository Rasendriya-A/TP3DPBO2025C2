#ifndef KASIR_CPP
#define KASIR_CPP

#include <iostream>
#include <string>
#include <vector>
#include "Customer.cpp"

using namespace std;

class Kasir
{
    private:
        string Id;                            // ID Kasir
        string Nama;                          // Nama Kasir
        vector<Customer*> daftarCustomer;     // Array of object Customer (menggunakan pointer)

    public:
        // Constructor Default
        Kasir() {}

        // Setter ID
        void setId(string id1)
        {
            Id = id1;
        }

        // Getter ID
        string getId()
        {
            return Id;
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

        // Menambahkan Customer ke dalam daftar
        void tambahCustomer(Customer* customer)
        {
            daftarCustomer.push_back(customer);
        }

        // Menampilkan Semua Customer yang Dilayani
        void tampilkanCustomer()
        {
            cout << "Kasir: " << Nama << " (ID: " << Id << ")" << endl;
            cout << "Daftar Customer yang Dilayani: " << endl;

            for (Customer* customer : daftarCustomer)
            {
                cout << "- Nama Customer: " << customer->getNama() 
                     << " | Tanggal Pemesanan: " << customer->getTanggal() << endl;
                customer->tampilkanPesanan();
                cout << endl;
            }
        }

        // Destructor untuk menghapus semua Customer (Pointer Cleanup)
        ~Kasir()
        {
            for (Customer* customer : daftarCustomer)
            {
                delete customer;  // Menghapus objek Customer untuk mencegah memory leak
            }
            daftarCustomer.clear();
        }
};

#endif  // KASIR_CPP