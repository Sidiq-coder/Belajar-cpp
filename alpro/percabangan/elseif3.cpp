#include <iostream> 
using namespace std;
int main() { 
int umur;
char terdaftar;
cout << "Masukkan umur Anda" << endl;
cin >> umur;
cout << "Apakah Anda sudah mendaftar (Y/T) ?" << endl; 
cin >> terdaftar;

if (umur > 17 && terdaftar == 'Y') {
cout << "Anda boleh ikut memilih dalam pemilu" << endl;
} else if (umur > 17 ) {
cout << "Anda belum terdaftar";
} else {
cout << "Anda belum cukup umur untuk ikut pemilu" << endl;
}
return 0;
}
