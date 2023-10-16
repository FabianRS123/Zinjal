#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n1,n2,d,i,cp;
	do{
		cout<<"ingrese un numero para n1: ";
		cin>>n1;
	} while(n1<=0);
	do{
		cout<<"ingrese un numero para n2: ";
		cin>>n2;
	} while(n2<=0);
	for (i=n1;i<=n2;i++){
		cp=1;
		d=2;
		while (d<=i/2 && cp){
		if(n1 % d==0){
			cp=0;
			d++;
		}
		}
		if (cp)
			cout<<"sdf:"<<n1<<endl;
	}
	return 0;
}

