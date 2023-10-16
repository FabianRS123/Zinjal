#include "vector.h"
using namespace std;

void ingreso (char cadena[]);
void modificar(char cade []);

int main(int argc, char *argv[]) {
	char cadena [MAX],resp;
	do{
		system ("cls");
		ingreso (cadena);
		modificar (cadena);
		resp=opcion ();
		cin.get();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ingreso (char cadena[]){
	cout<<"Ingrese la cadena: ";
	cin.getline(cadena,MAX);
}
void modificar (char cade []){
	int i,k;
	i=strlen(cade);
	for (k=0;k<i;k++){
		cout<<cade[k]<<" ";
	}
}
