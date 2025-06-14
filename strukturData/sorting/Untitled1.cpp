#include <iostream>

using namespace std;

int main() {
    string nama_ruangan[3] = {"Ruang Sirkulasi", "Ruang Referensi", "Ruang Baca"};
    string jenis_buku[4] = {"Buku Fiksi", "Buku Akademik", "Majalah", "Komik"};
    int banyak_buku[3][4]; 
    int total_buku[4]; 

    for (int i = 0; i < 3; i++) {
        cout << "Masukkan jumlah buku untuk " << nama_ruangan[i] << ":" << endl;
        for (int j = 0; j < 4; j++) {
            cout << jenis_buku[j] << ": ";
            cin >> banyak_buku[i][j];
        }
        cout << endl;
    }

    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            total_buku[j] += banyak_buku[i][j];
        }
    }

    cout << "Total jumlah buku untuk setiap jenis buku dalam perpustakaan:" << endl;
    for (int j = 0; j < 4; j++) {
        cout << jenis_buku[j] << ": " << total_buku[j] << " buku" << endl;
    }

    return 0;
}


