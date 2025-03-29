//Ustvarjena nal. Algoritmi
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>

using namespace std;

// Branje števil iz datoteke
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

// Izpis števil v datoteko out.txt
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
    vector<unsigned char> A;
    if (!Branje_Stevil(A, argv[1])) {
        return 1;
    }



    // Pretvori v int in izpiši
    vector<int> A_int(A.begin(), A.end());
    Izpis_Stevil(&A_int[0], A_int.size());


    cout << "Sortiranje koncano. Rezultat v out.txt\n";
    return 0;
}