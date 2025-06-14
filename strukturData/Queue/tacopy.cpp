#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
    string makanan;
    string minuman;
    Node* next;
};

struct Queue {
    Node* head;
    Node* tail;

    Queue() {
        head = tail = NULL;
    }

    bool isEmpty() {
        return head == NULL;
    }

    void enqueue(string nama, string makanan, string minuman) {
        Node* baru = new Node();
        baru->nama = nama;
        baru->makanan = makanan;
        baru->minuman = minuman;
        baru->next = NULL;
        if (isEmpty()) {
            head = tail = baru;
        } else {
            tail->next = baru;
            tail = baru;
        }
        cout << nama << " telah memesan " << makanan << " dan " << minuman << " dan masuk dalam antrian.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong, tidak ada pelanggan untuk dilayani.\n";
        } else {
            Node* hapus = head;
            cout << "Melayani pelanggan: " << hapus->nama << " yang memesan " << hapus->makanan << " dan " << hapus->minuman << endl;
            head = head->next;
            delete hapus;
            if (head == NULL) {
                tail = NULL;
            }
        }
    }

    void tampilAntrian() {
        if (isEmpty()) {
            cout << "Antrian kosong.\n";
        } else {
            Node* temp = head;
            cout << "Daftar pelanggan dalam antrian:\n";
            while (temp != NULL) {
                cout << "- " << temp->nama << ": " << temp->makanan << ", " << temp->minuman << endl;
                temp = temp->next;
            }
        }
    }

    void clear() {
        while (!isEmpty()) {
            dequeue();
        }
        cout << "Antrian telah dikosongkan.\n";
    }
};

void tampilkanMenuMakanan() {
    cout << "\n=== Menu Makanan ===\n";
    cout << "1. Nasi Goreng\n";
    cout << "2. Mie Ayam\n";
}

void tampilkanMenuMinuman() {
    cout << "\n=== Menu Minuman ===\n";
    cout << "1. Es Teh\n";
    cout << "2. Kopi\n";
}

string pilihMakanan() {
    int pilihan;
    tampilkanMenuMakanan();
    cout << "Pilih makanan (1-2): ";
    cin >> pilihan;
    cin.ignore();
    switch (pilihan) {
        case 1: return "Nasi Goreng";
        case 2: return "Mie Ayam";
        default: 
            cout << "Pilihan tidak valid, memilih Nasi Goreng secara default.\n";
            return "Nasi Goreng";
    }
}

string pilihMinuman() {
    int pilihan;
    tampilkanMenuMinuman();
    cout << "Pilih minuman (1-2): ";
    cin >> pilihan;
    cin.ignore();
    switch (pilihan) {
        case 1: return "Es Teh";
        case 2: return "Kopi";
        default: 
            cout << "Pilihan tidak valid, memilih Es Teh secara default.\n";
            return "Es Teh";
    }
}

int main() {
    Queue antrian;
    int pilihan;
    string nama, makanan, minuman;

    do {
        cout << "\n=== Program Antrian Restoran ===\n";
        cout << "1. Tambah Pelanggan (Enqueue)\n";
        cout << "2. Layani Pelanggan (Dequeue)\n";
        cout << "3. Tampilkan Antrian\n";
        cout << "4. Kosongkan Antrian\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;
        cin.ignore();
/*
=== Program Antrian Restoran ===
1. Tambah Pelanggan (Enqueue)
2. Layani Pelanggan (Dequeue)
3. Tampilkan Antrian
4. Kosongkan Antrian
5. Keluar
Pilih menu: 1
Masukkan nama pelanggan: sidiq

=== Menu Makanan ===
1. Nasi Goreng
2. Mie Ayam
Pilih makanan (1-2): 1

=== Menu Minuman ===
1. Es Teh
2. Kopi
Pilih minuman (1-2): 2
sidiq telah memesan Nasi Goreng dan Kopi dan masuk dalam antrian.

=== Program Antrian Restoran ===
1. Tambah Pelanggan (Enqueue)
2. Layani Pelanggan (Dequeue)
3. Tampilkan Antrian
4. Kosongkan Antrian
5. Keluar
Pilih menu: 3
Daftar pelanggan dalam antrian:
- sidiq: Nasi Goreng, Kopi

=== Program Antrian Restoran ===
1. Tambah Pelanggan (Enqueue)
2. Layani Pelanggan (Dequeue)
3. Tampilkan Antrian
4. Kosongkan Antrian
5. Keluar
Pilih menu: 1
Masukkan nama pelanggan: firdaus

=== Menu Makanan ===
1. Nasi Goreng
2. Mie Ayam
Pilih makanan (1-2): 2

=== Menu Minuman ===
1. Es Teh
2. Kopi
Pilih minuman (1-2): 1
firdaus telah memesan Mie Ayam dan Es Teh dan masuk dalam antrian.

=== Program Antrian Restoran ===
1. Tambah Pelanggan (Enqueue)
2. Layani Pelanggan (Dequeue)
3. Tampilkan Antrian
4. Kosongkan Antrian
5. Keluar
Pilih menu: 3
Daftar pelanggan dalam antrian:
- sidiq: Nasi Goreng, Kopi
- firdaus: Mie Ayam, Es Teh

=== Program Antrian Restoran ===
1. Tambah Pelanggan (Enqueue)
2. Layani Pelanggan (Dequeue)
3. Tampilkan Antrian
4. Kosongkan Antrian
5. Keluar
Pilih menu: 2
Melayani pelanggan: sidiq yang memesan Nasi Goreng dan Kopi

=== Program Antrian Restoran ===
1. Tambah Pelanggan (Enqueue)
2. Layani Pelanggan (Dequeue)
3. Tampilkan Antrian
4. Kosongkan Antrian
5. Keluar
Pilih menu: 3
Daftar pelanggan dalam antrian:
- firdaus: Mie Ayam, Es Teh

=== Program Antrian Restoran ===
1. Tambah Pelanggan (Enqueue)
2. Layani Pelanggan (Dequeue)
3. Tampilkan Antrian
4. Kosongkan Antrian
5. Keluar
Pilih menu: 5
Terima kasih telah menggunakan program antrian restoran.
 */
        switch (pilihan) {
            case 1:
                cout << "Masukkan nama pelanggan: ";
                getline(cin, nama);
                makanan = pilihMakanan();
                minuman = pilihMinuman();
                antrian.enqueue(nama, makanan, minuman);
                break;
            case 2:
                antrian.dequeue();
                break;
            case 3:
                antrian.tampilAntrian();
                break;
            case 4:
                antrian.clear();
                break;
            case 5:
                cout << "Terima kasih telah menggunakan program antrian restoran.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (pilihan != 5);

    return 0;
}
