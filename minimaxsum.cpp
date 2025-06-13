#include <iostream>

using namespace std;

int main(){
	
	int n;
	int sum1;
	int sum2 = 0;
	int sum3 = 0;
	
	cout << "Masukan jumlah data yang akan diinputkan : ";
	cin >> n;
	
	int arr[n];
	for (int i = 0; i < n; i++){
		cout << "Masukan data ke -" << i+1 << " : ";
		cin >> arr[i];
	}
	
	for(int i = 0; i < n; i++){
		sum1 = 0;
		
		for(int j = 0; j <= n; j++){
			sum1 += arr[j];	
		}
		
		sum1 -= arr[i];
		for(int k = i; k < 1; k++){
			sum3 += sum1;
			sum2 += sum1;
		}
		
		if(sum1 >= sum3 && sum1 >= sum2){
			sum3 *= 0;
			sum3 += sum1;
		} else if(sum1 < sum2){
			sum2 *= 0;
			sum2 += sum1;
		} else{
			sum3 += 0;
			sum2 += 0;
		}
	}
	
	cout << sum3 << endl << sum2;


	return 0;
}

