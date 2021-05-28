#include <iostream>
using namespace std;

int main(){
	
	int a = 0;
	int b = 0;
	
	cout << "Digite um numero:";
	cin >> a;
	cout << "Digite outro numero:";
	cin >> b;
	
	if(a > b){
		printf("O maior numero foi  %d\n e o menor %d\n" , a, b);
	}
	else{
		printf("O maior numero foi  %d\n e o menor %d\n" , b, a);
	}
	
	return 0;
}