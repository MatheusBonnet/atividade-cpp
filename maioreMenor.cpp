#include <iostream>
using namespace std;

int main(){
	
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	
	cout << "Digite um numero:";
	cin >> num1;
	cout << "Digite o segundo numero:";
	cin >> num2;
	cout << "Digite o terceiro numero:";
	cin >> num3;
	cout << "Digite o quarto numero:";
	cin >> num4;
	
	if(num1 > num2 && num1 > num3 && num3 > num4){
		printf("O maior numero foi : %d\n", num1);
	}
	else if(num2 > num1 && num2 > num3 && num2 > num4){
		printf("O maior numero foi : %d\n", num2);
	}
	else if (num3 > num1 && num3 > num2 && num3 > num4){
		printf("O maior numero foi : %d\n", num3);
	}
	else if(num4 > num1 && num4 > num2 && num4 > num3){
		printf("O maior numero foi : %d\n", num4);
	}
	else if(num1 < num2 && num1 < num3 && num3 < num4){
		printf("O menor numero foi : %d\n", num1);
	}
	else if(num2 < num1 && num2 < num3 && num2 < num4){
		printf("O menor numero foi : %d\n", num2);
	}
	else if (num3 < num1 && num3 < num2 && num3 < num4){
		printf("O menor numero foi : %d\n", num3);
	}
	else{
		printf("O menor numero foi : %d\n", num4);
	}
	
	system("pause");
	return 0;
}