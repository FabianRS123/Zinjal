#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,j,i;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	for (i=1;i<=n;i++){
		cout<<j<<" ";
		for (j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
	return 0;
}

