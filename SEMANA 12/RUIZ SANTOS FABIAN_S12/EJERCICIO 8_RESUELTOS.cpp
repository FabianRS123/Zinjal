#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100

void ingresarpersona (char nombre [][60],char telefono [][20],char fechanac [][20],int &n);
int busqueda (char nombre [][60],int n, char nombus []);
void consultarpersona (char nombre [][60],char telefono [][20],char fechanac [][20],int n);
void modificarpersona (char nombre [][60], char telefono [][20], char fechanac [][20], int n);
void eliminar (char nombre[][60], char telefono[][20], char fechanac[][20], int &n, int p);
void eliminarpersona (char nombre [][60], char telefono [][20], char fechanac [][20], int &n);
void reporte (char nombre [][60], char telefono [][20], char fechanac [][20],int n);
void mostrarpersonas (char nombre [][60],char telefono [][20],char fechanac [][20],int n);

int main(int argc, char *argv[]) {
	char nombre [MAX][60],telefono [MAX][20],fechanac [MAX][20];
	int n=0,op;
	do{
		system ("cls");
		cout<<"AGENDA"<<endl;
		cout<<"[1]Ingresar persona "<<endl;
		cout<<"[2]consultar persona "<<endl;
		cout<<"[3]modificar persona "<<endl;
		cout<<"[4]eliminar persona "<<endl;
		cout<<"[5]mostrar personas "<<endl;
		cout<<"[6] Salir "<<endl;
		cout<<"Ingrese opcion (1-6): ";
		cin>>op;
		cin.get();
		switch (op){
		case 1:
			ingresarpersona (nombre,telefono,fechanac,n );
			break;
		case 2:
			consultarpersona (nombre,telefono,fechanac,n);
			break;
		case 3:
			modificarpersona (nombre, telefono, fechanac,n);
			break;
		case 4:
			eliminarpersona (nombre,telefono,fechanac,n);
			break;
		case 5:
			mostrarpersonas (nombre, telefono, fechanac,n);
			break;
		}
	} while(op!=6);
	return 0;
}
void ingresarpersona (char nombre [][60],char telefono [][20],char fechanac [][20],int &n){
	system ("cls");
	cout<<"Ingrese Nombre: ";
	cin.getline(nombre[n],60);
	cout<<"Ingrese telefono: ";
	cin.getline (telefono [n],20);
	cout<<"Ingrese fecha de nacimiento: ";
	cin.getline (fechanac[n],20);
	n++;
}
int busqueda (char nombre [][60],int n, char nombus []){
	int i;
	for (i=0;i<n;i++){
		if (strcmp(nombre [i],nombus)==0)
			return i;
	}
	return -1;
}
void consultarpersona (char nombre [][60],char telefono [][20],char fechanac [][20],int n){
	char nombus [60];
	int p;
	system ("cls");
	cout<<"nombre a buscar: ";
	cin.getline (nombus,60);
	p=busqueda (nombre,n,nombus);
	if (p!=-1){
		cout<<"Datos de la persona"<<endl;
		cout<<"Nombre: "<<nombre[p]<<endl;
		cout<<"telefono: "<<telefono [p]<<endl;
		cout<<"fecha de nacimiento: "<<fechanac[p]<<endl;
	}
	else
		cout<<"el nombre no se encuentra"<<endl;
	system ("pause");
}
void modificarpersona (char nombre [][60], char telefono [][20], char fechanac [][20], int n){
	char nombus [60];
	int p;
	system ("cls");
	cout<<"nombre a modificar: ";
	cin.getline (nombus,60);
	p=busqueda (nombre,n,nombus);
	if (p!=-1){
		cout<<"datos de la persona"<<endl;
		cout<<"nombre: "<<nombre [p]<<endl;
		cout<<"telefono: "<<telefono [p]<<endl;
		cout<<"fecha de nacimiento: "<<fechanac [p]<<endl;
		cout<<"nuevo nombre: ";
		cin.getline (nombre[p],60);
		cout<<"nueo telefono: ";
		cin.getline (telefono [p],20);
		cout<<"nueva fecha de nacimiento: ";
		cin.getline (fechanac [p],20);
		
	}
	else 
		cout<<"el nombre no se encuentra"<<endl;
	system ("pause");
}
void eliminar (char nombre[][60], char telefono[][20], char fechanac[][20], int &n, int p){
	int i;
	for (i=p;i<n-1;i++){
		strcpy (nombre [i],nombre [i+1]);
		strcpy (telefono [i],telefono [i+1]);
		strcpy (fechanac [i],fechanac [i+1]);
	}
	n=n-1;
}
void eliminarpersona (char nombre [][60], char telefono [][20], char fechanac [][20], int &n){
	char nombus [60];
	int p;
	system ("cls");
	cout<<"nombre a eliminar: ";
	cin>>nombus;
	p=busqueda (nombre,n,nombus);
	if (p!=-1){
		eliminar (nombre,telefono,fechanac,n,p);
		cout<<"dato eliminado "<<endl;
	}
	else 
		cout<<"el dato no se encuentra"<<endl;
	system ("pause");
}
void reporte (char nombre [][60], char telefono [][20], char fechanac [][20],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<nombre [i]<<", "<<telefono [i]<<", "<<fechanac [i]<<endl;
	}
}
void mostrarpersonas (char nombre [][60],char telefono [][20],char fechanac [][20],int n){
	system ("cls");
	cout<<"personas"<<endl;
	reporte (nombre,telefono,fechanac,n);
	system ("pause");
}
