#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,d,s=0,x;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	x=n;
	while (n>0){
		d=n%10;
		s=s+d*d*d;
		n=n/10;
		cout<<d<<" ";
	}
	if (x==s)
		cout<<"el nunero es perfecto "<<endl;
	else
		cout<<"adfjn" <<endl;
	return 0;
}

