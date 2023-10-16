#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,d,dv=2;
	do {
		cout<<"ingrese un numero para el numerador: ";
		cin>>n;
	} while(n<=0);
	do {
		cout<<"ingrese un numero para el denominador: ";
		cin>>d;
	} while(d<=0);
	cout<<n<<" / "<<d<<" = ";
	while (dv<=n && dv<=d){
		if (n%dv==0 && d%dv==0){
			n=n/dv;
			d=d/dv;
			cout<<n<<" / "<<d<<" = ";
		}
		else 
			dv++;;
		if (d<=n && dv<=d)
			cout<<" / ";
		
	}
	return 0;
}

