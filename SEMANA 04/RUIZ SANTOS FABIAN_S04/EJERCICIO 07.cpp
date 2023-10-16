#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int x,i=1,pro=1;
	float n;
	cout<<"ingrese un valor para la base: ";
	cin>> x;
	cout<<"ingrese un valor para el exponente: ";
	cin>> n;
	while(i<n){
		i=i+1;
		pro=pro*x;
	}
	cout<<"el resultado es: "<<pro<<endl;
	return 0;
}

