#include "matriz.h"
using namespace std;

void invertircolumnas (float M[][MAX],int f,int c);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int f,c;
	char resp;
	do{
		system ("cls");
		ordenmatriz (f,c);
		ingresematriz (M,f,c);
		cout<<"\nMatriz ingresada: "<<endl;
		reporte (M,f,c);
		invertircolumnas (M,f,c);
		cout<<"\nMatriz nueva: "<<endl;
		reporte (M,f,c);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void invertircolumnas (float M[][MAX],int f,int c){
	int i,z,j;
	float temp;
	for (i=0;i<f;i++){
		for (j=0,z=c-1;j<c/2;j++,z--){
			temp=M[i][j];
			M[i][j]=M[i][z];
			M[i][z]=temp;
		}	
	}
}
