#include <iostream>
using namespace std;
int f(){
	
}
int main(){
	
	int n;
	cin >> n;
	
	int sum1 = 0;
	int sum2 = 0;
	int sum3 = 0;
	
	int arr[n][n];
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> arr[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}	
	
	
	for(int i = 0; i < n; i++){
		sum1 += arr[i][i];
		sum2 += arr[n-(1+i)][i];
	}
	
	sum3 = sum1 - sum2;
	if(sum3 < 0){
		sum3 *= -1;
	}
	
	cout << sum3;
	
	
	return 0; 
}
