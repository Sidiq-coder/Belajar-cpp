#include <iostream> 
using namespace std; 
int main() { 
int input = 0;

cout << "Masukkan satu bilangan bulat: " <<endl; 
cin >> input;

if ( (input % 2) == 0)
cout<< input << " adalah bilangan genap." <<endl; 
else
cout<< input << " adalah bilangan ganjil." <<endl; 
return 0;
}
