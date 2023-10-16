#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,i,s=0;
	do{
		cout<<"ingrese un numero entero positivo: ";
		cin>>n;
	} while(n<=0);
	for(i=1;i<n;i++){
		if (n % i==0)
			s=s+i;
	};
	if (s==n)
		cout<<"el numero "<<n<<" es perfecto"<<endl;
	else 
		cout<<"el numero "<<n<<" no es perfecto"<<endl;
	return 0;
}

