#include <iostream>
using namespace std;

int main(){
	
	int num = 0;
	
	cout << "Entre com um numero para saber se e divisivel por 3 ou por 7:";
	cin >> num;
	
	if(num % 3 == 0){
		cout << "O numero 3 e divisivel por 3";
	}
	else if(num % 7 == 0){
		cout << "O numero divisel por 7";
	}
	else{
		cout << "Nenhum numero e divisivel por 3 nem por 7!"s;
	}
	
	return 0;
}