#include <iostream>
using namespace std;

int main(){
	int num1 = 0;
	int num2 = 0;
	
	cout << "Entre com o primeiro numero: ";
	cin >> num1;
	cout << "Entre com segundo numero: ";
	cin >> num2;
	
	if(num1 % num2 == 0)
	{
		cout << "Os numeros sao divisivel um pelo outro!";
	}else
	{
		cout << "Que pena, nao consigo fazer a divisao dos numeros, tente outra vez!!!";
	}
	
	return 0;
}