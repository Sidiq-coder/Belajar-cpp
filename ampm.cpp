#include <iostream>
#include <string>

using namespace std;

int main() {

	string waktu;
	int jam;
	int menit;
	int detik;
	string ampm;
	
	cin >> jam;
	cin >> menit;
	cin >> detik;
	cin >> ampm;
	
	if(ampm == "PM" ){
		jam += 12;
	}
	
	cout << jam << " : " << menit << " : " << detik << ampm;
	
    return 0;
}

