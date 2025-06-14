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

  for (i = 0; i < n - 1; i++){
    for (j = i + 1; j < n; j++){
      if (arr[i] < arr[j]){
        tukar(&arr[i], &arr[j]);
      }
      for (int k = 0; k < n; k++){
        cout << arr[k] << " ";
     }
     cout << endl;
    }
  }
  for (int k = 0; k < n; k++){
    cout << arr[k] << " ";
  }

  return 0;
}

void tukar(int *a, int *b){
  int t = *a;
  *a = *b;
  *b = t;
}
