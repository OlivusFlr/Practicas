#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	float N1, N2, N3;
	string O;
	cout<<"Ingrese 3 valores distintos para ordenarlos \n";
	cin>>N1>>N2>>N3;
	while(N1==N2||N1==N3||N2==N3){
		cout<<"Ingresó valores iguales, porfavor ingrese valores distintos \n";
		cin>>N1>>N2>>N3;
	}
	cout<<"Ingrese: \n"<<"(a) Si desea ordenar los numeros de forma ascendente \n"<<"(d) Si desea ordenar los numeros de forma descendente \n";
	cin>>O;
	if(O=="a"){
		if(N1>N2){
			if(N2>N3){cout<<"1.- "<<N3<<"\n2.- "<<N2<<"\n3.- "<<N1<<"\n";}
			else if(N3>N2){
				if(N1>N3){cout<<"1.- "<<N2<<"\n2.- "<<N3<<"\n3.- "<<N1<<"\n";}
				else if(N3>N1){cout<<"1.- "<<N2<<"\n2.- "<<N1<<"\n3.- "<<N3<<"\n";}
			}
		}
		else if (N2>N1){
			if(N1>N3){cout<<"1.- "<<N3<<"\n2.- "<<N1<<"\n3.- "<<N2<<"\n";}
			else if(N3>N1){
				if(N2>N3){cout<<"1.- "<<N1<<"\n2.- "<<N3<<"\n3.- "<<N2<<"\n";}
				else if(N3>N2){cout<<"1.- "<<N1<<"\n2.- "<<N2<<"\n3.- "<<N3<<"\n";}
			}
		}
	}
	else if(O=="d"){
		if(N1>N2){
			if(N2>N3){cout<<"1.- "<<N1<<"\n2.- "<<N2<<"\n3.- "<<N3<<"\n";}
			else if(N3>N2){
				if(N1>N3){cout<<"1.- "<<N1<<"\n2.- "<<N3<<"\n3.- "<<N2<<"\n";}
				else if(N3>N1){cout<<"1.- "<<N3<<"\n2.- "<<N1<<"\n3.- "<<N2<<"\n";}
			}
		}
		else if (N2>N1){
			if(N1>N3){cout<<"1.- "<<N2<<"\n2.- "<<N1<<"\n3.- "<<N3<<"\n";}
			else if(N3>N1){
				if(N2>N3){cout<<"1.- "<<N2<<"\n2.- "<<N3<<"\n3.- "<<N1<<"\n";}
				else if(N3>N2){cout<<"1.- "<<N3<<"\n2.- "<<N2<<"\n3.- "<<N1<<"\n";}
			}
		}
	}
	else{
		cout<<"Reinicie el programa e ingrese como desee ordenar los datos ingresados \n";
	}
	system ("PAUSE");
	return 0;
}

