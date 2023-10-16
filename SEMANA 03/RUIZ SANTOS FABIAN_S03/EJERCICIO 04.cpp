#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int op,n;
	float pag,dsc;
	cout<<"ingrese el numero de sillas: ";
	cin>>n;
	dsc=n%5;
	n=n-dsc;
	cout<<"operaciones que se desea realizar"<<endl;
	cout<<"[1]Silla tipo A"<<endl;
	cout<<"[2]Silla tipo B"<<endl;
	cout<<"[3]Sila tipo C"<<endl;
	cout<<"ingrese la opcion(1-3):" ;
	cin>>op;
	switch (op){
	case 1:
		pag=20*n*0.97+20*dsc;
		cout<<"el pago es: "<<pag<<endl;
		break;
	case 2:
		pag=35*n*0.95+35*dsc;
		cout<<"el pago es: "<<pag<<endl;
		break;
	case 3:
		pag=50*n*0.93+50*dsc;
		cout<<"el pago es: "<<pag<<endl;
		break;
	default: 
		cout<<"dato fuera de rango"<<endl;
	}
	
	return 0;
}

