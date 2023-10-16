#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,i=17,x=1,z=1;
	do{
		cout<<" Ingrese el numero de terminos: ";
		cin>>n;
	}while(n<=0);
	while (x<=n){
		cout<<i<<" ,";
		if(z==1){
			i=i-2;
			z=2;
		}
		else {
			i=i+3;
			z=1;
		}
		x=x+1;
	};
	return 0;
}

