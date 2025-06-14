#include <iostream>
using namespace std;

int main(){
    
    int arr[18] = {5, 3, 7, 9, 1, 17, 8, 8, 2, 13, 4, 18, 7, 14, 65, 32, 22, 11};
    int length = sizeof(arr) / sizeof(arr[0]);
    int n, k;

    for (int i = length / 2; i > 0; i /= 2) {
        for (int j = i; j < length; j++) {
            n = arr[j];
            k = 0;

            for (k = j; k >= i && arr[k - i] > n; k -= i) {
                arr[k] = arr[k - i];
            }

            arr[k] = n;
        }
        for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
        } 
        cout << endl;
    }

    
   cout << sizeof(arr);
    return 0;
}