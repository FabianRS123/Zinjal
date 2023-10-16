#include "vector.h"
using namespace std;

bool soniguales (float a[],float b[],int n);

int main(int argc, char *argv[]) {
	float a[MAX],b[MAX];
	int n;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingrese los datos del vector:"<<endl;
		leernum (a,n);
		ordenar (a,n);
		cout<<"Ingrese los datos del vector B: "<<endl;
		leernum (b,n);
		ordenar (b,n);
		if (soniguales (a,b,n))
			cout<<"los vectores son iguales"<<endl;
		else
			cout<<"Los vectores no son iguales"<<endl;
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
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
