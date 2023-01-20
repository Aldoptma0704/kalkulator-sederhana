#include <iostream>
using namespace std;

int main(){
	
	float a,b,hasil;
	char aritmatika;
	
	cout << "Selamat datang di program kalkulator sederhana\n";
	
	//masukkan input angka dan aritmatika!!!!!
	cout << "Masukkan angka pertama\t\t: ";
	cin >> a;
	cout << "Masukkan aritmatika +,-,/,*\t: ";
	cin >> aritmatika;
	cout << "Masukkan angka kedua\t\t: ";
	cin >> b;
	
	switch (aritmatika){
		case '+':
			hasil = a + b;
			break;
		case '-':
			hasil = a - b;
			break;
		case '/':
			hasil = a / b;
			break;
		case '*':
			hasil = a * b;
			break;
		default:
			cout << "Operator/hasil tidak dapat ditemukan\n";
	}
	
	cout << "= " << hasil << endl;
	
	return 0;
}
