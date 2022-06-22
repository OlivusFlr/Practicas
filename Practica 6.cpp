#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "");
	float H;
	float M;
	float S;
	cout << "Ingrese la hora que desee convertir a segundos, usando el formato HH:MM:SS. \n";
	cout << "Horas:";
	cin >> H;
	if (H>=0 && H<24){	
		cout << "Minutos:";
		cin >> M; 
		if (M>=0 && M<60){
			cout << "Segundos:";
			cin >> S;
			if (S>=0 && S<60){
				cout << "Hora ingresada: "<<H<<":"<<M<<":"<<S<<"\n";
				S=(H*3600)+(M*60)+S;
				cout << "Equivale a: "<<S<<" segundos \n"; }
			else{
				cout << "Ingrese valores entre 0 y 60 para los segundos \n"; } 
		}
		else{
			cout << "Ingrese valores entre 0 y 60 para los minutos \n"; }
	}
	else{
		cout << "Ingrese valores entre 0 y 24 para las horas \n"; }
	system ("PAUSE");
	return 0;
}

