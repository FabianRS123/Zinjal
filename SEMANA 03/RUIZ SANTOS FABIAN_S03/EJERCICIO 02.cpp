#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float pag,k,t;
	int op;
	cout<<"ingrese los kilometros recorridos: ";
	cin>>k;
	cout<<"operaciones que desea realizar"<<endl;
	cout<<"[1]Bicicleta"<<endl;
	cout<<"[2]Moto"<<endl;
	cout<<"[3]Auto"<<endl;
	cout<<"[4]Camion"<<endl;
	cout<<"ingrese opcion(1-4): ";
	cin>>op;
	switch (op) {
	case 1: 
		pag=0.5*k;
		cout<<"el importe a pagar es: "<<pag<<endl;
		break;
	case 2: case 3:
		pag=2*k;
		cout<<"el importe a pagar es: "<<pag<<endl;
		break;
	case 4:
		cout<<"ingrese las toneladas :";
		cin>>t;
		pag=5*k+3*t;
		cout<<"el importe a pagar es: "<<pag<<endl;
		break;
	default:
		cout<<"opcion fuera de rango"<<endl;
		
	}
	return 0;
}

