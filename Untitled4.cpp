#include <iostream>
using namespace std;
 int main(){
 	int x;
 	cout << "Inputkan Angka = "; cin >> x;
 	if (x>0){
 		cout << x << " adalah ini Bilangan Positif";	
	 }else if(x<0){
	 	cout << x << " adalah ini Bilangan Negatif";
	 }else if(x==0){
	 	cout << x << " adalah ini Bilangan Nol";
	 }
 }
