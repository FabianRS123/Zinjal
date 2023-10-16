#include <iostream>
using namespace std;

float funcion (float n);
char opcion ();

int main(int argc, char *argv[]) {
	float a;
	char resp;
	do{
		system ("cls");
		cout<<"ingrese un numero: ";
		cin>>a;
		cout<<"el valor de la funcion es: "<<funcion(a)<<endl;
		resp=opcion ();
	} while (resp=='s' || resp=='S');
	return 0;
}
float funcion (float n){
	if (n==0)
		return 0;
	else {
		if (n>0)
			return (1/n) + funcion (n-1);
		else		
			return (-1/-n) - funcion (-n-1);
	}
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
