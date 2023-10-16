#include "vector.h"
using namespace std;

void aprodes (float v[], int n,int &ap, int &de);
void porcentaje (int n,int ap, int de);

int main(int argc, char *argv[]) {
	float x[MAX];
	int n,ap,de;
	numele (n);
	cout<<"\t\t Ingrese los numeros del vector: "<<endl; 
	leernum (x,n);
	aprodes (x,n,ap,de);
	porcentaje (n,ap,de);
	return 0;
}
void aprodes (float v[], int n, int &ap, int &de){
	int i,a=0,d=0;
	for (i=0;i<n;i++){
		if (v[i]>=11)
			a++;
		else
			d++;
	}
	ap=a;
	de=d;	
}
void porcentaje (int n,int ap, int de){
	float desa,apro;
	desa= (float (de)*100)/n;
	apro=(float (ap)*100)/n;
	cout<<"\t\t DESAPROBADOS: "<<desa<<" % "<<endl;
	cout<<"\t\t APROBADOS: "<<apro<<" % "<<endl;
}
