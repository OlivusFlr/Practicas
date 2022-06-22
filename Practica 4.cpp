#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "");
	cout << "Calcular el volumen de un cilindro V.1.0 \n";
	float X;
	cout << "Ingrese"<<"\n"<<"1: para calcular a partir del radio de la base del cilindro"<<"\n"<<"2: para calcular a partir del perímetro de la base del cilindro \n";
	cin >> X;
	if (X==1){
		cout << "Ingrese el valor del radio de la base \n";
		float R;
		cin >> R;
		cout << "Ingrese la altura del cilindro \n";
		float H;
		cin >> H;
		if (R>0 && H>0){
			float A;
			A=(M_PI * pow(R,2));
			float V;
			V=(A*H);
			cout << "El area de la base del cilindro es: " << A << "\n";
			cout << "El volumen del cilindro es: " << V << "\n";	
		}
		else{
			cout << "Reinicie el programa e ingrese valores mayores a 0 \n";
		}
	}
	else{
		if (X==2){
			cout << "Ingrese el valor del perímetro de la base \n";
			float P;
			cin >> P;
			float H;
			cout << "Ingrese la altura del cilindro \n";
			cin >> H;
			if (P>0 && H>0){
				float A;
				A= pow(P,2)/(4*M_PI);
				float V;
				V=(A*H);
				cout << "El area de la base del cilindro es: " << A << "\n";
				cout << "El volumen del cilindro es: " << V << "\n";
			}
			else{
				cout << "Reinicie el programa e ingrese valores mayores a 0 \n";
			}
		}
		else{
			cout << "Reinicie el programa e ingrese valores válidos \n";
		}
	}
	system ("PAUSE");
	return 0;
}

