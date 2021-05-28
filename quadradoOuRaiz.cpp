/* Escreva um programa em C++ que leia um número e imprima a raiz quadrada do número caso 
ele seja positivo ou igual a zero e o quadrado do número caso ele seja negativo. */

#include <iostream>
using namespace std;
#include <math.h>

/*
raiz quadrada de um numero
*/

int main(){
	
	float num, raiz;
	
	cout <<"Digite um numero: ";
	cin >> num;
	
	raiz = sqrt(num);
	
	if(num >= 0){
		printf("A raiz quadrada de %.2f e: %.2f\n", num, raiz);
	}
	
	else{
		cout << num * num;
		
	}
	cout <<"\n";
	system("pause");
	
	return 0;    
}