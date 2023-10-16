#include "vector.h"
using namespace std;

void ordenara(float a[],int n);
void ordenarb(float b[],int n);
bool soniguales (float a[],float b[],int n);

int main(int argc, char *argv[]) {
	float a[MAX],b[MAX];
	int n,c,d;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingreso los datos del vector:"<<endl;
		leernum (a,n);
		ordenara (a,n);
		//cout<<"Datos odenados: "<<endl;
		//numeing (a,n);
		cout<<"Ingrese los datos del vector B: "<<endl;
		leernum (b,n);
		ordenarb (b,n);
		//cout<<"Datos odenados: "<<endl;
		//numeing (b,n);
		if (soniguales (a,b,n))
			cout<<"los vectores son iguales"<<endl;
		else
			cout<<"No son iguales"<<endl;
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void ordenara(float a[],int n){
	int i,j;
	float temp;
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
		if (a[i]>a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
}
void ordenarb(float b[],int n){
	int i,j;
	float temp;
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
		if (b[i]>b[j]){
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		}
}
bool soniguales (float a[],float b[],int n){
	int i,c=0;
	for (i=0;i<n;i++){
		if (a[i]==b[i])
			c++;
	}
	if (c==n)
		return true;
	else 
		return false;
}
