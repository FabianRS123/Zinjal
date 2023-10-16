#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1,n2,n3,d=2,mcd=1,mcm=1,x,y,z,dv;
	do{
		cout<<"ingrese un numero entero positivo: ";
		cin>>n1;
	} while(n1<=0);
	do{
		cout<<"ingrese un numero entero positivo: ";
		cin>>n2;
	} while(n2<=0);
	do{
		cout<<"ingrese un numero entero positivo: ";
		cin>>n3;
	} while(n3<=0);
	x=n1;
	y=n2;
	z=n3;
	dv=d;
	while (d<=n1 && d<=n2 && d<=n3 ){
		if (n1 % d==0 && n2 % d==0 && n3 % d==0){
			mcd=mcd*d;
			n1=n1/d;
			n2=n2/d;
			n3=n3/d;
		}
		else 
			d++;
	}
	cout<<"el mcd es: "<<mcd<<endl;
	while (x>1 || y>1 || z>1){
		if (x % dv==0 || y % dv==0 || z % dv==0){
				mcm=mcm*dv;
				if(x%dv==0)
				x=x/dv;
				if (y%dv==0)
				y=y/dv;
				if (z%dv==0)
				z=z/dv;
		}
		else 
			dv++;
	}
	cout<<"el mcm es: "<<mcm<<endl;
	return 0;
}

