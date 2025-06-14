#include <iostream> 
#include <stdlib.h>
using namespace std; 
 
int main(){

    int n = 100; 
    int data[n]; 
    int cari, pilih, m, flag, l, r, s;
    char ulang; 
 
    for(int i=0; i < n; i++) { 
        data[i] = rand() % 100 + 1; 
        cout << data[i] << " "; 
    } 

    cout << endl;
    

    while ( ulang != 't'){
        flag = 0;
        l = 0;
        s = 0;
        r = n-1;
        cout << "Masukan nilai yang ingin dicari : ";
        cin >> cari; 

        cout << "Pilih Metode Pencarian\n" << "1. Sequential\n" << "2. Binary" << endl;
        cout << "Pilih : ";
        cin >> pilih;

        if(pilih == 1){
            for(int i=0; i < n; i++) { 
                if(data[i] == cari) { 
                    flag = 1; 
                } 
            }
            if(flag == 1){
                cout << "Ketemu" << endl; 
            } else {
                cout << "tidak ketemu" << endl;
            } 
        
        } else if(pilih == 2){

            for (int j = 0; j < n; j++){
                for (int i = 0; i < n - 1; i++){
                    if (data[i] > data[i+1]){
                        s += data[i];
                        data[i] = data[i + 1];
                        data[i + 1] = s;
                    }
                    s = 0;
                }
            }

            for(int i=0; i < n; i++) { 
                cout << data[i] << " "; 
            } 
            
            cout << endl;

            while(l <= r && flag == 0) { 
                m = (l+r)/2; 
                if (data[m] == cari){
                    flag = 1;
                } else if (cari < data[m]) { 
                    r = m-1; 
                } else { 
                    l = m+1; 
                } 
            }
             if(flag == 1){
                cout << "Ketemu"<< endl; 
            } else {
                cout << "tidak ketemu" << endl;
            }
        } else {
        continue;
        }
        cout << "Cari Lagi ? (t untuk berhenti) : ";
        cin >> ulang;
    }
    
  
    return 0; 
}