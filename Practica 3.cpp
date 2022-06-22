#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "");
	float X;
	float H;
	float A;
	float O;
	cout << "Ingrese" <<"\n"<<"1: para calcular la hipotenusa"<<"\n"<<"2: para calcular el cateto adyacente"<<"\n"<<"3: para calcular el cateto opuesto \n";
	cin >> X;
	if (X==1)
	{
		cout << ("Hipotenusa \n") ;
		cout << ("Ingrese el valor del cateto adyacente \n") ;
		cin >> A;
		cout << "Ingrese el valor del cateto opuesto \n";
		cin >> O;
		if (A>0 && O>0)
		{
			H=sqrt(pow(O,2)+pow(A,2));
			cout << ("El valor de la hipotenusa es: ") << H << "\n" ;
		}
		else
		{
			cout << "Ingrese valores mayores a 0 \n";
		}	
	}
    else
	{
		if (X==2)
		{
			cout << ("Cateto adyacente \n") ;
			cout << ("Ingrese el valor de la hipotenusa \n") ;
			cin >> H;
			cout << ("Ingrese el valor del cateto opuesto \n") ;
			cin >> O;
			if (H>0 && O>0)
			{
				if (H<O)
				{
					cout << ("El cateto no puede ser mayor que la hipotenusa, reinicie el programa y asigne otros valores \n");
				}
				else
				{
					A=sqrt(pow(H,2)-pow(O,2));
					cout << ("El valor del cateto adyacente es: ") << A << "\n" ;
				}
			}
			else
			{
				cout << "Ingrese valores mayores a 0 \n";
			}
		}
		else
		{
			if (X==3)
			{
				cout << ("Cateto opuesto \n") ;
				cout << ("Ingrese el valor de la hipotenusa \n") ;
				cin >> H;
				cout << ("Ingrese el valor del cateto adyacente \n") ;
				cin >> A;
				if (H>0 && A>0)
				{
					if (H<A)
					{
						cout << ("El cateto no puede ser mayor que la hipotenusa, reinicie el programa y asigne otros valores \n");
					}
					else
					{
						O=sqrt(pow(H,2)-pow(A,2));
						cout << ("El valor del cateto opuesto es: ") << O << "\n" ;
					}
				}
				else 
				{
				cout << "Ingrese valores mayores a 0 \n";
				}
			}
			else
			{
				cout << ("Reinicie el programa e ingrese valores válidos \n");
			}
		}
	}
	system ("PAUSE");
	return 0;
	}
