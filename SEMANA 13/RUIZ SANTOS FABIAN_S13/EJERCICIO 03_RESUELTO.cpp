#include "matriz.h"
using namespace std;

void transpuesta (float M[][MAX],int f,int c,float t[][MAX]);

int main(int argc, char *argv[]) {
	float M[MAX][MAX], t[MAX][MAX];
	int f,c;
	char resp;
	do{
		system ("cls");
		ordenmatriz (f,c);
		ingresematriz (M,f,c);
		cout<<"La matriz ingresada es:"<<endl;
		reporte (M,f,c);
		transpuesta (M,f,c,t);
		cout<<"La mtriz transpuesta es: "<<endl;
		reporte (t,c,f);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void transpuesta (float M[][MAX],int f,int c,float t[][MAX]){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			t[j][i]=M[i][j];
		}
	}
}
