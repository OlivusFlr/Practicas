#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
int main(){
setlocale (LC_ALL, "spanish");
	int N, X, V, P, I, D;
	P=0;
	I=0;
	cout<<"Cuantos números desea ingresar \n";
	cin>>N;
	for(V=1;V<=N;V++){
		cout<<"Ingrese un número \n";
		cin>>X;
		D=X%2;
		if(D==0){
			P=P+1;
			cout<<"\t"<<X<<" es un numero par \n";
		}
		else{
			I=I+1;
			cout<<"\t"<<X<<" es un numero impar \n";
		}
	}
	if(P==I){
		cout<<"Se ingresaron la misma cantidad de números pares e impares \n";
	}
	else if(P>I){
		cout<<"Se ingresaron "<<P<<" numeros pares \n";
	}
	else if(I>P){
		cout<<"Se ingresaron "<<I<<" numeros impares \n";
	}
system ("PAUSE");
return 0;
}
