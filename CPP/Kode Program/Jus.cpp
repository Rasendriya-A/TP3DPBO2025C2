#ifndef JUS_CPP
#define JUS_CPP

#include <iostream>
#include <string>
#include "Items.cpp"

using namespace std;

class Jus : public Items
{
    private:
        string Buah;      // Jenis buah yang digunakan (contoh: "Mangga", "Jeruk", "Apel")

    public:
        // Constructor Default
        Jus() 
        {

        }

        // Setter dan Getter Buah
        void setBuah(string buah1)
        {
            Buah = buah1;
        }

        string getBuah()
        {
            return Buah;
        }

        ~Jus()
        {

        }
};

#endif  // JUS_CPP