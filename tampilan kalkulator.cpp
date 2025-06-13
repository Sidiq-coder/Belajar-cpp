#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <windows.h> // Untuk fungsi system("cls") di Windows
using namespace std;

// Fungsi untuk membersihkan layar
void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// Fungsi untuk membuat garis horizontal
void printLine(int length, char symbol = '=') {
    cout << string(length, symbol) << endl;
}

// Fungsi untuk membuat judul dengan border
void printTitle(string title) {
    int width = 50;
    printLine(width);
    int padding = (width - title.length()) / 2;
    cout << string(padding, ' ') << title << endl;
    printLine(width);
}

// Fungsi untuk menampilkan menu dengan style
void displayMenu() {
    clearScreen();
    printTitle("KALKULATOR SCIENTIFIC");
    cout << "\n+--------------------------------------+\n";
    cout << "¦           PILIHAN OPERASI            ¦\n";
    cout << "+--------------------------------------¦\n";
    cout << "¦  [1] Penjumlahan                    ¦\n";
    cout << "¦  [2] Pengurangan                    ¦\n";
    cout << "¦  [3] Perkalian                      ¦\n";
    cout << "¦  [4] Pembagian                      ¦\n";
    cout << "¦  [5] Pangkat                        ¦\n";
    cout << "¦  [6] Akar Kuadrat                   ¦\n";
    cout << "¦  [7] Sinus                          ¦\n";
    cout << "¦  [8] Cosinus                        ¦\n";
    cout << "¦  [9] Keluar                         ¦\n";
    cout << "+--------------------------------------+\n";
}

// Fungsi untuk menampilkan hasil dengan style
void displayResult(string operation, double result) {
    cout << "\n+--------------------------------------+\n";
    cout << "¦             HASIL " << left << setw(16) << operation << "¦\n";
    cout << "+--------------------------------------¦\n";
    cout << "¦  " << fixed << setprecision(2) << result << setw(34) << " ¦\n";
    cout << "+--------------------------------------+\n";
    cout << "\nTekan Enter untuk melanjutkan...";
    cin.ignore();
    cin.get();
}

int main() {
    int pilihan;
    double angka1, angka2, hasil;
    bool lanjut = true;
    string operationName;
    
    while(lanjut) {
        displayMenu();
        cout << "\nMasukkan pilihan (1-9): ";
        cin >> pilihan;
        
        switch(pilihan) {
            case 1: // Penjumlahan
                clearScreen();
                printTitle("OPERASI PENJUMLAHAN");
                cout << "\nMasukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua  : ";
                cin >> angka2;
                hasil = angka1 + angka2;
                displayResult("PENJUMLAHAN", hasil);
                break;
                
            case 2: // Pengurangan
                clearScreen();
                printTitle("OPERASI PENGURANGAN");
                cout << "\nMasukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua  : ";
                cin >> angka2;
                hasil = angka1 - angka2;
                displayResult("PENGURANGAN", hasil);
                break;
                
            case 3: // Perkalian
                clearScreen();
                printTitle("OPERASI PERKALIAN");
                cout << "\nMasukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua  : ";
                cin >> angka2;
                hasil = angka1 * angka2;
                displayResult("PERKALIAN", hasil);
                break;
                
            case 4: // Pembagian
                clearScreen();
                printTitle("OPERASI PEMBAGIAN");
                cout << "\nMasukkan angka pertama: ";
                cin >> angka1;
                cout << "Masukkan angka kedua  : ";
                cin >> angka2;
                if(angka2 != 0) {
                    hasil = angka1 / angka2;
                    displayResult("PEMBAGIAN", hasil);
                } else {
                    cout << "\n+--------------------------------------+\n";
                    cout << "¦           PERINGATAN ERROR           ¦\n";
                    cout << "+--------------------------------------¦\n";
                    cout << "¦  Pembagian dengan nol tidak valid!   ¦\n";
                    cout << "+--------------------------------------+\n";
                    cout << "\nTekan Enter untuk melanjutkan...";
                    cin.ignore();
                    cin.get();
                }
                break;
                
            case 5: // Pangkat
                clearScreen();
                printTitle("OPERASI PANGKAT");
                cout << "\nMasukkan angka: ";
                cin >> angka1;
                cout << "Masukkan pangkat: ";
                cin >> angka2;
                hasil = pow(angka1, angka2);
                displayResult("PANGKAT", hasil);
                break;
                
            case 6: // Akar Kuadrat
                clearScreen();
                printTitle("OPERASI AKAR KUADRAT");
                cout << "\nMasukkan angka: ";
                cin >> angka1;
                if(angka1 >= 0) {
                    hasil = sqrt(angka1);
                    displayResult("AKAR KUADRAT", hasil);
                } else {
                    cout << "\n+--------------------------------------+\n";
                    cout << "¦           PERINGATAN ERROR           ¦\n";
                    cout << "+--------------------------------------¦\n";
                    cout << "¦  Tidak bisa menghitung akar dari     ¦\n";
                    cout << "¦  bilangan negatif!                   ¦\n";
                    cout << "+--------------------------------------+\n";
                    cout << "\nTekan Enter untuk melanjutkan...";
                    cin.ignore();
                    cin.get();
                }
                break;
                
            case 7: // Sinus
                clearScreen();
                printTitle("OPERASI SINUS");
                cout << "\nMasukkan sudut (dalam derajat): ";
                cin >> angka1;
                hasil = sin(angka1 * M_PI / 180.0);
                displayResult("SINUS", hasil);
                break;
                
            case 8: // Cosinus
                clearScreen();
                printTitle("OPERASI COSINUS");
                cout << "\nMasukkan sudut (dalam derajat): ";
                cin >> angka1;
                hasil = cos(angka1 * M_PI / 180.0);
                displayResult("COSINUS", hasil);
                break;
                
            case 9: // Keluar
                clearScreen();
                cout << "\n+--------------------------------------+\n";
                cout << "¦             TERIMA KASIH            ¦\n";
                cout << "+--------------------------------------¦\n";
                cout << "¦  Sampai jumpa di perhitungan        ¦\n";
                cout << "¦  selanjutnya!                       ¦\n";
                cout << "+--------------------------------------+\n";
                lanjut = false;
                break;
                
            default:
                cout << "\n+--------------------------------------+\n";
                cout << "¦           PERINGATAN ERROR           ¦\n";
                cout << "+--------------------------------------¦\n";
                cout << "¦  Pilihan tidak valid!               ¦\n";
                cout << "+--------------------------------------+\n";
                cout << "\nTekan Enter untuk melanjutkan...";
                cin.ignore();
                cin.get();
        }
    }
    
    return 0;
}
