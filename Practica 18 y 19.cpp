#include <iostream>
#include <windows.h>
using namespace std;
int main(){
	int H, M, S;
	H=0;
	M=0;
	S=0;
	cout<<"Ingrese la hora inicial \n";
	cin>>H;
	while(H<0 || H>=24){
		cout<<"HORA NO VALIDA, VUELVE A INGRESAR LOS DATOS \n";
		cin>>H;
	}
	cout<<"Ingrese los minutos iniciales \n";
	cin>>M;
	while(M<0 || M>=60){
		cout<<"HORA NO VALIDA, VUELVE A INGRESAR LOS DATOS \n";
		cin>>M;
	}
	cout<<"Ingrese los segundos iniciales \n";
	cin>>S;
	while(S<0 || S>=60){
		cout<<"HORA NO VALIDA, VUELVE A INGRESAR LOS DATOS \n";
		cin>>S;
	}
	while(1){
		while(H<24){
			while(M<60){
				while(S<60){
					cout<<H<<":"<<M<<":"<<S<<"\n";
					Sleep(1000);
					system("cls");
					S=S+1;
				}
				S=0;
				M=M+1;
			}
			M=0;
			H=H+1;
		}
		H=0;
	}
system ("PAUSE");
return 0;
}


