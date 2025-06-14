#include <iostream>
#include <string>
using namespace std;

void pyramid(int n){

  for(int i = 0; i < n; i++){
    if (n == 0){
      cout << "\n";
      }else if(n == 1){
    	cout << "/\\";
	} else{
		for(int k = n; k > i; k--){
    	cout << " ";
	}
	cout << "/";
    for(int j = 1; j <= i; j++){
      cout << "  ";
    }
    cout << "\\" << endl;
	}
	
    
  }
  cout << "/";
    for(int h = 0; h < n; h++){
      	cout << "__";
	  }
	  cout << "\\";

}

//string pyramid(int n){
////  Assert::That(pyramid(1), Equals("/\\\n"));
////        Assert::That(pyramid(2), Equals(" /\\\n/__\\\n"));
////        Assert::That(pyramid(4), Equals("   /\\\n  /  \\\n /    \\\n/______\\\n"));
//
//	string asset = " ";
//	string pir = " ";
//	
//	for (int i = 0; i < n; i++){
//		if(i = 0){
//			pir = "/\\\n";
//		}
//		
//		asset.append(pir);
//	}
//	
//	return asset;
//}

int main(){
  
  int n;
  cout << "input n : ";
  cin >> n;
  for(int i = 0; i < n; i++){
    if (n == 0){
      cout << "\n";
      }else if(n == 1){
    	cout << "/\\";
	} else{
		for(int k = n; k > i; k--){
    	cout << " ";
	}
	cout << "/";
    for(int j = 1; j <= i; j++){
      cout << "  ";
    }
    cout << "\\" << endl;
	}
	
    
  }
  cout << "/";
    for(int h = 0; h < n; h++){
      	cout << "__";
	  }
	  cout << "\\";
  
  return 0;
}
