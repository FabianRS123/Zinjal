#include <iostream>
using namespace std;
#define MAX 30

void ordenmatriz (int &f,int &c);
void ingresematriz(float M[][MAX],int f,int c);
void reporte (float M[][MAX],int f,int c);
float mayor (float M[][MAX],int f,int c);
float menor (float M[][MAX],int f,int c);
float promedio (float M[][MAX],int f,int c);
char opcion ();
void ndatos (int &f,int c);
void reportedato (float M[][MAX],int f,int c);
void ingresematriz1(float M[][MAX],float A[][MAX],float B[][MAX],int f,int c);

void ordenmatriz (int &f,int &c){
	do{
		cout<<"ingrese el numero de filas: ";
		cin>>f;
	} while(f<=0 || f>MAX);
	do{
		cout<<"ingrese el numero de columnas: ";
		cin>>c;
	} while(c<=0 || c>MAX);
}
void ndatos (int &f,int c){
	do{
		cout<<"ingrese el numero de alumnos: ";
		cin>>f;
	} while(f<=0 || f>MAX);
}
void ingresematriz(float M[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			cout<<"M ["<<i<<"] ["<<j<<"] : ";
			cin>>M[i][j];
		}
	}
}
void ingresematriz1(float M[][MAX],float A[][MAX],float B[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			cout<<"M ["<<i<<"] ["<<j<<"] : ";
				cin>>M[i][j];
				A[i][j]=M[i][j];
				B[i][j]=M[i][j];
		}
	}
}
void ingresonota (float M[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			do{
				cout<<"Ingrese nota del alumno "<<i+1<<" examen "<<j+1<<" : ";
				cin>>M[i][j];
			}while (M[i][j]<0 || M[i][j]>=21);
		}
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
void reportenota (float M[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		cout<<"alumno "<<i+1<<": ";
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
