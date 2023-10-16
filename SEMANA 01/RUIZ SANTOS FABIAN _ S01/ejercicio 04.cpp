#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float sbsc,Sbto,mtv,sn,dsc,co;
	cout<<"ingrese el monto vendido total :";
	cin>>mtv;
	sbsc = 300;
	co = 0.09*mtv;
	Sbto = sbsc + co;
	dsc = 0.11 * Sbto;
	sn = Sbto - dsc;	
	cout<<"la comision es : "<<co<<endl;
	cout<<"el descuento es : "<<dsc<<endl;
	cout<<"el Salario bruto es : "<<Sbto<<endl;
	return 0;
}

