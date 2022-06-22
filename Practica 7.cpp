#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "");
	float T;
	float Ui;
	float Uf;
	cout << "Ingrese la temperatura que desea convertir: \n";
	cin >> T;
	cout << "Ingrese: \n" << "1 si la temperatura inicial está en °C \n" << "2 si la temperatura inicial está en °F \n";
	cin >> Ui;
	cout << "Ingrese: \n" << "1 si desea convertir a °C \n" << "2 si desea convertir a °F \n";
	cin >>Uf;
	if (Ui==1) {
		if (Uf==1) {
			cout << "Convirtio: "<< T <<"°C \n"<< "a: " << T<<"°C \n"; }
		else {
			if (Uf==2) {
				cout << "Convirtio: "<< T <<"°C \n";
				T= ((T*9)/5)+32;
				cout << "a: " << T <<"°F \n"; }
			else {
				cout <<	"Ingrese valores validos \n"; }
		}
	}
	else {
		if (Ui==2) {
			if (Uf==1) {
				cout << "Convirtio: "<< T <<"°F \n";
				T = ((T-32)*5)/9;
				cout << "a: " << T <<"°C \n"; }
			else {
				if (Uf==2) {
					cout << "Convirtio: "<< T <<"°F \n"<< "a: " << T <<"°F \n"; }
				else {
					cout <<	"Ingrese valores validos \n"; }	
			}
		}
		else {
			cout << "Ingrese valores validos \n"; }
	}
	system ("PAUSE");
	return 0;
}

