#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	do{
		system("cls");
		cout<<"AGENDA: "<<endl;
		cout<<"[1]Registrar trabajador"<<endl;
		cout<<"[2]Mostrar a trabajador"<<endl;
		cout<<"[3]Modificar trabajador"<<endl;
		cout<<"[4]Eliminar"<<endl;
		cout<<"[5]Mostrar a trabajadores ordenados por el nombre"<<endl;
		cout<<"[6]Salir"<<endl;
		cout<<"Ingrese una opcion (1-6): ";
		cin>>op;
		switch (op){
		case 1:
			crearcuenta ()
		}
	return 0;
}
void crearcuenta (char codigo [][20],char nombre [][60], float saldo [], int &n){
	int i;
	for (i=0;i<n;i++){
		system("cls");
		cin.get();
		cout<<"Ingrese codigo: ";
		cin.getline (codigo [i],20);
		cout<<"Ingrese Nombre: ";
		cin.getline(nombre[i],60);
		do{
			cout<<"ingrese su saldo: ";
			cin>>saldo [i];
		} while(saldo[<0);
	}
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
