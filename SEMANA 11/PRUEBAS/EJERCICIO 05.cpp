#include "vector notas.h"
using namespace std;

void calculo (float v[], int n, int &c, int &d );
void porcentaje (int c,int d, int n);

int main(int argc, char *argv[]) {
	float x[MAX];
	int n,c,d;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingreso los datos del vector (<21):"<<endl;
		leernum (x,n);
		calculo (x,n,c,d);
		porcentaje (c,d,n);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void calculo (float v[], int n, int &c, int &d ){
	int i,cv=0,dv=0;
	for (i=0;i<n;i++){
		if (v[i]>=11)
			cv++;
		else
			dv++;		
	}
	c=cv;
	d=dv;
}
void porcentaje (int c,int d, int n){
	float apro,des;
	apro=(c*100)/n;
	des=(d*100)/n;
	cout<<" Aprobados: "<<apro<<" % "<<endl;
	cout<<" Desaprobados: "<<des<<" % "<<endl;
}
