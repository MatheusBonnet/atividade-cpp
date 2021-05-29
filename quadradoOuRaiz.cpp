/* Escreva um programa em C++ que leia um número e imprima a raiz quadrada do número caso 
ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo. */

#include <iostream>
using namespace std;
#include <cmath>

/*
raiz quadrada de um numero
*/

int main(){
	
	float num, raiz;
	
	cout <<"Digite um numero: ";
	cin >> num;
	
	
	if(num >= 0){
		raiz = sqrt(num);
		cout << "Raiz: " << raiz;
	}
	
	else{
		int pot  = pow(num, 2.0);
		cout << "Pow: " << pot;
		
	}
	cout <<"\n";
	system("pause");
	
	return 0;    
}
