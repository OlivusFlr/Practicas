#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	float N1;
	float N2;
	cout << "Ingrese dos numeros distintos \n";	
	do{
		cin >> N1 >> N2;
		if (N1==N2){
			cout <<"Ingresó dos numeros identicos, porfavor ingrese numeros distintos. \n";
			}
	}
	while (N1 == N2);
	if (N1>N2){
		cout << "El numero mas grande ingresado es: " << N1 << "\n";
		}
	else{
		cout << "El numero mas grande ingresado es: " << N2 << "\n";
		}
	system ("PAUSE");
	return 0;
}

