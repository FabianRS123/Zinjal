#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100

void ndatos (int &n);
void ingreso (char nombre[][60],float notas [], int n);
void reporte (char nombre [][60], float notas [], int n);
void ordenalfa (char nombre[][60],float notas [], int n);
void ordenmer (char nombre[][60],float notas [], int n);

int main(int argc, char *argv[]) {
	float notas [MAX];
	int n;
	char nombre [MAX][60];
	ndatos (n);
	ingreso (nombre,notas,n);
	ordenalfa (nombre,notas,n);
	cout<<"Datos en orden alfabeticos: "<<endl;
	reporte (nombre,notas,n);
	ordenmer (nombre,notas,n);
	cout<<"DSatos en orden de merito: "<<endl;
	reporte (nombre,notas,n);
	return 0;
}
void ndatos (int &n){
	do{
		cout<<"Numero de alumnos: ";
		cin>>n;
	} while(n<=0);
}
void ingreso (char nombre[][60],float notas [], int n){
	int i;
	for (i=0;i<n;i++){
		cin.get();
		cout<<"Nombres: ";
		cin.getline (nombre[i],60);
		do{
			cout<<"Nota : ";
			cin>>notas [i];
		} while(notas[i]<0 || notas [i]>20);
	}
}
void reporte (char nombre [][60], float notas [], int n){
	int i;
	for (i=0;i<n;i++){
		cout<<nombre[i]<<", "<<notas[i]<<endl;
	}
}
void ordenalfa (char nombre[][60],float notas [], int n){
	int i,j;
	char temp1 [60];
	float temp2;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (strcmp(nombre[i],nombre[j])>0){
				strcpy (temp1,nombre[i]);
				strcpy (nombre [i],nombre [j]);
				strcpy (nombre[j],temp1);
				temp2=notas[i];
				notas[i]=notas[j];
				notas[j]=temp2;
			}
		}
	}
}
void ordenmer (char nombre[][60],float notas [], int n){
	int i,j;
	char temp1 [60];
	float temp2;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (notas[i]<notas[j]){
				strcpy (temp1,nombre[i]);
				strcpy (nombre [i],nombre [j]);
				strcpy (nombre[j],temp1);
				temp2=notas[i];
				notas[i]=notas[j];
				notas[j]=temp2;
			}
		}
	}
}
