#include "vector.h"
using namespace std;

void ingreso (char cad []);
void modificacion(char cad[]);
char respuesta();

int main(int argc, char *argv[]) {
	char cadena[MAX],resp;
	do{
		system("cls");
		ingreso (cadena);
		modificacion(cadena);
		resp=opcion ();
		cin.get();
	} while(resp=='s' || resp=='S');
	return 0;
}
void ingreso (char cad []){
	cout<<"Ingrese la cadena: ";
	cin.getline(cad,MAX);
}
void modificacion(char cad[]){
	char temp1;
	int i,n,j,b=0,a=0;
	n=strlen(cad);
	for (i=n; i<(2*n-1); i++){
		cad[i]=' ';
	}
	cad[i]=0;
	for (j=0; j<n-1; j++){
		temp1=cad[2*n-2];
		for (i=2*n-3; i>=1+b; i--){
			cad[i+1]=cad[i];
		}
		b=b+2;
		cad[1+a]=temp1;
		a=a+2;
	}
	cad[2*n-1]=0;
	cout<<"Cadena modificada: "<<cad<<endl;
}

