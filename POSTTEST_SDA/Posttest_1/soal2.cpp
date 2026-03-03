#include <iostream>
#include <string>
using namespace std;

struct DataMhs {
    string namaLengkap;
    string nimMhs;
    float ipkMhs;
};

int main() {
    DataMhs list[5];
    int simpanIndex = 0;

    for(int i = 0; i < 5; i++) {
        cout << "== Masukkan Data Mahasiswa " << i+1 << " ==" << endl;
        cout << "Nama : "; getline(cin >> ws, list[i].namaLengkap);
        cout << "NIM  : "; cin >> list[i].nimMhs;
        cout << "IPK  : "; cin >> list[i].ipkMhs;
        
        // Cek IPK paling tinggi
        if (list[i].ipkMhs > list[simpanIndex].ipkMhs) {
            simpanIndex = i;
        }
        cout << endl;
    }

    cout << "--- Mahasiswa Berprestasi (IPK Tertinggi) ---" << endl;
    cout << "Nama : " << list[simpanIndex].namaLengkap << endl;
    cout << "NIM  : " << list[simpanIndex].nimMhs << endl;
    cout << "IPK  : " << list[simpanIndex].ipkMhs << endl;

    return 0;
}