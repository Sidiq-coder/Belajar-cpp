#include <iostream>
using namespace std;

int main(){

    int arr[6] = {84, 69, 66, 86, 94, 91};
    int n = 0;
    int min, index;
    int length = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < length; i++){
        for (int j = i; j < length; j++){
            min = arr[i];
            index = i;
            if (min > arr[j]){
                min = arr[j];
                index = j;
            }
            
            arr[index] = arr[i];
            arr[i] = min; 
            
            for (int i = 0; i < length; i++){
                cout << arr[i] << " ";
            }
            cout << endl; 
        }
        
             
    }

    return 0;
}