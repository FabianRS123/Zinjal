#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n1, n2, k, raiz;
	do{
		cout<<"ingrese un numero: ";
		cin>>n1;
	}while(n1<=0);
	do{
		cout<<"ingrese un numero: ";
		cin>>n2;
	}while(n2<=0);
	if (n1==1) 
		n1=2;
	for(int i=n1;i<=n2;i++){
			raiz = (int)sqrt(i);
		for( k=2;i%k && k<=raiz; k++);
		cout<<endl<<i%k<<" ";
		if(k==raiz+1)
			cout<<i<<"; ";
	}
	
	return 0;
}

