#include <iostream>
#include <cmath>
using namespace std;

const long long a = 1103;
const long long c = 1234;
const long long m = pow(2, 31);

long long random(long long n, long long seed){
	
	if(n == 0){
		return seed;
	} else{
	
		return  (a*random(n-1, seed) + c) % m;
	}
	
	
}

int main(){
	
	
	cout << random(100, 1) << endl;
	
	int number = 5;
	for(int i = 0; i < 10; i++){
		number*=2;
	}
	cout << number;
	
	
	return 0;
}
