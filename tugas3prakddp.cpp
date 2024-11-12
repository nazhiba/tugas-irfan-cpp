#include <iostream>
#include <cmath>
using namespace std;

int menu() {
    cout << "[1] Penjumlahan (+)" << endl;
    cout << "[2] Pengurangan (-)" << endl;
    cout << "[3] Perkalian (*)" << endl;
    cout << "[4] Pembagian (/)" << endl;
    cout << "[5] Perpangkatan (^)" << endl;
    cout << "[6] Faktorial (!)" << endl;
    cout << "[7] Deret Bilangan (n*n+1)" << endl;
    cout << "[8] Deret Aritmatika" << endl;
    cout << "[0] Keluar" << endl;
    int nomorDipilih;
    cout << "Pilih nomor: ";
    cin >> nomorDipilih;
    return nomorDipilih;
}

int kembalAtauKeluar(double hasilOperasi) {
    cout << "[Hasil = " << hasilOperasi << "]" << endl;
    cout << "-------------------------------------------------------------" << endl;
    cout << "[9] Kembali ke Menu" << endl;
    cout << "[0] Keluar" << endl;
    int nomorDipilih;
    cout << "Pilih nomor: ";
    cin >> nomorDipilih;
    return nomorDipilih;
}

double penjumlahan() {
    double a, b;
    cout << "-------------------------------------------------------------" << endl;
    cout << "[ PENJUMLAHAN ]" << endl;
    cout << "Masukkan 2 bilangan: " << endl;
    cout << "bil. 1 = ";
    cin >> a;
    cout << "bil. 2 = ";
    cin >> b;
    return a + b;
}

double pengurangan() {
    double a, b;
    cout << "-------------------------------------------------------------" << endl;
    cout << "[ PENGURANGAN ]" << endl;
    cout << "Masukkan 2 bilangan: " << endl;
    cout << "bil. 1 = ";
    cin >> a;
    cout << "bil. 2 = ";
    cin >> b;
    return a - b;
}

double perkalian() {
    double a, b;
    cout << "-------------------------------------------------------------" << endl;
    cout << "[ PERKALIAN ]" << endl;
    cout << "Masukkan 2 bilangan: " << endl;
    cout << "bil. 1 = ";
    cin >> a;
    cout << "bil. 2 = ";
    cin >> b;
    return a * b;
}

double pembagian() {
    double a, b;
    cout << "-------------------------------------------------------------" << endl;
    cout << "[ PEMBAGIAN ]" << endl;
    cout << "Masukkan 2 bilangan: " << endl;
    cout << "bil. 1 = ";
    cin >> a;
    cout << "bil. 2 = ";
    cin >> b;
    if (b == 0) {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan." << endl;
        return 0;
    }
    return a / b;
}

double perpangkatan() {
    double base, eksponen;
    cout << "-------------------------------------------------------------" << endl;
    cout << "[ PERPANGKATAN ]" << endl;
    cout << "Masukkan bilangan dan pangkat: " << endl;
    cout << "Bilangan = ";
    cin >> base;
    cout << "Pangkat = ";
    cin >> eksponen;
    return pow(base, eksponen);
}

int faktorial(int n) {
    if (n <= 1) return 1;
    return n * faktorial(n - 1);
}

double faktorialWrapper() {
    int n;
    cout << "-------------------------------------------------------------" << endl;
    cout << "[ FAKTORIAL ]" << endl;
    cout << "Bilangan = ";
    cin >> n;
    if (n < 0) {
        cout << "Error: Faktorial dari angka negatif tidak didefinisikan." << endl;
        return 0;
    }
    return faktorial(n);
}

int deretBilangan(int n) {
    if (n <= 0) return 0;
    return (n * n + 1) + deretBilangan(n - 1);
}

double deretBilanganWrapper() {
    int n;
    cout << "-------------------------------------------------------------" << endl;
    cout << "[ DERET BILANGAN ]" << endl;
    cout << "Masukkan panjang deret: ";
    cin >> n;
    return deretBilangan(n);
}

int deretAritmatika(int n, int a, int b) {
    if (n <= 0) return 0;
    return (a + (n - 1) * b) + deretAritmatika(n - 1, a, b);
}

double deretAritmatikaWrapper() {
    cout << "-------------------------------------------------------------" << endl;
    int n, a, b;
    cout << "[ DERET ARITMATIKA ]" << endl;
    cout << "Masukkan 3 bilangan: " << endl;
    cout << "n = ";
    cin >> n;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    return deretAritmatika(n, a, b);
}


int main() {
    while (true) {
        int nomorDipilih = menu();
        if (nomorDipilih == 0) break;

        double hasil = 0;
        switch (nomorDipilih) {
            case 1: hasil = penjumlahan(); break;
            case 2: hasil = pengurangan(); break;
            case 3: hasil = perkalian(); break;
            case 4: hasil = pembagian(); break;
            case 5: hasil = perpangkatan(); break;
            case 6: hasil = faktorialWrapper(); break;
            case 7: hasil = deretBilanganWrapper(); break;
            case 8: hasil = deretAritmatikaWrapper(); break;
            default:
                cout << "Pilihan tidak valid!" << endl;
                continue;
        }

        int kembaliAtauKeluar = kembalAtauKeluar(hasil);
        if (kembaliAtauKeluar == 0) break;
    }
    cout << "==========================================================" << endl;
    cout << "Terima kasih telah menggunakan kalkulator ini :)" << endl;
    cout << "==========================================================" << endl;
    return 0;
}
