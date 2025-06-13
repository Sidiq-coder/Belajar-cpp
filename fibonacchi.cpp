#include <iostream>


long long fibo(int x){

	long long x1 = 1;
	long long x2 = 1;
	
	
	if (x == 1 || x == 2){
    	return 1;
    } else {
    	for (int i = 1; i <= x - 2; i++){
        	if( i % 2 != 0){
            	x1 += x2;
            } else{
            	x2 += x1;
			}
        }
    	if(x1 > x2){
    		return x1;
		} else {
			return x2;
		}
    }

}


using namespace std;
int main(){
	
	int x ;
	char ulang;
	
	
	do{
	cout << "masukan index fibonacchi : "; 
	cin >> x;
	
	for(int i = 1; i <= x; i++){
		cout << fibo(i) << " ";
	}
	
	cout << endl << "ulang ? (y/n) :  ";
	cin >> ulang;
	} while(ulang == 'y' || ulang == 'Y');
	



return 0;
}
