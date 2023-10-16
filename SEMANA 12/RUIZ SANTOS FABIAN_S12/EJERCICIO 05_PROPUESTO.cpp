#include "vector.h"
using namespace std;

void ingreso (char cadena []);
void modificacion (char cadena []);

int main(int argc, char *argv[]) {
	char cadena [MAX],resp;
	do{
		system ("cls");
		ingreso (cadena);
		modificacion (cadena);
		resp=opcion ();
		cin.get ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ingreso (char cadena []){
	cout<<"ingrese la cadena: ";
	cin.getline (cadena,MAX);
}
void modificacion (char cadena []){
	char cadena1[MAX]="***";
	char cadena2[MAX]="####";
	strcat (cadena1, cadena );
	strcat (cadena1,cadena2);
	cout<<"la cadena modificada: "<<cadena1<<endl;
}
