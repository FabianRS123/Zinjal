#include <iostream>
using namespace std;
#define MAX 100

void ndatos (int &n);
void ingreso (char nombre[][60],float estaturas [], int n);
void reporte (char nombre [][60], float estaturas [], int n);
float promedioest (float estaturas[],int n);
void mayoresalrpomedio (char nombre [][60],float estaturas [],int n);

int main(int argc, char *argv[]) {
	int n ;
	char nombre [MAX][60];
	float estaturas [MAX];
	ndatos (n);
	ingreso (nombre,estaturas,n);
	cout<<"Datos ingresados"<<endl;
	reporte (nombre,estaturas,n);
	mayoresalrpomedio (nombre,estaturas,n);
	return 0;
}
void ndatos (int &n){
	do{
		cout<<"Numero de alumnos: ";
		cin>>n;
	} while(n<=0);
}
void ingreso (char nombre[][60],float estaturas [], int n){
	int i;
	for (i=0;i<n;i++){
		cin.get();
		cout<<"Nombre: ";
		cin.getline (nombre[i],60);
		do{
			cout<<"Estatura : ";
			cin>>estaturas [i];
		} while(estaturas[i]<0);
	}
}
void reporte (char nombre [][60], float estaturas [], int n){
	int i;
	for (i=0;i<n;i++){
		cout<<nombre[i]<<", "<<estaturas[i]<<endl;
	}
}
float promedioest (float estaturas[],int n){
	float s=0;
	int i;
	for (i=0;i<n;i++){
		s=s+estaturas [i];
	}
	return s/n;
}
void mayoresalrpomedio (char nombre [][60],float estaturas [],int n){
	float pe=promedioest (estaturas,n);
	int i;
	cout<<"Promedio de las estaturas "<<pe<<endl;
	cout<<"Personas con estaturas mayores al promedio: ";
	for (i=0;i<n;i++){
		if (estaturas [i]>pe)
			cout<<nombre[i]<<endl;
	}
}
