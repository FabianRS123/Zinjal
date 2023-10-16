#include "matriz.h"
using namespace std;

void eliminar (float M[][MAX],int f,int &c,int col);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int f,c,col;
	char resp;
	do{
		system ("cls");
		ordenmatriz (f,c);
		ingresematriz (M,f,c);
		cout<<"La matriz ingresada es:"<<endl;
		reporte (M,f,c);
		do{
			cout<<"columna a eliminar: ";
			cin>>col;
		} while(col<0 || col>=c);
		eliminar (M,f,c,col);
		cout<<"matriz nueva: "<<endl;
		reporte (M,f,c);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void eliminar (float M[][MAX],int f,int &c,int col){
	int i,j;
	for (i=0;i<f;i++)
		for (j=col;j<c-1;j++)
			M[i][j]=M[i][j+1];
	c--;
}
