#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int d,p=1,n;
	double may;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	may=-1e30;
	while (n>0){
		d=n%10;
		p=p*d;
		n=n/10;
		cout<<d<<" ";
		if(d>may)
			may=d;
	}
	cout<<" el numero mayor es: "<<may<<endl;
	cout<<" el producto de sus digitos es: "<<p<<endl;
	return 0;
}

