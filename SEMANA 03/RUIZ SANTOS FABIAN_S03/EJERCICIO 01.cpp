#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float imp,pag;
	int op;
	cout<<"ingrese el importe de compra: ";
	cin>>imp;
	cout<<"operaciones que se desea realizar"<<endl;
	cout<<"[1]Azul"<<endl;
	cout<<"[2]Roja"<<endl;
	cout<<"[3]Blanca"<<endl;
	cout<<"ingrese la opcion(1-3):" ;
	cin>>op;
	switch (op){
	case 1: 
		pag=imp-imp*0.2;
		cout<<"el pago es: "<<pag<<endl;
		break;
	case 2: 
		pag=imp-imp*0.3;
		cout<<"el pago es: "<<pag<<endl;
		break;
	case 3:
		pag=imp;
		cout<<"el pago es: "<<pag<<endl;
		break;
	default:
		cout<<"dato fuera de rango"<<endl;
	}
	return 0;
}

