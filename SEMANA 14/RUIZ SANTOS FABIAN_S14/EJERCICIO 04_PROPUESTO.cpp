#include "estructura.h"
using namespace std;
struct trabajador{
	char cod[60];
	char nombre[60];
	float valor;
	float horastrab;
	float t;
};

void ndatos (int &n);
void ingresartrabajador (trabajador v[],int &n);
int busqueda (trabajador v[], int n,char codbus []);
void mostrartrabajador (trabajador v[],int n);
void reporte (trabajador v[],int n);
void trabajadoresordenadospornombre (trabajador v[],int n);
void mostrarpersonas (trabajador v[],int n);
void trabajadoresordenadosporsueldo(trabajador v[],int n);

int main(int argc, char *argv[]) {
	trabajador v[100];
	int n,op;
	ndatos (n);
	ingresartrabajador (v,n);
	do{
		system("cls");
		cout<<"AGENDA: "<<endl;
		cout<<"[1]Mostrar a trabajador"<<endl;
		cout<<"[2]Mostrar a trabajadores ordenados por el nombre"<<endl;
		cout<<"[3]Mostrar a trabajadores ordenados por el sueldo"<<endl;
		cout<<"[4]Salir "<<endl;
		cout<<"Ingrese una opcion (1-4): ";
		op=leerEntero ();
		switch (op){
		case 1:
			mostrartrabajador (v,n);
			break;
		case 2:
			trabajadoresordenadospornombre (v,n);
			reporte (v,n);
			mostrarpersonas (v,n);
			break;
		case 3:
			trabajadoresordenadosporsueldo (v,n);
			reporte (v,n);
			mostrarpersonas (v,n);
			break;
		}
	} while(op!=4);
	return 0;
}
void ndatos (int &n){
	do{
		cout<<"ingrese el numero de trabajadores a ingresar: ";
		n=leerEntero ();
	} while(n<=0);
}
void ingresartrabajador (trabajador v[],int &n){
	int i;
	for (i=0;i<n;i++){
		cout<<"Trabajador "<<i+1<<": "<<endl;
		cout<<"ingrese el codigo: ";
		leerLetrasYNumeros(v[i].cod);
		cout<<"ingrese el nombre: ";
		leerLetras(v[i].nombre);
		cout<<"el valor por horas: ";
		v[i].valor=leerReal ();
		cout<<"ingrese la horas trabajadas: ";
		v[i].horastrab=leerEntero ();
		v[i].t=v[i].horastrab*v[i].valor;
		system ("cls");
	}
}
int busqueda (trabajador v[], int n,char codbus []){
	int i;
	for (i=0;i<n;i++){
		if (strcmp(v[i].cod,codbus)==0)
		return i;
	}
		return -1;
}
void mostrartrabajador (trabajador v[],int n){
	char codbus [20];
	int p;
	system ("cls");
	cout<<"codigo a buscar: ";
	leerLetrasYNumeros(codbus);
	p=busqueda (v,n,codbus);
	if (p!=-1){
		cout<<"DATOS DE LA PERSONA: "<<endl;
		cout<<"Codigo: "<<v[p].cod<<endl;
		cout<<"nombre: "<<v[p].nombre<<endl;
		cout<<"valor por hora: "<<v[p].valor<<endl;
		cout<<"horas trabajadas: "<<v[p].horastrab<<endl;
		cout<<"el salario es: "<<v[p].t<<endl;
	}
	else 
		cout<<"el nombre no se encuentra"<<endl;
	system ("pause");
}
void reporte (trabajador v[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<v[i].cod<<", "<<v[i].nombre<<", valor de hora: "<<v[i].valor<<", horas trabajadas: "<<v[i].horastrab<<", sueldo: "<<v[i].t<<endl;
	}
}
void trabajadoresordenadospornombre (trabajador v[],int n){
	int i,j;
	char temp1 [20],temp2 [60];
	float temp3,temp4,temp5;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (strcmp(v[i].nombre,v[j].nombre)>0){
				strcpy (temp1,v[i].cod);
				strcpy (v[i].cod,v[j].cod);
				strcpy (v[j].cod,temp1);
				strcpy (temp2,v[i].nombre);
				strcpy (v[i].nombre,v[j].nombre);
				strcpy (v[j].nombre,temp2);
				temp3=v[i].valor;
				v[i].valor=v[j].valor;
				v[j].valor=temp3;
				temp4=v[i].horastrab;
				v[i].horastrab=v[j].horastrab;
				v[j].horastrab=temp4;
				temp5=v[i].t;
				v[i].t=v[j].t;
				v[j].t=temp5;
			}
		}
	}
}
void mostrarpersonas (trabajador v[],int n){
	system ("cls");
	cout<<"DATOS ORDENADOS"<<endl;
	reporte (v,n);
	system ("pause");
}
void trabajadoresordenadosporsueldo(trabajador v[],int n){
	int i,j;
	char temp1 [20],temp2 [60];
	float temp3,temp4,temp5;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (v[i].t<v[j].t){{
				strcpy (temp1,v[i].cod);
				strcpy (v[i].cod,v[j].cod);
				strcpy (v[j].cod,temp1);
				strcpy (temp2,v[i].nombre);
				strcpy (v[i].nombre,v[j].nombre);
				strcpy (v[j].nombre,temp2);
				temp3=v[i].valor;
				v[i].valor=v[j].valor;
				v[j].valor=temp3;
				temp4=v[i].horastrab;
				v[i].horastrab=v[j].horastrab;
				v[j].horastrab=temp4;
				temp5=v[i].t;
				v[i].t=v[j].t;
				v[j].t=temp5;
			}
		}
	}
}
}
