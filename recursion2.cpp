#include <iostream>
using namespace std;

double buscarValor(double a[], int , double , int);

int main() {
	
    int tamanio;
    cout << "Indique la cantidad de elementos: ";
    cin >> tamanio;
    
    double arreglo[tamanio], x;
    
    for(int i=0; i<tamanio; i++){
    	cout << i+1 << ". elementos: ";
    	cin >> arreglo[i];
	}

    cout << "Ingresa el valor que deseas buscar: ";
    cin >> x;

    double resultado = buscarValor(arreglo, tamanio, x, 0);

    if (resultado != -1) {
        cout << "Valor encontrado en la posicion: " << resultado+1 << endl;
    } else {
        cout << "Valor no encontrado en el arreglo." << endl;
    }

    return 0;
}

double buscarValor(double a[], int n, double x, int indice) {

    if (indice == n) {
        return -1;
    }

    if (a[indice] == x) {
        return indice;
    }

    return buscarValor(a, n, x, indice+1);
}
