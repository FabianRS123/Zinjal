#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int i,sumac=0,n;
	do{
		cout<<"ingrese hasta que numero quiere que sea la suma de cuadrados: ";
		cin>>n;
	} while(n<=0);
	for (i=1;i<=n;i++){
		sumac=sumac+pow(i,2);
	}
	cout<<"la suma de cuadrados es: "<<sumac<<endl;
	return 0;
}
