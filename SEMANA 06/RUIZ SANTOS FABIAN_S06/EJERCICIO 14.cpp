#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,j,i;
	do{
		cout<<"ingresar el numero de asteriscos: ";
		cin>>n;
	} while(n<=0);
	for (i=n;i>=1;i--){
		for (j=1;j<=i;j++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

