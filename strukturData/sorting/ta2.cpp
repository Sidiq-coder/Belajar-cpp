#include <iostream>
using namespace std;

int main(){

    int jumlah;
    int arr[1005];
    string nama[1005];
    string pindah;
    int n = 0;
    
    cout << "Masukan Jumlah Nilai Yang Akan Diinput : ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++){
        cout << "Masukan Nama: ";
        cin >> nama[i];
        cout << "Masukan Nilai: ";
        cin >> arr[i];
        cout << endl;
    }

    for (int j = 0; j < jumlah; j++){
        for (int i = 0; i < jumlah - 1; i++){
            if (arr[i] < arr[i+1]){
                n = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = n;

                pindah = nama[i];
                nama[i] = nama[i + 1];
                nama[i + 1] = pindah;
            }
            n = 0;
            
        //     for (int i = 0; i < jumlah; i++){
        //     cout << arr[i] << " " ;
        // }
        // cout << endl;
        }
    }

    for (int i = 0; i < jumlah; i++){
        cout << nama[i] <<": " << arr[i] << endl;
    }

    return 0;
}