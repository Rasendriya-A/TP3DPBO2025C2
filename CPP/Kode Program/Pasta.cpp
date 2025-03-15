#ifndef PASTA_CPP
#define PASTA_CPP

#include <iostream>
#include <string>
#include "Items.cpp"

using namespace std;

class Pasta : public Items
{
    private:
        string Saus;
        string JenisPasta;

    public:
        // Constructor Default
        Pasta() 
        {

        }

        // Setter dan Getter Saus
        void setSaus(string saus1)
        {
            Saus = saus1;
        }

        string getSaus()
        {
            return Saus;
        }

        // Setter dan Getter Pasta
        void setPasta(string pasta1)
        {
            JenisPasta = pasta1;
        }

        string getPasta()
        {
            return JenisPasta;
        }

        ~Pasta()
        {

        }
};

#endif  // SPAGETTI_CPP