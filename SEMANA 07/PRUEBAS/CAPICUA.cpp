#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int i,z=0,x,c=0,y,d;
	do{
		cout<<"ingrese un numero: ";
		cin>>x;
	} while(x<=0);
	while (x>0){
		if (x>0){
		d=x%10;
		x= x/10;
		c++;}
		y=d;
		//cout<<d<<" ";
		
		for (i=3;i<=1;i--){
			z=z+(y*pow(10,i));
		}
	}
	cout<<z<<" "<<endl;
	
	/*for (i=c;i<0;i--){
		z=z+(d*pow(10,i));
		cout<<z<<" ";
	}*/
	return 0;
}

