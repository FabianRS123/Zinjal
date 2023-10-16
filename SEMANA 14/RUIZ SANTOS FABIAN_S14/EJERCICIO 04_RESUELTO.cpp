#include "estructura.h"
using namespace std;
struct Empleado{
	char codigo[40];
	char apellidos[40];
	char nombres[40];
	int telefono;
	float salario;
};

void numEmpleados(int &n);
void ingresoEmpleados(Empleado v[], int n);
void reporteEmpleados(Empleado v[], int n);
int busqueda(Empleado v[],int n,char codigo[]);
void consultarEmpleado(Empleado v[], int n);
void eliminarEmpleado(Empleado v[], int &n);
void ordenarPorSalario(Empleado v[], int n);
float promedioSalarios(Empleado v[], int n);

int main(int argc, char *argv[]) {
	int op,n;
	Empleado v[100];
	numEmpleados(n);
	ingresoEmpleados(v,n);
	do{
		system("cls");
		cout<<"MENU"<<endl;
		cout<<"[1] Consultar Empleado"<<endl;
		cout<<"[2] eliminar Empleado"<<endl;
		cout<<"[3] ordenar por salario en forma descendente"<<endl;
		cout<<"[4] Mostrar empleados"<<endl;
		cout<<"[5] promedio de sueldos"<<endl;
		cout<<"[6] salir"<<endl;
		cout<<"Ingrese opcion(1-6): "<<endl;
		cin>>op;
		switch(op){
		case 1: consultarEmpleado(v,n); 
			break;
		case 2: eliminarEmpleado(v,n); 
			break;
		case 3: ordenarPorSalario(v,n);
			system("cls");
			cout<<"Datos ordenados por salario"<<endl;
			reporteEmpleados(v,n);
			system("pause");
			break;
		case 4: 
			system("cls");
			reporteEmpleados(v,n);
			system("pause");
			break;
		case 5:
			system("cls");
			cout<<"El promedio de sueldos es: "<<promedioSalarios(v,n)<<endl;
			system("pause");
			break;
		}
	} while(op!=6);
	return 0;
}
void numEmpleados(int &n){
	do{
		cout<<"Numero de Empleados: ";
		n=leerEntero ();
	} while(n<=0);
}
void ingresoEmpleados(Empleado v[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"Datos del Empleado "<<i+1<<endl;
		cout<<"codigo: ";
		leerLetrasYNumeros(v[i].codigo);
		cout<<"apellidos: ";
		leerLetras(v[i].apellidos);
		cout<<"nombres: ";
		leerLetras(v[i].nombres);
		cout<<"telefono: ";
		v[i].telefono=leerEntero();
		cout<<"sueldo: ";
		v[i].salario=leerReal();
	};
}
void reporteEmpleados(Empleado v[], int n){
	int i;
	cout<<"Lista de empleados"<<endl;
	for(i=0;i<n;i++)
		cout<<v[i].codigo<<", "<<v[i].apellidos<<", "<<v[i].telefono<<", "<<v[i].salario<<endl;
}
int buscarCodigo(Empleado v[], int n, char codigo[]){
	int i;
	for(i=0;i<n;i++)
		if(strcmp(v[i].codigo,codigo)==0)
			return i;
	return -1;
}
void consultarEmpleado(Empleado v[], int n){
	int p;
	char codigo[10];
	system("cls");
	cout<<"Ingrese codigo: ";
	cin>>codigo;
	p=buscarCodigo(v,n,codigo);
	if(p!=-1){
		cout<<"Datos del empleado "<<endl;
		cout<<"Apellidos: "<<v[p].apellidos<<endl;
		cout<<"Nombres: "<<v[p].nombres<<endl;
		cout<<"telefono:"<<v[p].telefono<<endl;
		cout<<"Sueldo: "<<v[p].salario<<endl;
	}
	else
	   cout<<"Codigo no se encuentra"<<endl;
	system("pause");
}
void eliminarEmpleado(Empleado v[], int &n){
	int p;
	char codigo[10];
	system("cls");
	cout<<"Ingrese codigo: ";
	cin>>codigo;
	p=buscarCodigo(v,n,codigo);
	if(p!=-1){
		for(int i=p;i<n-1;i++)
			v[i]=v[i+1];
		n=n-1;
		cout<<"dato eliminado"<<endl;
	}
	else
	   cout<<"El codigo no se encuentra"<<endl;
	system("pause");
}
void ordenarPorSalario(Empleado v[], int n){
	int i,j;
	Empleado temp;
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		if((v[i].salario<v[j].salario)){
			temp=v[i];
			v[i]=v[j];
			v[j]=temp;
		}
}
float promedioSalarios(Empleado v[], int n){
	int i;
	float s=0;
	for(i=0;i<n;i++)
		s=s+v[i].salario;
	return s/n;
}
