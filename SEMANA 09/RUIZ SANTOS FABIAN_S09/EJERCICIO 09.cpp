#include <iostream>
#include <math.h>
using namespace std;

float perimetro (float m,float n);
char opcion ();

int main(int argc, char *argv[]) {
	float a,b;
	char resp;
	do{
		system ("cls");
		do{
			cout<<"ingrese el lado mayor: ";
			cin>>a;
			cout<<"ingrese el numero de cuadrados que quieres que se formen: ";
			cin>>b;
		} while(a<=0 && b<=0);
		cout<<"la suma de los perímetros de los "<<b<<" primeros cuadrados así formados es: "<<perimetro(a,b)<<endl;
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
float perimetro (float m,float n){
	if (n==0)
		return 0;
	else 
		return (m*4)+perimetro(sqrt(pow(m,2)+pow(m,2))/2,n-1);
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
		
		

