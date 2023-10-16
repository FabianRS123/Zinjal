#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float h,pag;
	int op;
	cout<<"ingrese las horas trabajadas a la semana: ";
	cin>>h;
	cout<<"operaciones que desea realizar"<<endl;
	cout<<"[1]Clase A"<<endl;
	cout<<"[2]Clase B"<<endl;
	cout<<"[3]Clase C"<<endl;
	cout<<"[4]Clase D"<<endl;
	cout<<"ingrese opcion(1-4): ";
	cin>>op;
	switch (op){
	case 1:
		pag=50*h;
		cout<<"el pago al trabajador es: "<<pag<<endl;
		break;
	case 2:
		pag=40*h;
		cout<<"el pago al trabajador es: "<<pag<<endl;
		break;
	case 3:
		pag=25*h;
		cout<<"el pago al trabajador es: "<<pag<<endl;
		break;
	case 4:
		pag=20*h;
		cout<<"el pago al trabajador es: "<<pag<<endl;
		break;
	}
	return 0;
}

