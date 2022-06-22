#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "");
	long long X;
	long long Y;
	long long N;
	cout << "Ingrese" << "\n" << "1: si desea calcular una potencia" << "\n" << "2: si desea calcular una raiz" << "\n";
	float Z;
	cin >> Z;
	if (Z==1){
		cout << "Ingrese un numero \n";
		scanf ("%lld",&X);
		cout << "Ingrese un exponente \n";
		cin >> Y;
		N = pow(X,Y);
		cout << "El resultado de elevar " << X << " al " << Y << " es: " << N << "\n";
	}
	else{
		if (Z==2){
			cout << "Ingrese un numero \n";
			cin >> X;
			cout << "Ingrese el exponente de la raíz \n";
			cin >> Y;
			N = pow(X,(1/Y));
			cout << "La raiz " << Y << " de " << X << " es: " << N << "\n";
		}
		else{
			cout << "Reinicie el programa e ingrese valores validos \n";
		}
	}
	system ("PAUSE");
	return 0;
}

