#include <iostream>
using namespace std;

void tukar(int *a, int *b);

int main(){

  int n, i, j;
  int arr[1005];

  cin >> n;
  for (i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << &arr[1] << endl;

  for (i = 0; i < n-1; i++){
    for (j = 0; j < n-i-1; j++){
      if (arr[j] > arr[j+1]){
        tukar(&arr[j], &arr[j + 1]);
      }
      for (int k = 0; k < n; k++){
        cout << arr[k] << " ";
      }
      cout << endl;
    }
  }

  for (i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
 
  cout << &arr[1];
  return 0;
}

void tukar(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}