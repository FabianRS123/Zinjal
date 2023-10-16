#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float x, fx=1, i=1, ter=1, fac=1;
	do{
		cout<<"ingrese un numero para x: ";
		cin>>x;
		x=x+1-1; 
	}while(x<=0);
	for (i=1;i<=x;i++){
		fac=fac*i;
	}
	while (i<=x){
		if(ter ==1){
			fx=pow(x,i)/fac;
			ter=2;
		}
		else{
			fx=fx-pow(x,i)/fac;
			ter=1;
		}
	}

		
	cout<<"valor de la funcion1: "<<fx<<endl;
	return 0;
}
