#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "");
	float X;
	float Y;
	float Area;
	cout << "Ingrese la base del rect�ngulo:\n" ;
	cin >> X;
	cout << "Ingrese la altura del rect�ngulo:\n";
	cin >> Y;
	if (X==Y) 
	{
	cout << ("Ingres� dos numeros iguales, porfavor ingrese valores distintos \n");
	}
	else
	{
	Area = X*Y;
	cout << ("El �rea del rect�ngulo es: ") << Area << "\n";
	}
	system ("PAUSE");
	return 0;
}
