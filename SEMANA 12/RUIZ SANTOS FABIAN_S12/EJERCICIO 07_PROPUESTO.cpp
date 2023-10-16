#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100
void ndatos(int &n);
int busqueda(char codigo[][60],int n,char codbus[]);
void ingreso(char codigo[][60],char nombre[][60],float saldo[],int n);
void crearCuenta(char codigo[][60],char nombre[][60],float saldo[],int &n);
void consultarSaldo(char codigo[][60],char nombre[][60],float saldo[],int n);
void depositarSaldo(char codigo[][60],char nombre[][60],float saldo[],int n);
void retirarSaldo(char codigo[][60],char nombre[][60],float saldo[],int n);
void reporte(char codigo[][60], char nombre[][60],float saldo[], int n);
void mostrarCuentas(char codigo[][60],char nombre[][60],float saldo[],int n);
int main(int argc, char *argv[]) {
	int n,opcion;
	char codigo[MAX][60],nombre[MAX][60]; 
	float saldo[MAX];
	system("cls");
	ndatos(n);
	ingreso(codigo,nombre,saldo,n);
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
		cin.get();
		switch(opcion){
		case 1: 
			crearCuenta(codigo,nombre,saldo,n);
			break;
		case 2: 
			consultarSaldo(codigo,nombre,saldo,n);
			break;
		case 3:
			depositarSaldo(codigo,nombre,saldo,n); 
			break;
		case 4: 
			retirarSaldo(codigo,nombre,saldo,n); 
			break;
		case 5: 
			mostrarCuentas(codigo,nombre,saldo,n);
			break;
		}
	} while(opcion!=6);
	return 0;
}
void ndatos(int &n){
	do{
		cout<<"Ingrese el total de clientes: "; 
		cin>>n;
	} while(n<=0);
}
int busqueda(char codigo[][60],int n,char codbus[]){
	int i;
	for(i=0;i<n;i++){
		if (strcmp(codigo[i],codbus)==0)
			return i;
	}
	return -1;
}
void ingreso(char codigo[][60],char nombre[][60],float saldo[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<"Ingrese los datos del cliente "<<i+1<<" : "<<endl;
		cin.get ();
		cout<<"Ingrese su nombre: ";
		cin.getline(nombre[i],60);
		cout<<"Ingrese su codigo: ";
		cin.getline(codigo[i],60);
		do{
			cout<<"Ingrese su saldo: ";
			cin>>saldo[i];
		} while(saldo[i]<0);
	}
}
void crearCuenta(char codigo[][60],char nombre[][60],float saldo[],int &n){
	cout<<"Ingrese datos del nuevo cliente"<<endl;
	cout<<"Ingrese su nombre: ";
	cin.getline(nombre[n],60);
	cout<<"Ingrese su codigo: ";
	cin.getline(codigo[n],60);
	cout<<"Ingrese su saldo: ";
	cin>>saldo[n];
	n++;
}
void consultarSaldo(char codigo[][60],char nombre[][60],float saldo[],int n){
	char codbus[60];
	int p;
	system("cls");
	cout<<"Ingrese codigo del cliente: ";
	cin>>codbus;
	p=busqueda(codigo,n,codbus);
	if (p!=-1){
		cout<<"DATOS DEL CLIENTE"<<endl;
		cout<<"Codigo: "<<codigo[p]<<endl;
		cout<<"Nombre: "<<nombre[p]<<endl;
		cin.get();
		cout<<"EL Saldo del Cliente es: "<<saldo[p]<<endl;
	}
	else 
		cout<<"El codigo no se encuentra"<<endl;
	system("pause");
}
void depositarSaldo(char codigo[][60],char nombre[][60],float saldo[],int n){
	char  codbus[60];
	float d;
	int p;
	system("cls");
	cout<<"Ingrese codigo del cliente: ";
	cin>>codbus;
	p=busqueda(codigo,n,codbus);
	if (p!=-1){
		cout<<"DATOS DEL CLIENTE"<<endl;
		cout<<"Codigo: "<<codigo[p]<<endl;
		cout<<"Nombre: "<<nombre[p]<<endl;
		cin.get();
		cout<<"Saldo: "<<saldo[p]<<endl;
		cout<<"cuanto de saldo depositara: ";
		cin>>d;
		saldo[p]=saldo[p]+d;
		cout<<"EL saldo nuevo es: "<<saldo[p]<<endl;
	}
	else {
		cout<<"El codigo no se encuentra"<<endl;
		cout<<endl;
	}
	system("pause");
}
void retirarSaldo(char codigo[][60],char nombre[][60],float saldo[],int n){
	char  codbus[60];
	float r;
	int p;
	system("cls");
	cout<<"Ingrese codigo del cliente: ";
	cin>>codbus;
	p=busqueda(codigo,n,codbus);
	if (p!=-1){
		cout<<"Datos del Cliente"<<endl;
		cout<<"Codigo: "<<codigo[p]<<endl;
		cout<<"Nombre: "<<nombre[p]<<endl;
		cin.get();
		cout<<"Saldo: "<<saldo[p]<<endl;
		cout<<"cuanto de saldo va retirar: ";
		cin>>r;
		saldo[p]=saldo[p]-r;
		cout<<"El saldo nuevo es: "<<saldo[p]<<endl;
	}
	else {
		cout<<"El codigo no se encuentra"<<endl;
		cout<<endl;
	}
	system("pause");
}
void reporte(char codigo[][60],char nombre[][60],float saldo[], int n){
	int i;
	for (i=0; i<n; i++){
		cout<<nombre[i]<<" , "<<codigo[i]<<" , "<<saldo[i]<<endl;
	}
}
void mostrarCuentas(char codigo[][60],char nombre[][60],float saldo[],int n){
	system("cls");
	cout<<"Datos de Todas las Personas: "<<endl;
	reporte(codigo,nombre,saldo,n);
	system("pause");
}
