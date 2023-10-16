#include "vector.h"
using namespace std;

void eliminarn (float v[], int n);

int main(int argc, char *argv[]) {
	float a[MAX];
	int n;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingrese los datos del vector:"<<endl;
		leernum (a,n);
		cout<<"los numeros ingresados son: "<<endl;
		ordenar (a,n);
		numeing (a,n);
		cout<<"La lista de numeros sin repetir son: "<<endl;
		eliminarn (a,n);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void eliminarn (float v[], int n){
	int i,l=0,k,z=0,co,x;
	float ve[MAX];
	for (i=0; i<n; i++){
		co=0;
		x=v[i];
		ve[l]=x;
		l++;
		for (k=0; k<n; k++)
			if(ve[k]==x)
			co++;
		if(co==1){
			v[z]=x;
			z++;
		}
	}
	for(i=0; i<z; i++)
		cout<<v[i]<<endl;
}

