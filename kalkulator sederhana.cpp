#include <iostream>
using namespace std;

int main() {
    char operasi;
    double angka1, angka2;
    
    cout << "=== Kalkulator Sederhana ===" << endl;
    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    
    cout << "Masukkan operator (+, -, *, /): ";
    cin >> operasi;
    
    cout << "Masukkan angka kedua: ";
    cin >> angka2;
    
    switch(operasi) {
        case '+':
            cout << "Hasil: " << angka1 + angka2;
            break;
        case '-':
            cout << "Hasil: " << angka1 - angka2;
            break;
        case '*':
            cout << "Hasil: " << angka1 * angka2;
            break;
        case '/':
            if(angka2 != 0)
                cout << "Hasil: " << angka1 / angka2;
            else
                cout << "Error! Pembagian dengan nol tidak diizinkan.";
            break;
        default:
            cout << "Error! Operator tidak valid.";
    }
    
    cout << endl;
    return 0;
}
