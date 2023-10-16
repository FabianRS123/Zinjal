#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float x1,x2,y1,y2,dist;
	cout<<"ingrese el primer digito:" ;
	cin>>x1;
	cout<<"ingrese el segundo digito:" ;
	cin>>x2;
	cout<<"ingrese el tercer digito:" ;
	cin>>y1;
	cout<<"ingrese el cuarto digito:" ;
	cin>>y2;
	dist = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<"la distancia es:"<<dist<<endl ;
	return 0;
}

