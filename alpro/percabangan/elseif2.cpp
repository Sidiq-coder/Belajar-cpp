#include <iostream>
using namespace std;
int main() {
int x;
cout << "Masukkan sebuah bilangan" << endl;
cin >> x;
if (x > 0) {
cout << "Anda memasukkan bilangan positif";
} else if (x < 0) {
cout << "Anda memasukkan bilangan negatif";
} else if (x == 0) {
cout << "Anda memasukkan bilangan bukan positif dan bukan negatif";
} else {
cout << "Anda memasukkan bilangan ???";
}
return 0;
}
