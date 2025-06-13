#include <iostream>
#include <string>

using namespace std;

string solution(int number){
	
	
/*	do{
		if (number >= 1000){
			roman += "M";
			number -= 1000;
		} else if (number >= 900 && number < 1000){
			roman += "CM";
			number -= 900;
		} else if (number >= 500 && number < 900){
			roman += "D";
			number -= 500;
		}  else if (number >= 400 && number < 500){
			roman += "CD";
			number -= 400;
		}  else if (number >= 100 && number < 400){
			roman += "C";
			number -= 100;
		}  else if (number >= 90 && number < 100){
			roman += "XC";
			number -= 90;
		}  else if (number >= 50 && number < 90){
			roman += "L";
			number -= 50;
		} else if (number >= 40 && number < 50){
			roman += "XL";
			number -= 40;
		} else if (number >= 10 && number < 40){
			roman += "X";
			number -= 10;
		} else if (number == 9){
			roman += "IX";
			number -= 9;
		} else if(number >= 5 && number < 9){
			roman += "V";
			number -= 5;
		} else if(number == 4){
			roman += "IV";
			number -= 4;
		} else if (number >= 1 && number < 3){
			roman += "I";
			number -= 1;
		}
	} while (number > 0);
	
	
	return roman; */
	int angka[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string romawi[13] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	string roman = "";
	
	do{
		for (int i = 0; i < 13; i++){
			if (number >= 1000){
				roman += romawi[0];
				number -= angka[0];
			} else if (number >= angka[i] && number < angka[i-1]){
				roman += romawi[i];
				number -= angka[i];
			}
		}
	} while (number > 0);
	
	
	return roman;
}

int main(){
	
	cout << solution(4);
	
	return 0;
}
