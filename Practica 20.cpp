#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	int N, X, T;
	T=0;
	cout<<"\t"<<"Contador v.1.0. \n";
	cout<<"Ingrese el numero de iteraciones a realizar, con un maximo de 10 \n";	
	cin>>X;
	while(X<0 || X>10){
		cout<<"Solo se aceptan valores entre 0 y 10 para el numero de iteraciones, ingrese un valor distinto \n";
		cin>>X;
	}
	for(N=0; N<=X; N=N+1){
		cout<<"Iteración "<<N<<": \n"<<"\t"<<T<<" + "<<N;
		T=T+N;
		cout<<" = "<<T<<"\n";
	}
	cout<<"Su total es de: "<<T<<"\n";
system ("PAUSE");
return 0;
}


