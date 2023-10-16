#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int i,x,suma=0,n;
	cout<<"ingrese un valor para la base: ";
	cin>>x;
	do{
		cout<<"ingrese el numero de terminos: ";
		cin>>n;
	} while(n<=0);
	for (i=1;i<=n;i++){
		suma=suma+pow(x,i);
	}
	cout<<"la suma de la serie es: "<<suma<<endl;
	return 0;
}
