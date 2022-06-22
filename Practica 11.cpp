#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	float N1;
	float N2;
	float N3;
	do{
		cout << "Ingrese tres numeros \n";	
		cin >> N1 >> N2 >> N3;
	}
	while (N1 == N2 && N2 == N3);
	if (N1==N2){
		if (N1>N3){cout << "Ingrese valores distintos \n";}
		else{cout << "El numero mas grande ingresado es: " << N3 << "\n";}
	}
	else{
		if (N1==N3){
			if(N1>N2){cout << "Ingrese valores distintos \n";}
			else{cout << "El numero mas grande ingresado es: " << N2 << "\n";}
		}
		else{
			if(N2==N3){
				if(N2>N1){cout << "Ingrese valores distintos \n";}
				else{cout << "El numero mas grande ingresado es: " << N1 << "\n";}
			}
			else{
				if (N1>N2){
					if(N1>N3){cout << "El numero mas grande ingresado es: " << N1 << "\n";}
					else{cout << "El numero mas grande ingresado es: " << N3 << "\n";}
				}
				else{
					if (N2>N3){cout << "El numero mas grande ingresado es: " << N2 << "\n";}
					else{cout << "El numero mas grande ingresado es: " << N3 << "\n";}
				}
			}
		}	
	}
	system ("PAUSE");
	return 0;
}

