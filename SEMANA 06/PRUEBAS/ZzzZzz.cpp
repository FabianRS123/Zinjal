#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int s=0,d,n,i,z,x=0;
	do{
		cout<<"cuantos numeros quiere ingresar: ";
		cin>>n;
	} while(n<=0);
	for(i=1;i<=n;i++){
		cout<<"ingrese un numero que tenga solo 2 digitos: ";
		cin>>z;
		while (z>0){
			d=z%10;
			s=s+d;
			z=z/10;
			cout<<s<<" ";
		}
		
	}
	return 0;
}

