#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	int N, X, T, I;
	I=1;
	T=0;
	cout<<"\t"<<"Escala de fibonachi V 1.1 \n";
	cout<<"Ingrese cuantos numeros de la escala desea mostrar \n";
	cin>>X;
	while(X<=0){
		cout<<"Ingresó valores menores o iguales a 0 porfavor ingrese valores positivos \n";
		cin>>X;
	}
	for(N=1; N<=X; N++){
		cout<<"\t"<<T<<"\n";
		I=I+T;
		T=I-T;		
	}
system ("PAUSE");
return 0;
}
