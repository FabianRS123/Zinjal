#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float x,f;
	cout<<"ingrese un numero para x:" ;
	cin>>x;
	if(x<0)
		f=x*x*x+x/2;
	else if(x>=0)
			f=4*x*x-2;
	cout<<"el valor de la funcion es:"<<f<<endl;
	return 0;
}

