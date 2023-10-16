#include "matriz.h"
using namespace std;

void invertirfilas (float M[][MAX],int f,int c);

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
		invertirfilas (M,f,c);
		cout<<"\nMatriz nueva: "<<endl;
		reporte (M,f,c);
		resp=opcion ();
	} while (resp=='s' || resp=='S');
	return 0;
}
void invertirfilas (float M[][MAX],int f,int c){
	int i,z,j;
	float temp;
	for (j=0;j<c;j++){
		for (i=0,z=f-1;i<f/2;i++,z--){
			temp=M[i][j];
			M[i][j]=M[z][j];
			M[z][j]=temp;
		}	
	}
}
	
