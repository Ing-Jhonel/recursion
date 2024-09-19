#include <iostream>
using namespace std;

double buscarValor(double a[], int , double , int);

int main() {
	
    int cant, indice=0;
    cout << "Indique la cantidad de elementos: ";
    cin >> cant;
    
    double arreglo[cant], x;
    
    for(int i=0; i<cant; i++){
    	cout << i+1 << ". elementos: ";
    	cin >> arreglo[i];
	}

    cout << "Ingresa el valor que deseas buscar: ";
    cin >> x;

    double p = buscarValor(arreglo, cant, x, indice);

    if (p != -1) {
        cout << "Valor encontrado en la posicion: " << p+1 << endl;
    } else {
        cout << "Valor no encontrado en el arreglo." << endl;
    }

    return 0;
}

double buscarValor(double a[], int n, double x, int ind) {

    if (ind == n) {
        return -1;
    }

    if (a[ind] == x) {
        return ind;
    }

    return buscarValor(a, n, x, ind+1);
}
