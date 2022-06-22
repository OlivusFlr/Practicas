#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	float X;
	float R;
	float P;
	float A;
	string C;	
	cout<< "Área de un círculo \n";
	cout << "Ingrese" <<"\n"<<"1: para usar el radio del círculo \n"<<"2: para usar el perímetro del círculo \n";
	cin >> X;
	if(X==1){
	cout<<"Ingrese el radio del círculo \n";
	do{
	cin >> R;
	if (R<0){cout<<"Ingrese valores positivos \n";}
	}
	while (R<0);
	A = (M_PI *pow(R,2));
	}
	else{
		if(X==2){
		cout<<"Ingrese el perímetro del círculo \n";
		do{		
		cin >> P;
		if (P<0){cout<<"Ingrese valores positivos \n";}
		}
		while (P<0);
		A = (M_PI*pow(P,2))/4;
		}
		else{
			cout<<"Reinicie el programa y escriba valores validos \n";
		}
	}
	if(A>50){C="Mayor";}
	else{
		if(A<=50 && A>=30){C="Mediano";}
		else{C="Menor";}
	}
	cout<< "El área del círculo es: "<<A<<"U^2 \n"<<"Su clasificación es: "<<C<<"\n";
	system ("PAUSE");
	return 0;
}


