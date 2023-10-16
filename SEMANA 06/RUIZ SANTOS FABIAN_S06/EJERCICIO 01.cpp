#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,i,x,s=0,sx=0;
	do{
		cout<<"ingrese un numero entero positivo: ";
		cin>>n;
	} while(n<=0);
	do{
		cout<<"ingrese un numero entero positivo: ";
		cin>>x;
	} while(x<=0);
	for(i=1;i<n;i++){
		if (n % i==0)
			s=s+i;
	};
	for(i=1;i<x;i++){
		if (x % i==0)
			sx=sx+i;
	};
	if (s==x && sx==n)
		cout<<"los numeros "<<n<<" y "<<x<<" son amigos"<<endl;
	else 
		cout<<"los numeros "<<n<<" y "<<x<<" no son amigos"<<endl;
	return 0;
}

