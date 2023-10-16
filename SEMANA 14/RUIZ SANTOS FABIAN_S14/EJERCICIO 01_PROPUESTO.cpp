#include "estructura.h"
using namespace std;
struct alumno{
	float e1;
	float e2;
	float tra;
	float pro;
	char nombre [60];
};

void ndatos (int &n);
void ingreso (alumno v[], int n);
void promedio (alumno v[],float &proge,int n);
void reporte (alumno v[], int n);
void ordenmer (alumno v[], int n);

int main(int argc, char *argv[]) {
	alumno v[60];
	int n;
	float proge;
	char resp;
	do{
		system ("cls");
		ndatos (n);
		ingreso (v,n);
		promedio (v,proge,n);
		ordenmer (v,n);
		cout<<"DATOS EN ORDEN DE MERITO: "<<endl;
		reporte (v,n);	
		cout<<"EL PROMEDIO GENERAL ES: "<<proge<<endl;
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ndatos (int &n){
	do{
		cout<<"Numero de alumnos: ";
		cin>>n;
		system ("cls");
	} while(n<=0);
}
void ingreso (alumno v[], int n){
	int i;
	for (i=0;i<n;i++){
		cout<<"ALUMNO "<<i+1<<": "<<endl;
		cout<<" Nombre: ";
		leerLetras(v[i].nombre);
		do{
			cout<<" nota del examen 1 : ";
			v[i].e1=leerReal ();
			cout<<" nota del examen 2: ";
			v[i].e2=leerReal ();
			cout<<" nota de trabajos: ";
			v[i].tra=leerReal ();
		} while((v[i].e1<0 && v[i].e2<0 && v[i].tra<0) || (v[i].e1>20 && v[i].e2>20 && v[i].tra>20));
		system ("cls");
	}
}
void promedio (alumno v[],float &proge,int n){
	int i;
	float se=0,s=0,no;
	for (i=0;i<n;i++){
		se=v[i].e1*0.25+v[i].e2*0.25;
		no= v[i].tra*0.5;
		v[i].pro= se+no;
		s=s+v[i].pro;
	}
	proge=s/n;
}
void reporte (alumno v[], int n){
	int i;
	for (i=0;i<n;i++){
		cout<<v[i].nombre<<", el promedio ponderado es: "<<v[i].pro<<endl;
	}
}
void ordenmer (alumno v[], int n){
	int i,j;
	alumno temp;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (v[i].pro<v[j].pro){
				temp=v[i];
				v[i]=v[j];
				v[j]=temp;
			}
		}
	}
}
