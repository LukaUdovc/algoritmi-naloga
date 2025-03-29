//Ustvarjena nal. Algoritmi
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>

using namespace std;

bool Branje_Stevil(vector<unsigned char>& vec, const char s[]) {

}

void Izpis_Stevil(int* polje, unsigned int velikost) {
    ofstream output("out.txt");
    if (!output) {
        cerr << "Napaka: ne morem ustvariti ali pisati v out.txt\n";
        return;
    }

    for (unsigned int i = 0; i < velikost; i++)
        output << polje[i] << ' ';
    output << endl;
    output.close();
}

void Binarni_Radix_Sort(vector<unsigned char>& A) {

}

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        cerr << "Uporaba: " << argv[0] << " <vhodna_datoteka>\n";
        return 1;
    }

    cout << "Sortiranje koncano. Rezultat v out.txt\n";
    return 0;
}