#include <iostream>
using namespace std;
int main(){

    string jenis_buku[2][4] = {{"Struktur Data", "Kalkulus", "Algoritma & Pemrograman", "Basis Data"}, {"Struktur Data", "Kalkulus", "Algoritma & Pemrograman", "Basis Data"}};

    int jumlah[2][4];

    // Inputkan Jumlah Buku
    cout << "Masukan Jumlah Buku" << endl;
    for (int i = 0; i < 2; i++){
        cout << "Ruang " << i + 1 << endl;
        for (int j = 0; j < 4; j++){
            cout << j + 1 << ". " << jenis_buku[i][j] << " : ";
            cin >> jumlah[i][j];
        }
        cout << endl;
    }

    // Total Buku
    cout << "Jumlah Buku" << endl;
    for (int i = 0; i < 4; i++){
        cout << i + 1 << ". " << jenis_buku[0][i] << " : " << jumlah[0][i] + jumlah[1][i] << endl; 
    }
    
    return 0;
}