#include <iostream>
#include <cmath>
#include <locale.h>
using namespace std;
int main(){
	setlocale (LC_ALL, "");
	long long N;
	long long T=1; 
	long long I;
	cout << "Ingrese un numero para elevarlo de forma factorial: ";
	scanf ("%lld",&N);
	for (I=1; I<=N; I++)
	{
		T*=I;	
	}
	cout << N << " Factorial es = "<< T << "\n";
	system ("PAUSE");
	return 0;
}

