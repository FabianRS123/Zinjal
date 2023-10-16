#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i,x,z,n;
	do{
		cout<<"ingrese un numero positivo: ";
		cin>>n;
	} while(n<=0);
	i=1;
	z=1;
	x=1;
	do{
		while(i<=n){
			cout<<i<<" ";
			i++;
		}
		if(z==1)
			cout<<endl;
		if(z>=2){
			while(x<z){
				cout<<x<<" ";
			x++;
			}
			x=1;
			cout<<endl;	
		}	
		z++;
		i=z;
	} while(z<=n);
	return 0;
}

