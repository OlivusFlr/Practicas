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
	cout<< "�rea de un c�rculo \n";
	cout << "Ingrese" <<"\n"<<"1: para usar el radio del c�rculo \n"<<"2: para usar el per�metro del c�rculo \n";
	cin >> X;
	if(X==1){
	cout<<"Ingrese el radio del c�rculo \n";
	do{
	cin >> R;
	if (R<0){cout<<"Ingrese valores positivos \n";}
	}
	while (R<0);
	A = (M_PI *pow(R,2));
	}
	else{
		if(X==2){
		cout<<"Ingrese el per�metro del c�rculo \n";
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
	cout<< "El �rea del c�rculo es: "<<A<<"U^2 \n"<<"Su clasificaci�n es: "<<C<<"\n";
	system ("PAUSE");
	return 0;
}


