#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float n1,n2;
	char op;
	cout<<"ingrese el primer numero: ";
	cin>>n1;
	cout<<"ingrese el segundo numero: ";
	cin>>n2;
	cout<<"operaciones que desea realizar"<<endl;
	cout<<"[+] Suma"<<endl;
	cout<<"[-] Resta"<<endl;
	cout<<"[*] Multiplicacion"<<endl;
	cout<<"[/] Division"<<endl;
	cout<<"[^] Potencia"<<endl;
	cout<<"ingrese la operacion: ";
	cin>>op;
	switch (op){
	case '+':
		cout<<"el resultado de la operacion es: "<<n1+n2<<endl;
		break;
	case '-':
		cout<<"el resultado de la operacion es: "<<n1-n2<<endl;
		break;
	case '*':
		cout<<"el resultado de la operacion es: "<<n1*n2<<endl;
		break;
	case '/':
		if(n2!=0)
		cout<<"el resultado de la operacion es: "<<n1/n2<<endl;
		else
			cout<<"el resulado es indefinido"<<endl;
		break;
	case '^':
		cout<<"el resultado de la operacion es: "<<pow(n1,n2)<<endl;
		break;
	default:
		cout<<"datos fuera del rango"<<endl;
	}
	
	return 0;
}

