#include <iostream>
using namespace std;

int main(){

    int arr[12] = {5, 3, 7, 9, 1, 17, 8, 8, 2, 13, 4, 18};
    int n = 0;
    int min, index;
    int length = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < length; i++){
        min = arr[i];
        index = i;
        for (int j = i; j < length; j++){
            if (min > arr[j]){
                min = arr[j];
                index = j;
            }   
        }
        
        if (index != i){
            arr[index] = arr[i];
            arr[i] = min; 
        }
        for (int i = 0; i < length; i++){
        cout << arr[i] << " ";
        } 
        cout << endl;
    }

    return 0;
}