#include "matriz.h"
using namespace std;

void recorrido (float M[][MAX],int f,int c);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int f,c;
	char resp;
	do{
		system("cls");
		ordenmatriz (f,c);
		ingresematriz (M,f,c);
		cout<<"\nMatriz ingresada: "<<endl;
		reporte (M,f,c);
		recorrido (M,f,c);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void recorrido (float M[][MAX],int f,int c){
	int i,j;
	cout<<"recorrido: ";
	for (j=0;j<c;j++){
		if (j%2==0){
			for (i=0;i<f;i++)
				cout<<M[i][j]<<"\t";
		}
		else{
			for (i=f-1;i>=0;i--)
				cout<<M[i][j]<<"\t";
		}
	}
}
