#include "protein.h"
#include "RNA.h"
#include "DNA.h"
#include "CodonsTable.h"
#include <cstring>
#include <iostream>
using namespace std;
protein::protein()
{

}
protein::protein(char* p, protein_Type atype)
{

    strcpy (seq , p );
    type = atype ;
}
protein::~protein()
{

}

protein& protein::operator=(const protein& rhs)
{
    delete [] seq;

    seq = new char [strlen(rhs.seq)];
    strcpy (seq,rhs.seq);
    type=rhs.type;
    return *this ;
}
ostream& operator<<(ostream& out,const protein& p)
{
    out << p.seq << "  " << p.type << endl;
    return out ;
}
istream& operator>>(istream& in,protein& R)
{
    in >> R.seq ;
    return in ;
}

void protein::Print()
{
    cout <<seq << endl;

}
// return an array of DNA sequences that can possibly generate
// that protein sequence
DNA* protein::GetDNAStrandsEncodingMe(protein p)
{
/*string proDNA = "" ;
CodonsTable co ;
for (int i = 0 ; i <strlen(p) ; i++) {
    if (p[i]==co[i].AminoAcid) {
        proDNA+=co[i].value ;
    }
}
for (int i=0; i<proDNA.size();i++){
    if(proDNA[i] == 'U')
    {
        proDNA[i] = 'T' ;
    }
  }
  cout << proDNA << endl ;*/

}


