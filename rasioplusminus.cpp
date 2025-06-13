#include <iostream>
using namespace std;

int main(){
	
	int n;
	double plus = 0;
	double minus = 0;
	double nol = 0;
	
	double positif, negatif, enol;
	
	cout << "Masukan jumlah data yang akan dimasukan : ";
	cin >> n;
	
	int arr[n];
	
	for(int i = 0; i < n; i++){
		cout << "masukan data ke " << i << ": " ;
		cin >> arr[i];
		
		if(arr[i] > 0){
			plus ++;
		} else if(arr[i] < 0){
			minus++;
		} else if(arr[i] == 0){
			nol++;
		}
		
	}
	positif = plus/n;
	negatif = minus/n;
	enol = nol/n;
	cout << positif << " " << negatif << " " << enol;
	
	
	return 0;
}
