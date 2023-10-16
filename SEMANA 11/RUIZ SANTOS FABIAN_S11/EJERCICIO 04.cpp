#include "vector.h"
using namespace std;
void suma (float A[],int n,int &s);
void promedio (int s,int n,float &pro);
void vmenor (float A[],int n,float pro);

int main(int argc, char *argv[]) {
	float x[MAX],pro;
	int n,s;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingrese los datos del vector :"<<endl;
		leernum (x,n);
		suma (x,n,s);
		promedio (s,n,pro);
		cout<<"los numeros menores al promedio son: ";
		vmenor (x,n,pro);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void suma (float A[],int n,int &s){
	int i,su=0;
	for (i=0;i<n;i++){
		su=su+A[i];
	}
	s=su;
}
void promedio (int s,int n,float &pro){
	pro = float (s)/n;
	cout<<"El promedio es: "<<pro<<endl;
}
void vmenor (float A[],int n, float pro){
	int i;
	for (i=0;i<n;i++){
		if (A[i]<pro)
			cout<<A[i]<<" ";
	}
}
