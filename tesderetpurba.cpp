#include <iostream>
using namespace std;

int main(){
	
	int arr[100];
	 
	 arr[0] = 3;
	 
	for(int i = 1 ; i < 100; i++){
		
		
		arr[i] = arr[i-1] + (i * 2);
	}
	
	cout << arr[99];
	
	return 0;
}
