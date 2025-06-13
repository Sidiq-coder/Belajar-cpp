#include <iostream>
using namespace std;

int main(){
   string a;
   cin >> a;
   if(a.length() == 1){
       cout << "satuan";
   } else if(a.length() == 2){
       cout << "puluhan";
   }else if(a.length() == 3){
       cout << "ratusan";
   }else if(a.length() == 4){
       cout << "ribuan";
   }else if(a.length() == 5){
       cout << "puluhribuan";
   }
     
    return 0;
}
