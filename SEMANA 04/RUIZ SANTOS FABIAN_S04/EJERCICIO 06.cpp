#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,a,b,x=1,total;
		cout<<"ingrese el total de numeros: ";
		cin>>total;
	while(x<=total){
		cout<<"ingrese un numero: ";
		cin>>n;
		 if(x==1){
			 a=n;
			 b=n;
		 }
		 else 
			 if (n>a)
				 a=n;
			 else 
				 if(n<b)
					b=n;
	x=x+1;
	};
	cout<<"el numero mayor es: "<<a<<endl;
	return 0;
}

