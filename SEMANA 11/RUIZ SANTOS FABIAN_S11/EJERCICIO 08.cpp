#include "vector.h"
using namespace std;

float mediana (float v[],int n);

int main(int argc, char *argv[]) {
	float a[MAX];
	int n;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingrese los numeros del vector:"<<endl;
		leernum (a,n);
		ordenar (a,n);
		cout<<" la mediana es: "<<mediana (a,n)<<endl;
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
float mediana (float v[],int n){
	float med;
	if (n%2!=0)
		med=v[(n/2)];
	else
		med=(v[n/2-1]+v[n/2])/2;
	return med;
}
