#include <iostream>
#include <cmath>
using namespace std;

void tampilkanMenu() {
    cout << "\n=== Kalkulator Scientific ===" << endl;
    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Pangkat" << endl;
    cout << "6. Akar Kuadrat" << endl;
    cout << "7. Sinus" << endl;
    cout << "8. Cosinus" << endl;
    cout << "9. Keluar" << endl;
    cout << "Pilih operasi (1-9): ";
}

int main() {
    int pilihan;
    double angka1, angka2, hasil;
    bool lanjut = true;
    
    while(lanjut) {
        tampilkanMenu();
        cin >> pilihan;
        
        switch(pilihan) {
            case 1: // Penjumlahan
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                hasil = angka1 + angka2;
                cout << "Hasil: " << hasil << endl;
                break;
                
            case 2: // Pengurangan
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                hasil = angka1 - angka2;
                cout << "Hasil: " << hasil << endl;
                break;
                
            case 3: // Perkalian
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                hasil = angka1 * angka2;
                cout << "Hasil: " << hasil << endl;
                break;
                
            case 4: // Pembagian
                cout << "Masukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua: ";
                cin >> angka2;
                if(angka2 != 0) {
                    hasil = angka1 / angka2;
                    cout << "Hasil: " << hasil << endl;
                } else {
                    cout << "Error! Pembagian dengan nol tidak diizinkan." << endl;
                }
                break;
                
            case 5: // Pangkat
                cout << "Masukkan angka: ";
                cin >> angka1;
                cout << "Masukkan pangkat: ";
                cin >> angka2;
                hasil = pow(angka1, angka2);
                cout << "Hasil: " << hasil << endl;
                break;
                
            case 6: // Akar Kuadrat
                cout << "Masukkan angka: ";
                cin >> angka1;
                if(angka1 >= 0) {
                    hasil = sqrt(angka1);
                    cout << "Hasil: " << hasil << endl;
                } else {
                    cout << "Error! Tidak bisa menghitung akar dari bilangan negatif." << endl;
                }
                break;
                
            case 7: // Sinus
                cout << "Masukkan sudut (dalam derajat): ";
                cin >> angka1;
                hasil = sin(angka1 * M_PI / 180.0);
                cout << "Hasil: " << hasil << endl;
                break;
                
            case 8: // Cosinus
                cout << "Masukkan sudut (dalam derajat): ";
                cin >> angka1;
                hasil = cos(angka1 * M_PI / 180.0);
                cout << "Hasil: " << hasil << endl;
                break;
                
            case 9: // Keluar
                lanjut = false;
                cout << "Terima kasih telah menggunakan kalkulator ini!" << endl;
                break;
                
            default:
                cout << "Pilihan tidak valid!" << endl;
        }
    }
    
    return 0;
}
