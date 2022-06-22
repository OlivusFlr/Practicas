#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "");
	float V;
	float M;
	float Ft;
	cout << "Ingrese la velocidad en km/h que desea convertir \n";
	cin >> V;
	if (V >= 0)
	{
		M = V/3.6;
		Ft = (V*3281)/3600;
		cout << "Velocidad ingresada: " << V << " km/h \n" << "Equivale a: \n" << M << " m/s \n" << Ft << " ft/s \n";
	}
	else
	{
		cout << "Reinicie el programa e ingrese valores positivos \n";
	}
	system ("PAUSE");
	return 0;
}

