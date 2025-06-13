#include <iostream>
using namespace std;

int main(){
	
	int n;
	int bignumber = 0;
	int sum = 0;
	cin >> n;
	
	int arr[n];
	for(int i = 0; i < n; i++){
		cout << " masukan angka ke " << i << ":  ";
		cin >> arr[i];
	
	}
	for(int i = 0; i < n; i++){
	
		if(arr[i] >= bignumber){
			if(arr[i] > bignumber){
				bignumber *= 0;
				sum *= 0;
				bignumber += arr[i];
				sum++;
			} else if(arr[i] == bignumber){
				sum++;
			}
		}
}
		cout << sum;
		
	return 0;
}
