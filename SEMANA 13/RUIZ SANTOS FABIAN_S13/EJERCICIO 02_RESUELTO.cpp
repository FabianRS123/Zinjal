#include "matriz.h"
using namespace std;

void sufilas (float M[][MAX],int f,int c,float sumaf[MAX]); 
void sucolumanas (float M[][MAX],int f,int c,float sumac[MAX]);

int main(int argc, char *argv[]) {
	float M[MAX][MAX], sumaf[MAX],sumac[MAX];
	int f,c,i,j;
	ordenmatriz (f,c);
	ingresematriz (M,f,c);
	cout<<"La matriz ingresada es:"<<endl;
	reporte (M,f,c);
	sufilas (M,f,c,sumaf);
	for (i=0;i<f;i++){
		cout<<"la suma de la fila "<<i<<" = "<<sumaf[i]<<endl;
	}
	sucolumanas (M,f,c,sumac);
	for (j=0;j<c;j++){
		cout<<"la suma de la columna "<<j<<" = "<<sumac[j]<<endl;
	}
	return 0;
}
void sufilas (float M[][MAX],int f,int c,float sumaf[MAX]){
	int i,j;
	for (i=0;i<f;i++){
		sumaf[i]=0;
		for (j=0;j<c;j++){
			sumaf[i]=sumaf[i]+M[i][j];
		}
	}
}
void sucolumanas (float M[][MAX],int f,int c,float sumac[MAX]){
	int i,j;
	for (j=0;j<c;j++){
		sumac[j]=0;
		for (i=0;i<f;i++){
			sumac[j]=sumac[j]+M[i][j];
		}
	}
}

