#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	float C;
	do{
	cout << "Ingrese una calificación \n";
	cin >> C;
	if(C<0 or C>100){cout<<"Ingrese valores mayores a 0 y menores o iguales a 100 \n";}
	}
	while (C<0 or C>100);
	if(C>=90 && C<=100){cout<<"La calificación equivale a una A \n";}
	else{
		if(C>=75 && C<=89){cout<<"La calificación equivale a una B \n";}
		else{
			if(C>=60 && C<=74){cout<<"La calificación equivale a una C \n";}
			else{
				if(C>=50 && C<=59){cout<<"La calificación equivale a una D \n";}
				else{cout<<"La calificación equivale a una E \n";}
			}
		}
	}
	system ("PAUSE");
	return 0;
}

