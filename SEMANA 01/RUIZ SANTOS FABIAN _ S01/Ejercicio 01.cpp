#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float n1,n2,suma,resta,producto;
	cout<<"Ingrese el primer numero: ";
	cin>>n1;
	cout<<"Ingrese el segundo numero: ";
	cin>>n2;
	suma = n1+n2;
	resta = n1-n2;
	producto = n1*n2;
	cout<<"La suma es : "<<suma<<endl;
	cout<<"La resta es : "<<resta<<endl;
	cout<<"El producto es : "<<producto<<endl;
	return 0;
}

