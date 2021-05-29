#include <iostream>
using namespace std;

int main(){
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int maior = 0;
	int menor = 0;
	
	cout << "Digite um numero:";
	cin >> num1;
	cout << "Digite o segundo numero:";
	cin >> num2;
	cout << "Digite o terceiro numero:";
	cin >> num3;
	cout << "Digite o quarto numero:";
	cin >> num4;
	
	if(num1 > num2 && num1 > num3 && num3 > num4)
	{
		maior = num1;
	}
	else if(num2 > num1 && num2 > num3 && num2 > num4)
	{
		maior = num2;
	}
	else if (num3 > num1 && num3 > num2 && num3 > num4)
	{
		maior = num3;
	}
	else
	{
		maior = num4;
	}
	
	if(num1 < num2 && num1 < num3 && num3 < num4)
	{
		menor = num1;
	}
	else if(num2 < num1 && num2 < num3 && num2 < num4)
	{
		menor = num2;
	}
	else if (num3 < num1 && num3 < num2 && num3 < num4)
	{
		menor = num3;
	}
	else
	{
		menor = num4;
	}
	
	cout << "Maior: " << maior;
	cout << "\n";
	cout << "Menor: " << menor;
	cout << "\n";
	
	system("pause");
	return 0;
}
