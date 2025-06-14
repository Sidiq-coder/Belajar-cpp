#include <iostream>
#include <string>
using namespace std;

struct Node {
    string nama;
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

    void enqueue(string nama) {
        Node* baru = new Node();
        baru->nama = nama;
        baru->next = NULL;
        if (isEmpty()) {
            head = tail = baru;
        } else {
            tail->next = baru;
            tail = baru;
        }
        cout << nama << " masuk dalam antrian.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Antrian kosong, tidak ada pelanggan untuk dilayani.\n";
        } else {
            Node* hapus = head;
            cout << "Melayani pelanggan: " << hapus->nama << endl;
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
                cout << "- " << temp->nama << endl;
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

int main() {
    Queue antrian;
    int pilihan;
    string nama;

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

        switch (pilihan) {
            case 1:
                cout << "Masukkan nama pelanggan: ";
                getline(cin, nama);
                antrian.enqueue(nama);
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
