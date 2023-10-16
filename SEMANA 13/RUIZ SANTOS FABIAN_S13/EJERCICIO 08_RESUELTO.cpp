#include "matriz.h"
using namespace std;

void ordenfi (float M[][MAX],int f,int c);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int f,c;
	char resp;
	do{
		system ("cls");
		ordenmatriz (f,c);
		ingresematriz (M,f,c);
		cout<<"La matriz ingresada es:"<<endl;
		reporte (M,f,c);
		ordenfi (M,f,c);
		cout<<"La matriz ordenada por filas es: "<<endl;
		reporte (M,f,c);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void ordenfi (float M[][MAX],int f,int c){
	int i,j,k;
	float temp;
	for (i=0;i<f;i++){
		for (j=0;j<c-1;j++)
			for (k=j+1;k<c;k++){
			if (M[i][j]>M[i][k]){
				temp=M[i][j];
				M[i][j]=M[i][k];
				M[i][k]=temp;
			}
		}
	}
}
