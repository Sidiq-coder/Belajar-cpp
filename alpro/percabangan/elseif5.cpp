#include <iostream>
using namespace std;

int main(){
	
	double nilai;
	
	cout << "Masukan Nilai : ";
	cin >> nilai;
	
	if(nilai >= 60 && nilai <= 100){
		cout << "Anda Lulus"<<endl;
	} else if(nilai < 60){
		cout << "Anda Tidak Lulus"<<endl;
	} else {
		cout << "Nilai Tidak Valid"<<endl;
	}
	
	
	
	return 0;
}
