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
		cout<<" Ingreso los datos del vector:"<<endl;
		leernum (a,n);
		ordenar (a,n);
		cout <<"la lista ordenada es: "<<endl;
		numeing (a,n);
		cout<<"La lista de numeros es: "<<endl;
		eliminarn (a,n);
		numeing (a,n);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void eliminarn (float v[], int n){
	int i,j,k;
	float l;
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
		if(v[i]==v[j]){
			for(k=j;k>n-1;k++){
			v[k]=v[k+1];
			n=n-1;
			j=i;
			v[k+1]=l;
		}
	}
}
