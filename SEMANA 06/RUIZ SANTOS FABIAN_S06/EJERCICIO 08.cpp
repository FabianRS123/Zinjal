#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n,s=0,d,x;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	x=n;
	while (n>0){
		d= n % 10;
		s= s + pow(d,3);
		n=n/10;
		if (d==5)
		s=s+1;
	}
	if (s==x)
		cout<<"el numero es un cubo perfecto porque al elevar al cubo cada digito y sumarlo sale: "<<s<<endl;
	else 
		cout<<"el numero no es un cubo perfecto porque al elevar al cubo cada digito y sumarlo sale: "<<s<<endl;
	return 0;
}

