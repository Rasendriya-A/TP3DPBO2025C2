#ifndef ITEMS_CPP
#define ITEMS_CPP

#include <iostream>
#include <string>

using namespace std;

class Items
{
    private:
        string Id;
        string Nama;
        string Kategori;
        int HargaProduk;
    
    public:
        // Constructor Default
        Items() {}

        // Setter dan Getter ID
        void setId(string id1)
        {
            Id = id1;
        }

        string getId()
        {
            return Id;
        }

        // Setter dan Getter Nama
        void setNama(string nama1)
        {
            Nama = nama1;
        }

        string getNama()
        {
            return Nama;
        }

        // Setter dan Getter Kategori
        void setKategori(string kategori1)
        {
            Kategori = kategori1;
        }

        string getKategori()
        {
            return Kategori;
        }

        // Setter dan Getter HargaProduk
        void setHargaProduk(int harga)
        {
            HargaProduk = harga;
        }

        int getHargaProduk()
        {
            return HargaProduk;
        }

        ~Items()
        {

        }
};

#endif  // ITEMS_CPP