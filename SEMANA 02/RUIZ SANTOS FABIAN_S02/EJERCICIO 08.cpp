#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float x,y,z;
	cout<<"ngrese los lados del triangulo x,y,z respectivamente:" ;
	cin>>x>>y>>z;
	if (x>0 && y>0 && z>0 && z+y>z && x+z>y && y+z>x )
	{
		cout<<"cumplen con las condiciones"<<endl;
		if(x==y && x==z && z==y )
			cout<<"es triangulo es equilatero"<<endl;
		else 
			if(x!=y && x!=z && z!=y )
			cout<<"es triangulo es escaleno"<<endl;
			else 
				cout<<"es triangulo es iscoceles"<<endl;
	}
	else
		cout<<"no cumplen con las condiciones"<<endl;
	
	return 0;
}

