#include "vector.h"
using namespace std;

void promedio(float v[],float &pro,int n);
void maymen(float v[],float pro, int n);

int main(int argc, char *argv[]) {
	float x[MAX], pro;
	int n;
	numele (n);
	cout<<"\t\t Ingrese los numeros del vector: "<<endl; 
	leernum (x,n);
	promedio (x,pro,n);
	cout<<"\t\t Los numeros menores al promedio son: "<<endl;
	maymen(x,pro,n);
	return 0;
}
void promedio(float v[],float &pro,int n){
	int i,s=0;
	for (i=0;i<n;i++){
		s=s+v[i];
	}
	pro=float(s)/n;
	cout<<"\t\t El promedio es: "<<pro<<endl;
}
void maymen(float v[],float pro, int n){
	int i;
	//may= -1e30;
	//men= 1e30;
	for (i=0;i<n;i++){
		if (v[i]<pro)
			cout<<"\t\t  "<<v[i]<<endl;
	}
}
