#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);
void selectionSOrt(int arr[], int n);
void insertionSort(int arr[], int n);

int main(){
    int n, pilih;
    cout << "Masukkan jumlah elemen array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++){
        cout << "Masukkan elemen ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    
    for (int j = 0; j < n; j++){
            cout << arr[j] << " ";
        }

    cout << endl;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Bubble Sort" << endl;
        cout << "2. Selection Sort" << endl;
        cout << "3. Insertion Sort" << endl;
        cout << "4. Exit" << endl;
        cout << "Pilihan: ";
        cin >> pilih;

        switch (pilih)
        {
            case 1:
                bubbleSort(arr, n);
                break;
            case 2:
                selectionSOrt(arr, n);
                break;
            case 3:
                insertionSort(arr, n);
                break;
            case 4:
                cout << "Exit" << endl;
                break;
            default:
                cout << "Pilihan tidak valid" << endl;
                break;
        }
    } while (pilih != 4);
    
    return 0;
}

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n; i++){
        cout << endl << "perulangan " << i + 1 << endl;
        for (int j = 0; j < n-1; j++){
            if(arr[j + 1] < arr[j]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j + 1] = temp;
                
                for (int j = 0; j < n; j++){
                    cout << arr[j] << " ";
                }
                cout << endl;
            }
        }        
    }
}

void selectionSOrt(int arr[], int n){
    int temp;
    int select;
    for (int i = 0; i < n; i++){
        cout << endl << "perulangan " << i + 1 << endl;
        temp = arr[i];
        select = i;

        for (int j = i; j <n; j++){
           if (temp > arr[j] ){
            temp = arr[j];
            select = j;
           }
        }

        if(select != i){
            
            arr[select] = arr[i];
            arr[i] = temp;
        }

        for (int j = 0; j < n; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
        
        
    }
}

void insertionSort(int arr[], int n) {
    int j, key;

    for (int i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;

        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
}

