#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1,n2,i,cd=0;
	do{
		cout<<"ingrese un numero inicial: ";
		cin>>n1;
	} while(n1<=0);
	do{
		cout<<"ingrese un numero final: ";
		cin>>n2;
	} while(n2<=0);
	cout<<"los numeros primos del "<<n1<<" hasta el "<<n2<<" son: ";
	while (n1<=n2) {
		for (i=1;i<=n1;i++)
				if (n1%i==0){
					cd=cd+1;
		}
			if (cd==2)
				cout<<n1<<" ";
		n1++;
		cd=0;
	}
	return 0;
}

