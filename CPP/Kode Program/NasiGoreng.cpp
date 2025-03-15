#ifndef NASIGORENG_CPP
#define NASIGORENG_CPP

#include <iostream>
#include <string>
#include "Items.cpp"

using namespace std;

class NasiGoreng : public Items
{
    private:
        string Jenis;            // Contoh: "Ayam", "Seafood"
        int Lvl_Kepedasan;        // Level kepedasan dari 1 - 5

    public:
        // Constructor Default
        NasiGoreng() 
        {

        }

        // Setter dan Getter Jenis
        void setJenis(string jenis1)
        {
            Jenis = jenis1;
        }

        string getJenis()
        {
            return Jenis;
        }

        // Setter dan Getter Lvl_Kepedasan
        void setLvlKepedasan(int lvl)
        {
            if (lvl >= 1 && lvl <= 5) {  // Validasi agar level kepedasan berada dalam rentang 1 - 5
                Lvl_Kepedasan = lvl;
            } else {
                cout << "Level kepedasan tidak valid! (Pilih antara 1 - 5)" << endl;
            }
        }

        int getLvlKepedasan()
        {
            return Lvl_Kepedasan;
        }

        ~NasiGoreng()
        {

        }
};

#endif  // NASIGORENG_CPP