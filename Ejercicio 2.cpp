#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;
int main(){
setlocale (LC_ALL, "spanish");
	string M;
	float B, T, P;
	cout<<"Ingrese su matricula \n";
	cin>>M;
	cout<<"Ingrese el pago de la beca \n";
	cin>>B;
	while(B<0){
		cout<<"Ingresó un valor menor a 0, porfavor ingrese valores positivos \n";
		cin>>B;
	}
	T=(24*B);
	P=(T/12);
	cout<<"Matrícula: "<<M<<"\n";
	cout<<"Ingresos anuales: "<<T<<"\n";
	cout<<"Ingresos mensuales: "<<P<<"\n";
system ("PAUSE");
return 0;
}
