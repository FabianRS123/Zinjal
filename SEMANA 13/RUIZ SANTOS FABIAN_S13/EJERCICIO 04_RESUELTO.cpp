#include "matriz.h"
using namespace std;

void mayorfila (float M[][MAX],int f,int c);

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
		mayorfila (M,f,c);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void mayorfila (float M[][MAX],int f,int c){
	int i,j;
	float may;
	for (i=0;i<f;i++){
		may=M[i][0];
		for (j=0;j<c;j++){
			if (M[i][j]>may)
				may =M[i][j];
		}
		cout<<"el mayor de la fila "<<i<<" es: "<<may<<endl;
	}
}
