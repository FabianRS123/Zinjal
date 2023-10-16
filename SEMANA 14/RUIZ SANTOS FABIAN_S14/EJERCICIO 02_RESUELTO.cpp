#include "estructura.h"
using namespace std;
struct alumno {
	char nombre [40];
	float nota;
};
void reporte (int &n);
void numalumno (int &n);
void ingreso (alumno a[],int n);
void reporte (alumno a[],int n);
void ordenalfabetico (alumno a[],int n);
void ordenmerito (alumno a[],int n);

int main(int argc, char *argv[]) {
	alumno a[100];
	int n;
	numalumno (n);
	ingreso (a,n);
	ordenalfabetico (a,n);
	cout<<"lista en orden alfabetico "<<endl;
	reporte (a,n);
	ordenmerito (a,n);
	cout<<"lista en orden de merito"<<endl;
	reporte (a,n);
	return 0;
}
void numalumno(int &n){
	do{
		cout<<"numero de alumnos: ";
		n=leerEntero();
	} while(n<=0);
}
void ingreso (alumno a[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<"dato del alumno "<<i+1<<endl;
		cout<<"nombre: ";
		leerLetras(a[i].nombre);
		do{
			cout<<"Nota: ";
			a[i].nota=leerReal();
		} while(a[i].nota<0 || a[i].nota>20);
	}
}
void reporte (alumno a[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<a[i].nombre<<"\t "<<a[i].nota<<endl;
	}
}
void ordenalfabetico (alumno a[],int n){
	int i,j;
	alumno temp;
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (strcmp(a[i].nombre,a[j].nombre)>0){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
void ordenmerito (alumno a[],int n){
	int i,j;
	alumno temp;
	for (i=0;i<n;i++){
		for (j=i+1;j<n;j++){
			if (a[i].nota<a[j].nota){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
