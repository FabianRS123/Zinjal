#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1,n2,s1=0,s2=0,d1,d2,x,z;
	do {
		cout<<"ingrese un numero: ";
		cin>>n1;
	} while(n1<=0);
	do{
		cout<<"ingrese un numero: ";
		cin>>n2;
	} while(n2<=0);
	x=n1;
	z=n2;
	while (n1>0){
		d1=n1%10;
		s1=s1+d1;
		n1=n1/10;
	}
	cout<<"vsb: "<<s1<<endl;
	while (n2>0){
		d2=n2%10;
		s2=s2+d2;
		n2=n2/10;
	}
	cout<<"vsb: "<<s2<<endl;
	if (s1==s2)
		cout<<"la suma de cifras de ambos numeros son iguales "<<endl;
	else
		if (s1>s2)
			cout<<"al suma de cifras del numero "<<x<<" es mayor a la suma de cifras del numero "<<z<<endl;
		else 
			cout<<"al suma de cifras del numero "<<z<<" es mayor a la suma de cifras del numero "<<x<<endl;
	return 0;
}

