#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "spanish");
	float C1, C2, C3, C4, P;
	cout << "Ingrese 4 calificaciones \n";
	cin>>C1;
	while(C1<0 or C1>10){
		cout<<C1<<" no es una calificación valida, ingrese valores entre 0 y 10 \n";
		cin>>C1;}
	if(C1>=6){cout<<"Aprobatoria \n";}
	else{cout<<"Reprobatoria \n";}
	cin>>C2;
	while(C2<0 or C2>10){
		cout<<C2<<" no es una calificación valida, ingrese valores entre 0 y 10 \n";
		cin>>C2;}
	if(C2>=6){cout<<"Aprobatoria \n";}
	else{cout<<"Reprobatoria \n";}
	cin>>C3;
	while(C3<0 or C3>10){
		cout<<C3<<" no es una calificación valida, ingrese valores entre 0 y 10 \n";
		cin>>C3;}
	if(C3>=6){cout<<"Aprobatoria \n";}
	else{cout<<"Reprobatoria \n";}
	cin>>C4;
	while(C4<0 or C4>10){
		cout<<C4<<" no es una calificación valida, ingrese valores entre 0 y 10 \n";
		cin>>C4;}
	if(C4>=6){cout<<"Aprobatoria \n";}
	else{cout<<"Reprobatoria \n";}
	P=(C1+C2+C3+C4)/4;
	if(C4>=6){cout<<"El promedio es de: "<<P<<" aprobatorio \n";}
	else{cout<<"El promedio es de: "<<P<<" reprobatorio \n";}
	system ("PAUSE");
	return 0;
}

