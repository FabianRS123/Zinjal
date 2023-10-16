#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,j,i;
	do{
		cout<<"ingrese la cantidad de numeros: ";
		cin>>n;
	} while(n<=0);
	for (i=1;i<=n;i++){
		for (j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

