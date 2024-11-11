#include <iostream>
#include <cmath> // Untuk fungsi pow (perpangkatan) dan factorial
using namespace std;

int menu() {
    cout << "[1] Penjumlahan (+)" << endl;
    cout << "[2] Pengurangan (-)" << endl;
    cout << "[3] Perkalian (*)" << endl;
    cout << "[4] Pembagian (/)" << endl;
    cout << "[5] Perpangkatan (^)" << endl;
    cout << "[6] Faktorial (!)" << endl;
    cout << "[0] Keluar" << endl;
    int nomorDipilih;
    cout << "Pilih nomor: ";
    cin >> nomorDipilih;
    return nomorDipilih;
}

double kembalAtauKeluar(double hasilOperasi) { 
    cout << "[Hasil = " << hasilOperasi << "]" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "[9] Kembali ke Menu" << endl;
    cout << "[0] Keluar" << endl;
    int nomorDipilih;
    cout << "Pilih nomor: ";
    cin >> nomorDipilih;
    return nomorDipilih;
}

// Fungsi untuk masing-masing operasi
double penjumlahan() {
    double a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    return a + b;
}

double pengurangan() {
    double a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    return a - b;
}

double perkalian() {
    double a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    return a * b;
}

double pembagian() {
    double a, b;
    cout << "Masukkan dua angka: ";
    cin >> a >> b;
    if (b != 0)
        return a / b;
    else {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
        return 0;
    }
}

double perpangkatan() {
    double base, eksponen;
    cout << "Masukkan angka dan eksponen: ";
    cin >> base >> eksponen;
    return pow(base, eksponen);
}

int faktorial() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;
    if (n < 0) {
        cout << "Error: Faktorial dari angka negatif tidak didefinisikan." << endl;
        return 0;
    }
    int hasil = 1;
    for (int i = 1; i <= n; i++) {
        hasil *= i;
    }
    return hasil;
}

int main() {
    while (true) {
        cout << "=============================================================" << endl;
        cout << "===================    KALKULATOR     =======================" << endl;
        cout << "=============================================================" << endl;

        int nomorDipilih = menu();

        if (nomorDipilih == 0) break; // Keluar dari program

        double hasil = 0;
        switch (nomorDipilih) {
            case 1:
                hasil = penjumlahan();
                break;
            case 2:
                hasil = pengurangan();
                break;
            case 3:
                hasil = perkalian();
                break;
            case 4:
                hasil = pembagian();
                break;
            case 5:
                hasil = perpangkatan();
                break;
            case 6:
                hasil = faktorial();
                break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                continue;
        }

        // Menampilkan hasil dan menanyakan apakah ingin kembali atau keluar
        int kembaliAtauKeluar = kembalAtauKeluar(hasil);
        if (kembaliAtauKeluar == 0) break; // Keluar dari program
    }

    cout << "Terima kasih telah menggunakan kalkulator." << endl;
    return 0;
}
