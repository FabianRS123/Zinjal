#include "vector.h"
using namespace std;

void repetidos (float v[], int n);

int main(int argc, char *argv[]) {
	float x[MAX];
	int n;
	cout<<"\t\t\t ELEMENTOS REPETIDOS: "<<endl;
	numele (n);
	leernum (x,n);
	cout<<"\t\t Los numeros ingresados son: "<<endl;
	reporte (x,n);
	cout<<"\t\t Lista de numeros no repsetidos: "<<endl;
	repetidos (x,n);
	reporte (x,n);
	return 0;
}
void repetidos (float v[], int n){
	int i,j;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (v[i]==v[j]){
				v[i]=v[-1];
			}
			n--;
		}
	}
}
