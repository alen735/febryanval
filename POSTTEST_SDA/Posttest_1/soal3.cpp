#include <iostream>
using namespace std;

void balikArray(int* p, int jumlah) {
    int *awal = p;
    int *akhir = p + (jumlah - 1);
    
    while (awal < akhir) {
        // Proses swap lewat pointer
        int wadah = *awal;
        *awal = *akhir;
        *akhir = wadah;
        
        awal++;
        akhir--;
    }
}

int main() {
    int angkaPrima[] = {2, 3, 5, 7, 11, 13, 17};
    int n = 7;

    cout << "Kondisi Awal (Nilai & Memori):" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(angkaPrima + i) << " alamatnya di: " << (angkaPrima + i) << endl;
    }

    balikArray(angkaPrima, n);

    cout << "\nSetelah Dibalik (Reverse):" << endl;
    for (int i = 0; i < n; i++) {
        cout << *(angkaPrima + i) << " alamatnya di: " << (angkaPrima + i) << endl;
    }

    return 0;
}