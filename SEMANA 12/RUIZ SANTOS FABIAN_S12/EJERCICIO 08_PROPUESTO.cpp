#include <iostream>
#include <string.h>
using namespace std;
#define MAX 1000

void ingresartrabajador (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int &n,float t[]);
int busqueda (char codigo [][20], int n,char codbus);
void mostrartrabajador (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]);
void modificartrabajador (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]);
void eliminar(char codigo [][20],char nombre [][60],float valor[], float horastrab[],int &n,float t[],int p);
void eliminartrabajador(char codigo [][20],char nombre [][60],float valor[], float horastrab[],int &n,float t[]);
void reporte (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]);
void trabajadoresordenadospornombre (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]);
void trabajadoresordenadosporsueldo(char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]);
void mostrarpersonas (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]);

int main(int argc, char *argv[]) {
	char codigo [MAX][20],nombre [MAX][60],op;
	float valor[MAX],horastrab[MAX],t[MAX];
	int n;
	do{
		system("cls");
		cout<<"AGENDA: "<<endl;
		cout<<"[a]Registrar trabajador"<<endl;
		cout<<"[b]Mostrar a trabajador"<<endl;
		cout<<"[c]Modificar trabajador"<<endl;
		cout<<"[d]Eliminar"<<endl;
		cout<<"[e]Mostrar a trabajadores ordenados por el nombre"<<endl;
		cout<<"[f]Mostrar a trabajadores ordenados por el sueldo"<<endl;
		cout<<"Ingrese una opcion (a-g): ";
		cin>>op;
		switch (op){
		case 'a':case 'A':
			ingresartrabajador (codigo,nombre,valor,horastrab,n,t );
			break;
		case 'b':case 'B':
			mostrartrabajador (codigo,nombre,valor,horastrab,n,t);
			break;
		case 'c':case 'C':
			modificartrabajador (codigo,nombre,valor,horastrab,n,t);
			break;
		case 'd':case 'D':
			eliminartrabajador (codigo,nombre,valor,horastrab,n,t);
			break;
		case 'e':case 'E':
			trabajadoresordenadospornombre (codigo,nombre,valor,horastrab,n,t);
			reporte (codigo,nombre,valor,horastrab,n,t);
			mostrarpersonas (codigo,nombre,valor,horastrab,n,t);
			break;
		case 'f':case 'F':
			trabajadoresordenadosporsueldo (codigo,nombre,valor,horastrab,n,t);
			reporte (codigo,nombre,valor,horastrab,n,t);
			mostrarpersonas (codigo,nombre,valor,horastrab,n,t);
			break;
		}
	} while(op!=7);
	return 0;
}
void ingresartrabajador (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int &n,float t[]){
	system("cls");
	cin.get();
	cout<<"Ingrese codigo: ";
	cin.getline (codigo [n],20);
	cout<<"Ingrese Nombre: ";
	cin.getline(nombre[n],60);
	cout<<"Ingrese valor por hora: ";
	cin>>valor [n];
	cout<<"Ingrese las horas trabajadas: ";
	cin>>horastrab [n];
	t[n]=valor[n]*horastrab[n];
	n++;
}
int busqueda (char codigo [][20], int n,char codbus []){
	int i;
	for (i=0;i<n;i++){
		if (strcmp(codigo[i],codbus)==0)
		return i;
	}
		return -1;
}
void mostrartrabajador (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]){
	char codbus [20];
	int p;
	system ("cls");
	cin.get();
	cout<<"codigo a buscar: ";
	cin.getline (codbus,20);
	p=busqueda (codigo,n,codbus);
	if (p!=-1){
		cout<<"DATOS DE LA PERSONA: "<<endl;
		cout<<"Codigo: "<<codigo[p]<<endl;
		cout<<"nombre: "<<nombre [p]<<endl;
		cout<<"valor por hora: "<<valor[p]<<endl;
		cout<<"horas trabajadas: "<<horastrab[p]<<endl;
		cout<<"el salario es: "<<t[p]<<endl;
	}
	else 
		cout<<"el nombre no se encuentra"<<endl;
	system ("pause");
}
void modificartrabajador (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]){
	char codbus [20];
	int p;
	system("cls");
	cin.get();
	cout<<"codigo a modificar: ";
	cin.getline (codbus,20);
	p=busqueda (codigo,n,codbus);
	if (p!=-1){
		cout<<"DATOS DE LA PERSONA"<<endl;
		cout<<"Codigo: "<<codigo[p]<<endl;
		cout<<"nombre: "<<nombre [p]<<endl;
		cout<<"valor por hora: "<<valor[p]<<endl;
		cout<<"horas trabajadas: "<<horastrab[p]<<endl;
		cout<<"el salario es: "<<t[p]<<endl;
		cout<<endl<<"NUEVOS DATOS"<<endl;
		cout<<"Ingrese codigo: ";
		cin.getline (codigo [p],20);
		cout<<"Ingrese Nombre: ";
		cin.getline(nombre[p],60);
		cout<<"Ingrese valor por hora: ";
		cin>>valor [p];
		cout<<"Ingrese las horas trabajadas: ";
		cin>>horastrab [p];
		t[p]=valor[p]*horastrab[p];
	}
	else
		cout<<"el nombre no se encuentra"<<endl;
	system("pause");
}
void eliminar(char codigo [][20],char nombre [][60],float valor[], float horastrab[],int &n,float t[],int p){
	int i;
	for (i=p;i<n-1;i++){
		strcpy (codigo [i],codigo [i+1]);
		strcpy (nombre [i],nombre [i+1]);
		valor [i] = valor [i+1];
		horastrab [i] = horastrab [i+1];
		t[i] = t[i+1];
	}
	n--;
}
void eliminartrabajador(char codigo [][20],char nombre [][60],float valor[], float horastrab[],int &n,float t[]){
	char codbus [20];
	int p;
	system ("cls");
	cin.get ();
	cout<<"codigo a eliminar: ";
	cin.getline (codbus,20);
	p=busqueda (codigo,n,codbus);
	if (p!=-1){
		eliminar (codigo,nombre,valor,horastrab,n,t,p);
		cout<<"Dato eliminado"<<endl;
	}
	else
		cout<<"el dato no se encuentra"<<endl;
	system ("pause");
}
void reporte (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]){
	int i;
	for (i=0;i<n;i++){
		cout<<codigo [i]<<", "<<nombre [i]<<", valor de hora: "<<valor [i]<<", horas trabajadas: "<<horastrab [i]<<", sueldo: "<<t[i]<<endl;
	}
}
void trabajadoresordenadospornombre (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]){
	int i,j;
	char temp1 [20],temp2 [60];
	float temp3,temp4,temp5;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (strcmp(nombre[i],nombre[j])>0){
				strcpy (temp1,codigo[i]);
				strcpy (codigo [i],codigo [j]);
				strcpy (codigo[j],temp1);
				strcpy (temp2,nombre[i]);
				strcpy (nombre [i],nombre [j]);
				strcpy (nombre[j],temp2);
				temp3=valor[i];
				valor[i]=valor[j];
				valor[j]=temp3;
				temp4=horastrab[i];
				horastrab[i]=horastrab[j];
				horastrab[j]=temp4;
				temp5=t[i];
				t[i]=t[j];
				t[j]=temp5;
			}
		}
	}
}
void mostrarpersonas (char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]){
	system ("cls");
	cout<<"DATOS ORDENADOS"<<endl;
	reporte (codigo,nombre,valor,horastrab,n,t);
	system ("pause");
}
void trabajadoresordenadosporsueldo(char codigo [][20],char nombre [][60],float valor[], float horastrab[],int n,float t[]){
	int i,j;
	char temp1 [20],temp2 [60];
	float temp3,temp4,temp5;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (t[i]<t[j]){{
				strcpy (temp1,codigo[i]);
				strcpy (codigo [i],codigo [j]);
				strcpy (codigo[j],temp1);
				strcpy (temp2,nombre[i]);
				strcpy (nombre [i],nombre [j]);
				strcpy (nombre[j],temp2);
				temp3=valor[i];
				valor[i]=valor[j];
				valor[j]=temp3;
				temp4=horastrab[i];
				horastrab[i]=horastrab[j];
				horastrab[j]=temp4;
				temp5=t[i];
				t[i]=t[j];
				t[j]=temp5;
			}
		}
	}
}
}
