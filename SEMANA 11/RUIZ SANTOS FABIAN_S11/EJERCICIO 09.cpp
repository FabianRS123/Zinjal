#include "vector.h"
using namespace std;

void unio (float a[], float b[],float c[], int n,int m);
void interseccion (float a[], float b[], int n,int m);
void diferencia (float a[], float b[], int n,int m);

int main(int argc, char *argv[]) {
	float a[MAX],b[MAX],c[MAX];
	int n,m;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingrese los datos del vector A:"<<endl;
		leernum (a,n);
		numele (m);
		cout<<" Ingrese los datos del vector B:"<<endl;
		leernum (b,m);
		unio (a,b,c,n,m);
		cout<<"la union de los 2 vectores es: "<<endl;
		numeing (c,n+m);
		cout<<"Los numeros que estan en la interseccion  son: "<<endl;
		interseccion (a,b,n,m);
		cout<<"La diferencia entre el primero con el segundo es: "<<endl;
		diferencia (a,b,n,m);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void unio (float a[], float b[],float c[], int n,int m){
	int i;
	for (i=0;i<m+n;i++){
		if (i<n)
			c[i]=a[i];
		if (i+1>=m)
			c[i]=b[i-n];
	}
}
void interseccion (float a[], float b[], int n,int m){
	int i,z;
	for (i=0;i<n;i++){
		for (z=0;z<m;z++)
		if (a[i] == b[z])
			cout<<a[i]<<endl;
			
	}
}
void diferencia (float a[], float b[], int n,int m){
	int i,z,k=0;
	for(i=0;i<n;i++){
		for(z=0;z<m;z++){
			if(a[i]==b[z])
				k=k+1;
		}
		if(k==0)
			cout<<a[i]<<endl;
		k=0;
	}
}
