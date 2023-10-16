#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,d,s=0,d1,s1=0,x,y;
	do{
		cout<<"ingrese el primero numero: ";
		cin>>a;
		cout<<"ingrese el segundo numero: ";
		cin>>b;
	} while(a<=0 && b<=0);
	x=a;
	y=b;
	while (a>0){
		d=a%10;
		s=s+d;
		a=a/10;
	}
	while (b>0){
		d1=b%10;
		s1=s1+d1;
		b=b/10;
	}
	if (s>s1)
		cout<<" en la suma de digitos el mayor es: "<<x<<endl;
	else 
		cout<<" en la suma de digitos el mayor es: "<<y<<endl;
	return 0;
}

