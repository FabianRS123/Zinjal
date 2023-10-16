#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i,n,suma,x;
	suma=0;
	do{
		cout<<"ingrese el numero de terminos: ";
		cin>>n;
		x=(3*n)-2;
	} while(n<=0);
	for (i=1;i<=x;i=i+3){
		suma=suma+i;
	}
	cout<<"las suma de la serie es: "<<suma<<endl;
	return 0;
}

