#include <iostream>
using namespace std;

int main(){
	
	int num = 0;
	
	cout << "Digite um numero para saber se e multiplo de 5: ";
	cin >> num;
	
	if (num % 5 == 0){
		cout << "O numero digitado e multiplo de 5!";
	}else{
		cout << "O numero digitado nao e multiplo de 5!";
	}
	
	return 0;
}