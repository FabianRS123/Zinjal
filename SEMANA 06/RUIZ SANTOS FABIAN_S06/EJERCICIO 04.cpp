#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int x,d,n,s=0,a,i,m;
	do{
		cout<<"ingrese un valor para la base (2 - 9): ";
		cin>>x;
		cout<<"ingrese un numero entero: ";
		cin>>n;
	} while(n<=0 || (x<2 || x>9));
	s=0;
	i=1;
	m=n;
	while (n>0){
		d=n%10;
		n=n/10;
		a=d*(pow(x,i-1));
		s=s+a;
		i++;
	}
	cout<<" "<<m<<" en base "<<x<<" es: "<<s<<endl;
	return 0;
}

