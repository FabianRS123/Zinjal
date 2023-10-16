#include "estructura.h"
using namespace std;
struct alumnos{
	char codigo[60];
	char nombre [60];
	char apellidos [60];
	float d;
	float m;
	float a;
};
void ndatos (int &n);
void ingreso (alumnos v[],int n);
void reporte (alumnos v[],int n);
void ordenarfecha (alumnos v[],int n);

int main(int argc, char *argv[]) {
	alumnos v[100];
	int n;
	char resp;
	do{
		system ("cls");
		ndatos (n);
		ingreso (v,n);
		ordenarfecha (v,n);
		cout<<"DATOS ODENADOS POR FECHA DE INSCRIPCION: "<<endl;;
		reporte (v,n);
		resp=opcion ();
	} while (resp=='s' || resp=='S');
	return 0;
}
void ndatos (int &n){
	do{
		cout<<"ingrese el numero de alumnos: ";
		n=leerEntero ();
	} while(n<=0);
}
void ingreso (alumnos v[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<"\nALUMNO "<<i+1<<": "<<endl;
		cout<<" Codigo: ";
		leerLetrasYNumeros (v[i].codigo);
		cout<<" Apellidos: ";
		leerLetras(v[i].apellidos);
		cout<<" Nombre: ";
		leerLetras(v[i].nombre);
		do{
			cout<<"FECHA DE INGRESO"<<endl;
			cout<<" dia: ";
			v[i].d=leerEntero ();
			cout<<" mes: ";
			v[i].m=leerEntero ();
			cout<<" año: ";
			v[i].a=leerEntero ();
		} while(v[i].d<0 && v[i].m<0 && v[i].a<0 );
	}
}
void reporte (alumnos v[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<v[i].codigo<<", "<<v[i].apellidos<<", "<<v[i].nombre<<", "<<v[i].d<<"-"<<v[i].m<<"-"<<v[i].a<<endl;
	}
}
void ordenarfecha (alumnos v[],int n){
	int i,j;
	char temp [60],temp1 [60],temp2 [60];
	float temp3,temp4,temp5;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (v[i].a>v[j].a){
				strcpy (temp,v[i].codigo);
				strcpy (v[i].codigo,v[j].codigo);
				strcpy (v[j].codigo,temp);
				
				strcpy (temp1,v[i].apellidos);
				strcpy (v[i].apellidos,v[j].apellidos);
				strcpy (v[j].apellidos,temp1);
				
				strcpy (temp2,v[i].nombre);
				strcpy (v[i].nombre,v[j].nombre);
				strcpy (v[j].nombre,temp2);
				
				temp3=v[i].d;
				v[i].d=v[j].d;
				v[j].d=temp3;
				
				temp4=v[i].m;
				v[i].m=v[j].m;
				v[j].m=temp4;
				
				temp5=v[i].a;
				v[i].a=v[j].a;
				v[j].a=temp5;
			}
			if (v[i].a==v[j].a){
				if (v[i].m > v[j].m){
					strcpy (temp,v[i].codigo);
					strcpy (v[i].codigo,v[j].codigo);
					strcpy (v[j].codigo,temp);
					
					strcpy (temp1,v[i].apellidos);
					strcpy (v[i].apellidos,v[j].apellidos);
					strcpy (v[j].apellidos,temp1);
					
					strcpy (temp2,v[i].nombre);
					strcpy (v[i].nombre,v[j].nombre);
					strcpy (v[j].nombre,temp2);
					
					temp3=v[i].d;
					v[i].d=v[j].d;
					v[j].d=temp3;
					
					temp4=v[i].m;
					v[i].m=v[j].m;
					v[j].m=temp4;
					
					temp5=v[i].a;
					v[i].a=v[j].a;
					v[j].a=temp5;
				}
			}
			if (v[i].a==v[j].a && v[i].m==v[j].m){
				if (v[i].d > v[j].d){
					strcpy (temp,v[i].codigo);
					strcpy (v[i].codigo,v[j].codigo);
					strcpy (v[j].codigo,temp);
					
					strcpy (temp1,v[i].apellidos);
					strcpy (v[i].apellidos,v[j].apellidos);
					strcpy (v[j].apellidos,temp1);
					
					strcpy (temp2,v[i].nombre);
					strcpy (v[i].nombre,v[j].nombre);
					strcpy (v[j].nombre,temp2);
					
					temp3=v[i].d;
					v[i].d=v[j].d;
					v[j].d=temp3;
					
					temp4=v[i].m;
					v[i].m=v[j].m;
					v[j].m=temp4;
					
					temp5=v[i].a;
					v[i].a=v[j].a;
					v[j].a=temp5;
				}
			}
		}
	}
}
