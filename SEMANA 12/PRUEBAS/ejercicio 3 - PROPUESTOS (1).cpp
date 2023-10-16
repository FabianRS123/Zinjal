#include "vector.h"
#include <ctype.h>

void ingresarCadena(char cad[]);
void separarPalabras(char cad[]);
char continuar();

int main(int argc, char *argv[]) {
	char cad[MAX],resp;
	do{
		ingresarCadena(cad);
		separarPalabras(cad);
		resp=opcion ();
		cin.get();
	} while(resp=='s' || resp=='S');
	return 0;
}
void separarPalabras(char cad[]){
	int n=strlen(cad),i,j=0;
	for(i=0;i<=n;i++){
		cout<<cad[i];
		if(isspace(cad[i])){
			cout<<" "<<i-j<<endl;
			j=i+1;;
		}
		if(i==n)
			cout<<" "<<i-j<<endl;
	}
}



