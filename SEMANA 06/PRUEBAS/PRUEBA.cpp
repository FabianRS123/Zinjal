#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,i,d,x=0,c=0;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	d=1;
	while (d<=20){
		for (i=1;i<=d;i++)
			if(d%i==0){
			c=c+1;
		}
		if (c==2){
			x=x+1;
		if (x==n){
			cout<<d<<" ";
		}
		}
		d++;
		c=0;
			
	}
	return 0;
}

