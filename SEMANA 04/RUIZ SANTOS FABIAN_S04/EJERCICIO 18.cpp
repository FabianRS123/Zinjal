#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i,de,nu,n,x;
	float frac,sum;
	do{
		cout<<"ingrese un valor para x(>0): ";
		cin>>x;
			if(x<=0)
			cout<<"el numero debe ser mayor a cero"<<endl;
	} while(x<=0);
	do{
		cout<<"ingrese el numero de terminos(>0): ";
		cin>>n;
		if(n<=0)
			cout<<"el numero debe ser mayor a cero"<<endl;
	} while(n<=0);
	i=1;
	de=1;
	nu=1;
	sum=0;
	while (i <= n){
		frac= (float) nu / de;
		if(i % 2 != 0){
			sum=sum+frac;
		}
		else {
			sum=sum-frac;
		}
		nu=nu*x;
		de=de*i;
		i=i+1;
	}
	cout<<"el valor de la funcion es: "<<sum<<endl;
	return 0;
}

