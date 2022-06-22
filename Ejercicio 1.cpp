#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
int main(){
setlocale (LC_ALL, "spanish");
	int R, V, A;
	cout<<"\t"<<"Piramide de asteriscos \n";
	cout<<"Ingrese el numero de renglones que desea \n";
	cin>>R;
	while(R<0){
		cout<<"Ingresó valores negativos, porfavor ingrese valores positivos y enteros \n";
		cin>>R;
	}
	for(V=1;V<=R;V++){
		cout<<"\t";
		for(A=1;A<=V;A++){
			cout<<"*";
		}
		cout<<"\n";
	}
system ("PAUSE");
return 0;
}
