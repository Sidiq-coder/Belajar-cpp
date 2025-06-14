#include <iostream>
using namespace std;

int main(){
    
    int arr[12] = {5, 3, 9, 7, 1, 17, 8, 8, 2, 13, 4, 18};
    int j, n;
    int length = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < length; i++){
        n = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > n){
            arr[j + 1] = arr[j];
            j--;
        }
        
        arr[j + 1] = n;

        for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
        } 
        cout << endl;
    }
   
    return 0;
}