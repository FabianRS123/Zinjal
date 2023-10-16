#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n,a,cifra,sum;
	do{
		cout<<"\n\tINGRESAR UN NUMERO ENTERO POSITIVO: ";
		cin>>n;
	} while(n<=0);
	a=n;
	sum=0;
	while(n>0){
		cifra=n%10;
		sum=sum+pow(cifra,3);
		n=n/10;
		cout<<sum<<" ";
		//if(cifra==5)
			//sum=sum+1;
	}
	cout<<sum;
	if(sum==a)
		cout<<"\tEl numero "<<a<<" es un cubo perfecto."<<endl;
	else
		cout<<"\tEl numero "<<a<<" no es un cubo perfecto."<<endl;
	return 0;
}

