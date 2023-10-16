#include <iostream>
using namespace std;
#define MAX 30

void ordenmatriz (int &f,int &c);
void ingresematriz(float M[][MAX],int f,int c);
void reporte (float M[][MAX],int f,int c);
float mayor (float M[][MAX],int f,int c);
float menor (float M[][MAX],int f,int c);
float promedio (float M[][MAX],int f,int c);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int f,c;
	ordenmatriz (f,c);
	ingresematriz (M,f,c);
	cout<<"La matriz ingresada es:"<<endl;
	reporte (M,f,c);
	cout<<"Mayor: "<<mayor (M,f,c)<<endl;
	cout<<"Menor: "<<menor (M,f,c)<<endl;
	cout<<"Promedio: "<<promedio (M,f,c)<<endl;
	return 0;
}
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
void ingresematriz(float M[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			cout<<"M ["<<i<<"] ["<<j<<"] : ";
			cin>>M[i][j];
		}
	}
}
void reporte (float M[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			cout<<M[i][j]<<"\t";
			cout<<endl;
		}
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
