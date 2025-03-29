//Ustvarjena nal. Algoritmi
#include <iostream>
#include <fstream>
#include <vector>
#include <cctype>

using namespace std;

bool Branje_Stevil(vector<unsigned char>& vec, const char s[]) {

}

void Izpis_Stevil(int* polje, unsigned int velikost) {

}

// Binarni radix sort
void Binarni_Radix_Sort(vector<unsigned char>& A) {
    const int n = A.size();

    for (int bit = 0; bit < 8; ++bit) {
        // Polje D – bite trenutnega bita vseh števil
        vector<int> D(n);
        for (int i = 0; i < n; ++i) {
            D[i] = (A[i] >> bit) & 1;
        }
        // Stable counting sort nad D – z upoštevanjem indeksa A
        vector<int> count(2, 0);
        for (int b : D) count[b]++;

        // kumulativna vsota
        count[1] = count[0];
        count[0] = 0;

        vector<unsigned char> A_sorted(n);
        vector<int> D_sorted(n);// ni nujno

        for (int i = 0; i < n; ++i) {
            int b = D[i];
            int pos = count[b]++;
            A_sorted[pos] = A[i];
            D_sorted[pos] = b;
        }
        // Posodobi A
        A = A_sorted;
    }
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
    Binarni_Radix_Sort(A);
    cout << "Sortiranje koncano. Rezultat v out.txt\n";
    return 0;
}