//add include statements
#include <iostream>
using namespace std;
//add function code here

double get_gc_content(const string& dna)
{
    double counter = 0.0;
    int dnaSize = dna.length(); 
    
    for(int i = 0; i < dnaSize; i++)
    {
        if(dna[i] == 'G' || dna[i] == 'C')
        {
            counter++;
        }
    }

    return counter/dnaSize;
}   

string get_reverse_string(string dna)
{
    string newDNA = "";
    int dnaSize = dna.length();
    for(int i = dnaSize - 1; i >= 0; i--)
    {
        newDNA = newDNA + dna[i];
    }
    return newDNA;
}

string get_dna_complement(string dna)
{
    string reverseDNA = get_reverse_string(dna);
    string complimentDNA = "";
    int dnaSize = reverseDNA.length();
    

    for(int i = 0; i < dnaSize; i++)
    {
        if(reverseDNA[i] == 'A')
        {
            complimentDNA = complimentDNA + "T";
        }
        else if(reverseDNA[i] == 'T')
        {
            complimentDNA = complimentDNA + "A";
        }
        else if(reverseDNA[i] == 'C')
        {
            complimentDNA = complimentDNA + "G";
        }
        else if(reverseDNA[i] == 'G')
        {
            complimentDNA = complimentDNA + "C";
        }
    }
    return complimentDNA;
}


