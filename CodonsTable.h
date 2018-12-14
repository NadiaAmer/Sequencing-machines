#ifndef CODONSTABLE_H
#define CODONSTABLE_H
#include<string>
struct Codon
{
    char value[4];
    // 4​th​ location for null character
    char AminoAcid;
    //corresponding AminoAcid according to Table
};


class CodonsTable {
    private:
    //Codon codons[64];
public:
    Codon codons[64];
// constructors and destructor
CodonsTable();
~CodonsTable();
// function to load all codons from the given text file
void LoadCodonsFromFile(std::string codonsFileName);
Codon getAminoAcid(char * value);
void setCodon(char * value, char AminoAcid, int index);
};

#endif // CODONSTABLE _H

