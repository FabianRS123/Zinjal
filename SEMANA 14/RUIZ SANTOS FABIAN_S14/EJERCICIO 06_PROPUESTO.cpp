#include "estructura.h"
using namespace std;
struct cadena{
	char pal[60];
	int num;
};

void ndato(int &n);
void ingresar (cadena v[],int n);
void ascendente (cadena v[],int n);
void reporte (cadena v[],int n);

int main(int argc, char *argv[]) {
	cadena v[100];
	int n;
	char resp;
	do{
		system ("cls");
		ndato (n);
		ingresar (v,n);
		ascendente (v,n);
		cout<<"FORMA ASCENDENTE: "<<endl;
		reporte (v,n);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ndato(int &n){
	do{
		cout<<"ingrese el numero de cadenas a ingresar: ";
		n=leerEntero ();
	} while(n<=0);
}
void ingresar (cadena v[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<"ingrese la cadena "<<i+1<<": ";
		leerLetras(v[i].pal);
		v[i].num=strlen(v[i].pal);
	}
}
void reporte (cadena v[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<v[i].pal<<" = "<<v[i].num<<endl;
	}
}
void ascendente (cadena v[],int n){
	int i,j,temp1;
	char temp [60];
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (v[i].num>v[j].num){
				strcpy (temp,v[i].pal);
				strcpy (v[i].pal,v[j].pal);
				strcpy (v[j].pal,temp);
				
				temp1=v[i].num;
				v[i].num=v[j].num;
				v[j].num=temp1;
			}
		}
	}
}
