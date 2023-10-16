#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float imc,pe,es;
	cout<<"ingrese el peso: ";
	cin>> pe;
	cout<<"ingrese la estatura: ";
	cin>>es;
	imc = pe/pow(es,2);
		if(imc<20)
			cout<<"esta delgado"<<endl;
		else if(imc>=20 && imc<25)
				cout<<"esta normal"<<endl;
		else if(imc>=25 && imc<27)
				cout<<"esta con sobrepeso"<<endl;
		else if(imc>=27)
				cout<<"tiene obesidad"<<endl;
	return 0;
}

