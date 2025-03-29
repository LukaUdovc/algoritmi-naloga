//Ustvarjena nal. Algoritmi
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>

using namespace std;

bool Branje_Stevil(vector<unsigned char>& vec, const char s[]) {
    ifstream input(s);
    int st;

    if (!input.is_open()) {
        cerr << "Napaka: ne morem odpreti datoteke " << s << endl;
        return false;
    }

    while (input >> st) {
        if (st < 0 || st > 255) {
            cerr << "Napaka: stevilo " << st << " ni v razponu [0, 255].\n";
            return false;
        }
        vec.push_back(static_cast<unsigned char>(st));
        while (isspace(input.peek())) input.get();
    }

    input.close();
    return true;
}

void Izpis_Stevil(int* polje, unsigned int velikost) {

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