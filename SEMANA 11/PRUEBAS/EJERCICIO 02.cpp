#include "vector.h"
using namespace std;

void proceso (float A[],float B[],float C[],int n);

int main(int argc, char *argv[]) {
	float A[MAX],B[MAX],C[MAX];
	int n;
	char resp;
	do{
		numele (n);
		cout<<" Ingreso los numeros del vector A:"<<endl;
		leernum (A,n);
		cout<<" Ingreso los numeros del vector B:"<<endl;
		leernum (B,n);
		proceso (A,B,C,n);
		cout<<"los valores de C es: "<<endl;
		numeing(C,n);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void proceso (float A[],float B[],float C[],int n){
	int i;
	for (i=0;i<n;i++){
		C[i]=A[i]+B[i];
	}
}

