#include <iostream>
using namespace std;

int espejo(int, int);

int main(){
	
	int numero;
	cout << "Ingrese un numero: ";
	cin >> numero;
	int r=espejo(numero, invertido);
	cout << "Su imagen especular es: " << r << endl;
	return 0;
}

int espejo(int num, int inv){
	
	if(num==0){
		return inv;
	}
	
	inv = inv*10 + num%10;
	
	return espejo(num/10, inv);
}
