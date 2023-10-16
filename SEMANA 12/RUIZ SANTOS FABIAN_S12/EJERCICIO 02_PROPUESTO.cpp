#include "vector.h"
using namespace std;

void ingreso (char cadena []);
void eco (char cadena [],int n);

int main(int argc, char *argv[]) {
	char cadena [MAX],resp;
	int n;
	do{
		system ("cls");
		ingreso (cadena);
		eco (cadena,3);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ingreso (char cadena []){
	cout<<"ingrese la cadena: ";
	cin.getline (cadena,MAX);
}

void eco (char cadena [],int n){
	int z,i,k,x;
	z=strlen (cadena);
	cout<<"la cadena modificada es: ";
	for (i=0;i<z;i++){
		cout<<cadena[i];
	}
	x=z-1;
	for (k=0;k<n;k++){
		cout<<cadena [x];
	}
}
