#include <iostream>
using namespace std;

int main(){
	int tinggi,berat;
	cout << "~~~ PROGRAM TES BADAN ~~~" << endl;
	cout << "Input Berapa Tinggi badan Kamu = "; cin >> tinggi;
	cout << "Input Berapa Berat badan kamu = "; cin >> berat;
		if (berat<tinggi/2.5){
			cout << "Underweight";
		}else if(tinggi/2.5 <= berat && berat <= tinggi/2.3){
			cout << "Normal";
		}else if(tinggi/2.3 < berat){
			cout << "Overweight";
		}
}
