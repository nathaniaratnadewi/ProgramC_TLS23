#include <iostream>
using namespace std;

int main() {
    char operasi;
    double angka1, angka2;

    cout << "Masukkan operasi (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan dua angka: ";
    cin >> angka1 >> angka2;

    switch(operasi) {
        case '+':
            cout << "Hasil penjumlahan: " << angka1 + angka2 << endl;
            break;
        case '-':
            cout << "Hasil pengurangan: " << angka1 - angka2 << endl;
            break;
        case '*':
            cout << "Hasil perkalian: " << angka1 * angka2 << endl;
            break;
        case '/':
            if(angka2 != 0)
                cout << "Hasil pembagian: " << angka1 / angka2 << endl;
            else
                cout << "Tidak bisa melakukan pembagian oleh nol." << endl;
            break;
        default:
            cout << "Operasi tidak valid." << endl;
            break;
    }

    return 0;
}
