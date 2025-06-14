#include<iostream>
using namespace std;

int main(){
	
	int bk ;
	
	cin >> bk;
	
	for(int i = 0; i < bk; i++){
		for(int j = 0; j < bk-i; j++){
			cout << " ";
		}
		for(int k = 0; k <= i; k++){
			cout << "* ";
		}
		cout << endl;
	}

	for(int i = 0; i < bk; i++){
		for(int j = 0; j <= i + 1; j++){
			cout << " ";
		}
		for(int k = 0; k < bk - (i + 1); k++){
			cout << "* ";
		}
		cout << endl;
	}
	
	return 0;
}
