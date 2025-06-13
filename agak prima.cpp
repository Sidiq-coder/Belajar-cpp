//#include <iostream>
//using namespace std;
//
//int main(){
//    
//    int x, y, z;
//    cin >> x;
//    
//    for (int i = 0; i < x; i++){
//        z = 0;
//        cin >> y;
//        if(y <= 2){
//            cout << "YA";
//        } else if(y > 2 && y < 20){
//           
//                for(int i = 1; i <= y; i++){
//                    if(y % i == 0){
//                        z++;
//                    }
//                }
//                if(z <= 4){
//                    cout << "YA";
//                } else {
//                    cout << "BUKAN";
//                }
//            
//        } else if(y > 20){
//        	 for(int i = 1; i <= 20; i++){
//                    if(y % i == 0){
//                        z++;
//                    }
//                }
//                if(z < 4){
//                    cout << "YA";
//                } else {
//                    cout << "BUKAN";
//                }
//		}
//        
//    }
//    return 0;
//}

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, x, y;
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> x;
        y = 0;
        for(int j = 2; j <= sqrt(x); j++){
            if (x % j == 0) {
                y++;
            }
        } if(y > 1){
            cout <<" BUKAN" << endl;
        } else {
            cout <<"YA" << endl;
       }   
    }
    return 0;
}
