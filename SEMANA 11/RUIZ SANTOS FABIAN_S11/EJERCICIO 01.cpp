#include "vector.h"
using namespace std;

void pares (float v[], int n);
void negativos (float v[], int n);

int main(int argc, char *argv[]) {
	float x[MAX];
	int n;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingreso de datos del vector :"<<endl;
		leernum (x,n);
		cout<<"los numeros ingresados son: "<<endl;
		numeing (x,n);
		cout<<" Los numeros pares son: "<<endl;
		pares(x,n);
		cout<<"los numeros negativos son: "<<endl;
		negativos (x,n);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void pares (float v[], int n){
	int i;
	for (i=0;i<n;i++){
		if (int (v[i]) % 2==0){
			cout<<v[i]<<" "<<endl;
		}
	}
}
void negativos (float v[], int n){
	int i;
	for (i=0;i<n;i++){
		if (v[i]<0){
			cout<<v[i]<<" "<<endl;
		}
	}

}
	
