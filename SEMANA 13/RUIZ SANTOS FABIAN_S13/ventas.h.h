#include <iostream>
using namespace std;
#define MAX 70

void ordenmatriz (int f,int c);
void ingresematriz(float M[][MAX],int f,int c);
void reporte (float M[][MAX],int f,int c);
float mayor (float M[][MAX],int f,int c);
float menor (float M[][MAX],int f,int c);
float promedio (float M[][MAX],int f,int c);
char opcion ();
void ndatos (int f,int c);
void reportedato (float M[][MAX],int f,int c);

void ordenmatriz (int f,int c){
	cout<<"Calculo de ventas : "<<endl;
}
void ingresedepa (float M[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			do{
				cout<<"departamento "<<i+1<<" ventas del mes "<<j+1<<" : ";
				cin>>M[i][j];
			}while (M[i][j]<0 || M[i][j]>=10000);
		}
		system ("cls");
	}
}
void reporte (float M[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			cout<<M[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void reporteventa (float M[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		cout<<"departamento "<<i+1<<": ";
		for (j=0;j<c;j++){
			cout<<M[i][j]<<"\t";
		}
		cout<<endl;
	}
}
float mayor (float M[][MAX],int f,int c){
	int i,j;
	float may=M[0][0];
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			if (M[i][j]>may)
				may=M[i][j];
		}
	}
		return may;
}
float menor (float M[][MAX],int f,int c){
	int i,j;
	float men=M[0][0];
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			if (M[i][j]<men)
				men=M[i][j];
		}
	}
		return men;
}
float promedio (float M[][MAX],int f,int c){
	int i,j;
	float sum=0;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			sum=sum+M[i][j];
		}
	}
	return sum/(f*c);
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
