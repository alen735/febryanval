#include <iostream>
using namespace std;

// Pakai simbol & untuk reference
void pindahNilai(int &v1, int &v2) {
    int cadangan = v1;
    v1 = v2;
    v2 = cadangan;
}

int main() {
    int angka1, angka2;

    cout << "10: "; cin >> angka1;
    cout << "50: "; cin >> angka2;

    cout << "\nSebelum di-swap: " << angka1 << " dan " << angka2 << endl;

    pindahNilai(angka1, angka2);

    cout << "Setelah di-swap: " << angka1 << " dan " << angka2 << endl;

    return 0;
    }