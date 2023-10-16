#include <iostream>
#include <math.h>
using namespace std;

float volumen (float r,float h); 
char opcion ();

int main(int argc, char *argv[]) {
	float a,b;
	char resp;
	do{
		system ("cls");
		do{
		cout<<"ingrese el valor del radio: ";
		cin>>a;
		cout<<"ingrese el valor de la altura: ";
		cin>>b;
		}while (a<=0 || b<=0);
	cout<<"el volumen es: "<<volumen(a,b)<<endl;
	resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}

float volumen (float r,float h) {
	float p=3.14;
	return p*pow(r,2)*h;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
