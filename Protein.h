#ifndef PROTEIN_H
#define PROTEIN_H
#include "Sequence.h"
#include <iostream>
using namespace std;


class DNA;
enum protein_Type {Hormon, Enzyme, TF, Cellular_Function};

class protein : public Sequence<char>
{
private:
    protein_Type type;
public:
    // constructors and destructor
    protein();
    protein(char* p, protein_Type atype);
    ~protein();
    protein& operator=(const protein&);
    friend ostream& operator<<(ostream& ,const protein&);
    friend istream& operator>>(istream& ,protein&);
    void Print();
    // return an array of DNA sequences that can possibly generate
    // that protein sequence
    DNA* GetDNAStrandsEncodingMe(protein p);
    class protein_error{
      public:
            const char * ShowError()
            {
                return "Error length must be divisible by 3 ";
            }};
    class protein_error2{
    public:
              const char * ShowError()
              {
                return "Error sequence must conatins A,C,G,T only";
              }};

};


#endif // PROTEIN_H

