#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int d1,d2,d3,n,ninv;
	cout<<"ingrese tres numeros(d1 d2 d3): ";
	cin>>d1>>d2>>d3;
	n= d1*100+d2*10+d3;
	ninv= d3*100*+d2*10+d1;
	if(n==ninv)
		cout<<"el numero es capicual"<<endl;
	else
		if(n!=ninv)
		cout<<"el numero no es capicua"<<endl;
}

