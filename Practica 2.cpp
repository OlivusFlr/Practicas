#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "");
	float X;
	float Y;
	float Area;
	cout << "Ingrese la base del rectángulo:\n" ;
	cin >> X;
	cout << "Ingrese la altura del rectángulo:\n";
	cin >> Y;
	if (X==Y) 
	{
	cout << ("Ingresó dos numeros iguales, porfavor ingrese valores distintos \n");
	}
	else
	{
	Area = X*Y;
	cout << ("El área del rectángulo es: ") << Area << "\n";
	}
	system ("PAUSE");
	return 0;
}
