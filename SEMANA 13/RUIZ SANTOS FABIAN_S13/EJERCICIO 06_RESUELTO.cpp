#include "matriz.h"
using namespace std;

void insertarf (float M[][MAX],int &f,int c,int fil);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int f,c,fil;
	char resp;
	do{
		system ("cls");
		ordenmatriz (f,c);
		ingresematriz (M,f,c);
		cout<<"La matriz ingresada es:"<<endl;
		reporte (M,f,c);
		do{
			cout<<"numero de filas a insertar: ";
			cin>>fil;
		} while(fil<0 || fil>f);
		insertarf (M,f,c,fil);
		cout<<"matriz nueva: "<<endl;
		reporte (M,f,c);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void insertarf (float M[][MAX],int &f,int c,int fil){
	int i,j;
	for (i=f-1;i>=fil;i--)
		for (j=0;j<c;j++)
		M[i+1][j]=M[i][j];
		cout<<"Nueva fila"<<endl;
		for (j=0;j<c;j++){
			cout<<"M ["<<fil<<"] ["<<j<<"]: ";
			cin>>M[fil][j];
		}
		f++;
}
