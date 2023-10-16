#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int suma=0,i;
	double producto = 1;
	for (i=20; i<=80;i+=2){
		suma= suma+i;
	}
	cout<<"la suma del 20 al 80 es: "<<suma<<endl;
	for (i=21; i<=80;i+=2){
		producto = producto*i;
	}
	cout<<"el producto del 20 al 80 es: "<<producto<<endl;
	
	return 0;
}

