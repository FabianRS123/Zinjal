#include "vector.h"
#include <ctype.h>
using namespace std;

void ingreso (char cadena []);
void separarpal(char cadena[]);

int main(int argc, char *argv[]) {
	char cadena [MAX],resp;
	do{
		system ("cls");
		ingreso (cadena);
		separarpal (cadena);
		resp=opcion ();
		cin.get();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ingreso (char cadena []){
	cout<<"ingrese la cadena: ";
	cin.getline(cadena,MAX);
}
void separarpal(char cadena[]){
	int i,x,j=0;
	x=strlen(cadena);
	for(i=0;i<=x;i++){
		cout<<cadena[i];
		if(i==x)
		   cout<<" "<<i-j<<endl;
		if(isspace(cadena[i])){
			cout<<" "<<i-j<<endl;
			j=i+1;;
		}
	}
}
