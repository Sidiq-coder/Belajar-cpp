#include <iostream>
using namespace std;

int main(){


    int arr[5] = {4, 2, 1, 6, 5};
    int n = 0;
    cout << &arr[1] << endl;
    int length = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;

    for (int j = 0; j < length; j++){
        for (int i = 0; i < length - 1; i++){
            if (arr[i] > arr[i+1]){
                n += arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = n;
            }
            n = 0;
            for (int i = 0; i < length; i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
        }
    }
   cout << &arr[1] << endl;
    for (int i = 0; i < length; i++){
        cout << arr[i] << endl;
    }

    return 0;
}