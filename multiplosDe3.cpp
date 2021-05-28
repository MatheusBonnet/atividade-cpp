
#include <iostream>
using namespace std;

int main(){
	
	int num = 0;
	
	cout << "Entre com um numero para saber se e multiplo de 3: ";
	cin >> num;
	
	if(num % 3 == 0 )
	{
		cout << "O numero digitado e multiplo de 3!";
	}else
	{
		cout << "O numero digitado nao e multiplo de 3!";
	}
	
	system("pause");
	
	return 0;
}
