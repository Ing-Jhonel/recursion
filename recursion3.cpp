#include <iostream>
using namespace std;

double maxValor(double a[], int, double);

int main(){
	
	int cant;
	cout << "Indique la cantidad de elementos a ingresar: ";
	cin >> cant;

	double arreglo[cant];
	
	for(int i=0; i<cant; i++){
		cout << i+1 << ". elemento: ";
		cin >> arreglo[i];
	}
	
	double mayor = arreglo[0];
	double r = maxValor(arreglo, cant-1, mayor);
	
	cout << "El maximo elemento ingresado es: " << r << endl;
	
	return 0;
}

double maxValor(double a[], int n, double x){
	
	if(n==0){
		return x;
	}
	
	if(a[n]>x){
		return maxValor(a, n-1, a[n]);
	}
	
	return maxValor(a, n-1, x);
	
}
