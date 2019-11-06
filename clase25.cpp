#include<iostream>

using namespace std;

void relleno(int l,float **m);
void imprimecabezas(int l,float **m);
void imprime(int l,float **m);

int main() {
	int numero=0;
	cout << "Escriba un numero del 3 al 11" << endl;
	cin >> numero;
	if (numero >= 3 && numero <= 11) {
		float ** matriz = new float *[numero];
		for (int i = 0; i < numero; ++i){
			matriz[i] =	new float[numero+2];
		}
		relleno(numero, matriz);
		//imprime(numero, matriz);
		imprimecabezas(numero,matriz);
	} else {
		cout<<"El numero no esta en el rango valido"<<endl;
	}
	return 0;
}

void relleno(int l, float **m){
	for (int j = 0; j < l+2; j++) {
		for (int i = 0; i < l; i++) {
			m[i][j] = i + j;
		}
	}
}

void imprimecabezas(int l, float **m){
	float sum = 0;
	for (int i = 0; i < l; i++) {
		cout<<m[i][0]<<" ";
	}
	for (int i = 0; i < l+2; i++) {
		sum+=m[0][i];
	}
	cout << endl;
	cout << sum << endl;;
}


void imprime(int l, float **m){
	for (int j=0; j < l+2 ; j++) {
		for (int i=0; i < l; i++) {
			cout << " " << m[i][j] << " ";
		}
		cout << endl;
	}
}