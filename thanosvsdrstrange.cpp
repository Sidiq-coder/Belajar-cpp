#include <iostream>
using namespace std;

int main(){
	
	long long manusia = 1;
	
	for(int i = 1; i <= 50; i++){
		if(i > 1 && i % 3 != 0){
			manusia *= 3;
		} else if(i % 3 == 0){
			manusia / 2;
		}
	}
	
	cout << manusia;
	return 0;
}
