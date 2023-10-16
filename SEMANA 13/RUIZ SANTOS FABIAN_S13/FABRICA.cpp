#include "estructura.h"
using namespace std;
#define Max 100
void nmatriz (int &f, int &c);
void ingreso (float m[][MAX],int f,int c);
void reporte (float m[][MAX],int f,int c);

int main(int argc, char *argv[]) {
	float m[MAX][MAX];
	nmatriz (3,6);
	ingreso (m,3,6);
	reporte (m,3,6);
	ventaanual (m,3,6);
	mayjuni (m,3,6);
	
	return 0;
}
void nmatriz (int &f, int &c){
	do{
		cout<<"Ingrese el numero de filas: ";
		f=leerEntero ();
	} while(f<=0);
	do{
		cout<<"Ingrese el numero de columnas: ";
		c=leerEntero ();
	} while(c<=0);
}
void ingreso (float m[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			cout<<"---> DEPARTAMENTO"<<i+1<<": "<endl;
			cout<<"- MES "<<j+1<<": ";
			m[i][j]=leerReal ();
		}
	}
}
void ventaanual (float m[][MAX],int f,int c){
	int i,j,s,c=0;
	for (i=0;i<f;i++){
		s=0;
		for (j=0;j<c;j++){
			s=s+m[i][j];
			c=c+m[i][j];
		}
		cout<<"- El departamento "<<i+1<<" tuvo un total de ventas: "<<s<<endl;
	}
	cout<<"MONTO TOTAL DE TODA LA FABRICA: "<<c<<endl;
}
void mayjuni (float m[][MAX],int f,int c){
	float may,i,c;
	may=m[0][4];
	for (i=0;i<f;i++){
		if (may<m[i][4])
			may=m[i][4];
	}
	for (i=0;i<f;i++){
		if (may==m[i][4])
			c=i;
	}
	cout<<"El departamento "<<c+1<<" fue el que tuvo mayo ganacias con: "<<may<<endl;
}
void reporte (float m[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			cout<<m[i][j]<<"\t";
		}
		cout<<endl;
	}
}

