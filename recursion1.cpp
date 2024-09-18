#include <iostream>
using namespace std;

double potencia(double, int);

int main(){
	
	double x, r;
	int n;
	
	cout << "Indique la base(x): ";
	cin >> x;
	cout << "Indique el exponente(n): ";
	cin >> n;
	r=potencia(x, n);
	cout << x << " elevado a la " << n << " es " << r << endl;
	return 0;
}

double potencia(double a, int b){
	
	if(b==0){
		return 1;
	} else {
		return a*potencia(a, b-1);
	}
}
