#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,n,i,nu,de;
	float frac,sum;
	do {
		cout<<"digite un valor para a(>0): ";
		cin>>a;
		if (a<=0)
			cout<<"el valor de a debe ser mayor a cero"<<endl;
	} while(a<=0);
	do{
		cout<<"digite un valor para b(>0): ";
		cin>>b;
		if (b<=0)
			cout<<"el valor de b debe ser mayor a cero"<<endl;
	} while(b<=0);
	do{
		cout<<"digite un valor para n(>0): ";
		cin>>n;
		if (n<=0)
			cout<<"el valor de n debe ser mayor a cero"<<endl;
	} while(n<=0);
	i=1;
	nu=1;
	sum=0;
	while (i<=n+1){
		nu=nu*i;
		de=a+((i-1)*b);
		frac=(float)nu/de;
		if(i % 2 != 0){
			sum=sum+frac;
		}
		else {
		   sum=sum-frac;
		}
		i=i+1;
	}
	cout<<"el valor de la sumatoria es: "<<sum<<endl;
	return 0;
}

