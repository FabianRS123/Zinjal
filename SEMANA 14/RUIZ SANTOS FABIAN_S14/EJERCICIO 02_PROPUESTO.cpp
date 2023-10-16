#include "estructura.h"
using namespace std;
struct banco{
	char codigo [60];
	char nombre [60];
	float saldo;
};

void ndatos(int &n);
int busqueda(banco v[],int n,char codbus[]);
void ingreso(banco v[],int n);
void crearCuenta(banco v[],int &n);
void consultarSaldo(banco v[],int n);
void depositarSaldo(banco v[],int n);
void retirarSaldo(banco v[],int n);
void reporte(banco v[], int n);
void mostrarCuentas(banco v[],int n);

int main(int argc, char *argv[]) {
	int n,opcion;
	banco v[100];
	system("cls");
	ndatos(n);
	ingreso(v,n);
	do{
		system ("cls");
		cout<<"MENU DEL BANCO"<<endl;
		cout<<"[1] Crear una cuenta"<<endl;
		cout<<"[2] Consultar saldo"<<endl;
		cout<<"[3] Depositar saldo"<<endl;
		cout<<"[4] Retirar Saldo"<<endl;
		cout<<"[5] Mostrar cuentas ingresadas"<<endl;
		cout<<"[6] Salir"<<endl;
		cout<<"Ingrese opcion (1-6): ";
		cin>>opcion;
		switch(opcion){
		case 1: 
			crearCuenta(v,n);
			break;
		case 2: 
			consultarSaldo(v,n);
			break;
		case 3:
			depositarSaldo(v,n); 
			break;
		case 4: 
			retirarSaldo(v,n); 
			break;
		case 5: 
			mostrarCuentas(v,n);
			break;
		}
	} while(opcion!=6);
	return 0;
}
void ndatos(int &n){
	do{
		cout<<"Ingrese el total de clientes: "; 
		n=leerEntero ();
	} while(n<=0);
}
int busqueda(banco v[],int n,char codbus[]){
	int i;
	for(i=0;i<n;i++){
		if (strcmp(v[i].codigo,codbus)==0)
			return i;
	}
	return -1;
}
void ingreso(banco v[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<"Ingrese los datos del cliente "<<i+1<<" : "<<endl;
		cout<<"Ingrese su nombre: ";
		leerLetras(v[i].nombre);
		cout<<"Ingrese su codigo: ";
		leerLetrasYNumeros(v[i].codigo);
		do{
			cout<<"Ingrese su saldo: ";
			v[i].saldo=leerReal ();
		} while(v[i].saldo<0);
	}
}
void crearCuenta(banco v[],int &n){
	cout<<"Ingrese datos del nuevo cliente"<<endl;
	cout<<"Ingrese su nombre: ";
	leerLetras(v[n].nombre);
	cout<<"Ingrese su codigo: ";
	leerLetrasYNumeros(v[n].codigo);
	cout<<"Ingrese su saldo: ";
	v[n].saldo=leerReal ();
	n++;
}
void consultarSaldo(banco v[],int n){
	char codbus[60];
	int p;
	system("cls");
	cout<<"Ingrese codigo del cliente: ";
	leerLetrasYNumeros(codbus);
	p=busqueda(v,n,codbus);
	if (p!=-1){
		cout<<"DATOS DEL CLIENTE"<<endl;
		cout<<"Codigo: "<<v[p].codigo<<endl;
		cout<<"Nombre: "<<v[p].nombre<<endl;
		cout<<"EL Saldo del Cliente es: "<<v[p].saldo<<endl;
	}
	else 
		cout<<"El codigo no se encuentra"<<endl;
	system("pause");
}
void depositarSaldo(banco v[],int n){
	char  codbus[60];
	float d;
	int p;
	system("cls");
	cout<<"Ingrese codigo del cliente: ";
	leerLetrasYNumeros(codbus);
	p=busqueda(v,n,codbus);
	if (p!=-1){
		cout<<"DATOS DEL CLIENTE"<<endl;
		cout<<"Codigo: "<<v[p].codigo<<endl;
		cout<<"Nombre: "<<v[p].nombre<<endl;
		cout<<"Saldo: "<<v[p].saldo<<endl;
		cout<<"cuanto de saldo depositara: ";
		d=leerReal();
		v[p].saldo=v[p].saldo+d;
		cout<<"EL saldo nuevo es: "<<v[p].saldo<<endl;
	}
	else {
		cout<<"El codigo no se encuentra"<<endl;
		cout<<endl;
	}
	system("pause");
}
void retirarSaldo(banco v[],int n){
	char  codbus[60];
	float r;
	int p;
	system("cls");
	cout<<"Ingrese codigo del cliente: ";
	leerLetrasYNumeros(codbus);
	p=busqueda(v,n,codbus);
	if (p!=-1){
		cout<<"Datos del Cliente"<<endl;
		cout<<"Codigo: "<<v[p].codigo<<endl;
		cout<<"Nombre: "<<v[p].nombre<<endl;
		cout<<"Saldo: "<<v[p].saldo<<endl;
		do{
			cout<<"Ingrese cuanto saldo retirara: ";
			r=leerReal();
			if(r<=0 || r>v[p].saldo)
				cout<<"El retiro debe ser un cantidad positiva y menor al saldo que se tiene actualmente"<<endl;
		} while(r<=0 || r>v[p].saldo);
		v[p].saldo=v[p].saldo-r;
		cout<<"El saldo nuevo es: "<<v[p].saldo<<endl;
	}
	else {
		cout<<"El codigo no se encuentra"<<endl;
		cout<<endl;
	}
	system("pause");
}
void reporte(banco v[], int n){
	int i;
	for (i=0; i<n; i++){
		cout<<v[i].nombre<<" , "<<v[i].codigo<<" , "<<v[i].saldo<<endl;
	}
}
void mostrarCuentas(banco v[],int n){
	system("cls");
	cout<<"Datos de Todas las Personas: "<<endl;
	reporte(v,n);
	system("pause");
}
