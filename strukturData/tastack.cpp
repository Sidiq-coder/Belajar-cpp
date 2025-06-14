#include <iostream>
using namespace std;

#define MAX 10

struct DoubleStack {
    int arr[MAX];
    int top1, top2;
};

void init(DoubleStack &ds) {
    ds.top1 = -1;
    ds.top2 = MAX;
}

void push1(DoubleStack &ds, int x) {
    if (ds.top1 < ds.top2 - 1) {    
        ds.arr[++ds.top1] = x;       
        cout << "Elemen " << x << " berhasil dimasukkan ke Stack 1.\n";
    } else {
        cout << "Stack Overflow untuk Stack 1.\n";
    }
}

void push2(DoubleStack &ds, int x) {
    if (ds.top1 < ds.top2 - 1) {    
        ds.arr[--ds.top2] = x;      
        cout << "Elemen " << x << " berhasil dimasukkan ke Stack 2.\n";
    } else {
        cout << "Stack Overflow untuk Stack 2.\n";
    }
}

void pop1(DoubleStack &ds) {
    if (ds.top1 >= 0) {                    
        cout << "Elemen " << ds.arr[ds.top1--] << " dihapus dari Stack 1.\n";
    } else {
        cout << "Stack 1 Underflow.\n";
    }
}

void pop2(DoubleStack &ds) {
    if (ds.top2 < MAX) {                   
        cout << "Elemen " << ds.arr[ds.top2++] << " dihapus dari Stack 2.\n";
    } else {
        cout << "Stack 2 Underflow.\n";
    }
}

void display1(DoubleStack &ds) {
    if (ds.top1 >= 0) {
        cout << "Stack 1: ";
        for (int i = ds.top1; i >= 0; i--)
            cout << ds.arr[i] << " ";
        cout << endl;
    } else {
        cout << "Stack 1 kosong.\n";
    }
}

void display2(DoubleStack &ds) {
    if (ds.top2 < MAX) {
        cout << "Stack 2: ";
        for (int i = ds.top2; i < MAX; i++)
            cout << ds.arr[i] << " ";
        cout << endl;
    } else {
        cout << "Stack 2 kosong.\n";
    }
}

void clear(DoubleStack &ds) {
    ds.top1 = -1;
    ds.top2 = MAX;
    cout << "Kedua stack berhasil dikosongkan.\n";
}

int main() {
    DoubleStack ds;
    init(ds);
    int choice, x;

    do {
        cout << "\nMenu:\n1. Push ke Stack 1\n2. Push ke Stack 2\n3. Pop dari Stack 1\n4. Pop dari Stack 2\n";
        cout << "5. Tampilkan Stack 1\n6. Tampilkan Stack 2\n7. Clear kedua stack\n8. Exit\n";
        cout << "Pilihan: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukkan elemen untuk Stack 1: ";
                cin >> x;
                push1(ds, x);
                break;
            case 2:
                cout << "Masukkan elemen untuk Stack 2: ";
                cin >> x;
                push2(ds, x);
                break;
            case 3:
                pop1(ds);
                break;
            case 4:
                pop2(ds);
                break;
            case 5:
                display1(ds);
                break;
            case 6:
                display2(ds);
                break;
            case 7:
                clear(ds);
                break;
            case 8:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    } while (choice != 8);

    return 0;
}
