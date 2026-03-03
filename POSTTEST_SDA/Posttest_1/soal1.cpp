#include <iostream>
using namespace std;

// Fungsi mencari nilai terkecil
int cariMin(int data[], int size, int &posisi) {
    int nilaiTerkecil = data[0];
    posisi = 0;
    
    for (int j = 1; j < size; j++) {
        // Operasi perbandingan utama
        if (data[j] < nilaiTerkecil) {
            nilaiTerkecil = data[j];
            posisi = j;
        }
    }
    return nilaiTerkecil;
}

int main() {
    int deretFibo[8] = {1, 1, 2, 3, 5, 8, 13, 21};
    int letak;
    int hasil = cariMin(deretFibo, 8, letak);

    cout << "Angka paling kecil: " << hasil << endl;
    cout << "Ada di index ke: " << letak << endl;

    return 0;
}

/* ANALISIS MANUAL (Tabel Cost):
   -------------------------------------------------
   Baris Kode              | Cost | Kali (n)
   -------------------------------------------------
   int nilaiTerkecil = ... | c1   | 1
   posisi = 0              | c2   | 1
   for j = 1 to n-1        | c3   | n
   if (data[j] < min)      | c4   | n-1
   nilaiTerkecil = data[j] | c5   | 0 s/d n-1
   return nilaiTerkecil    | c6   | 1
   -------------------------------------------------
   
   KESIMPULAN BIG-O:
   - Best Case (Tmin): O(n) -> Terjadi jika elemen terkecil di depan.
   - Worst Case (Tmax): O(n) -> Terjadi jika elemen terkecil di belakang/acak.
   Meskipun jumlah assignment berbeda, loop tetap berjalan linear sesuai n.
*/