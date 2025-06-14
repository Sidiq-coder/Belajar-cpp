#include <iostream>
using namespace std;

int main(){

    int n, pilih, jumlah, insert;
    int arr[1005] ;
    string nama[1005];
    string pindah;
    char yt;

    cout << "Masukan Jumlah Nilai Yang Akan Di Input : ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++){
        cout << "Nama Siswa : ";
        cin >> nama[i];
        cout << "Nilai Siswa : ";
        cin >> arr[i];
        cout << endl;
    }

    for (int i = 0; i < jumlah; i++){
        cout << "Nama : " << nama[i] << endl << "Nilai : " << arr[i] << endl;
    }
    
    cout << endl;

    while (yt != 't'){

        cout << endl << "Urutkan berdasarkan :  " << endl;
        cout << "1. Ascending" << endl << "2. Descending" << endl;

        cout << "Pilih : ";
        cin >> pilih;
        cout << endl;

        if(pilih == 1){
           for (int i = 1; i < jumlah; i++){
            n = arr[i];
            insert = i - 1;

            while ( insert >= 0 && arr[insert] > n){
                arr[insert + 1] = arr[insert];
                insert--;
            }
        
            arr[insert + 1] = n;

            for (int i = 0; i < jumlah; i++){
                cout << arr[i] << " ";
            } 
            cout << endl;
            }
        } else if(pilih == 2){
        for (int i = 1; i < jumlah; i++){
            n = arr[i];
            insert = i - 1;

            while ( insert >= 0 && arr[insert] < n){
                arr[insert + 1] = arr[insert];
                insert--;
            }
        
            arr[insert + 1] = n;

            for (int i = 0; i < jumlah; i++){
                cout << arr[i] << " ";
            } 
            cout << endl;
        }    
        } else {
            continue;
        }

        for (int i = 0; i < jumlah; i++){
            cout << "Nama : " << nama[i] << endl << "Nilai : " << arr[i] << endl;
        }
        
        cout << endl << "Pilih Lagi (t, untuk keluar) : ";
        cin >> yt;
        cout << endl;
    }
    return 0;
}