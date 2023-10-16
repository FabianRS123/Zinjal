#include "matriz.h"
using namespace std;

void intercambio (float M[][MAX],int f,int c,int col1,int col2);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int f,c,col1,col2;
	char resp;
	do{
		system ("cls");
		ordenmatriz (f,c);
		ingresematriz (M,f,c);
		cout<<"La matriz ingresada es:"<<endl;
		reporte (M,f,c);
		do{
			cout<<"columna 1 a intercambiar: ";
			cin>>col1;
		} while(col1<0 || col1>=c);
		do{
			cout<<"columna 2 a intercambiar: ";
			cin>>col2;
		} while(col2<0 || col2>=c);
		intercambio (M,f,c,col1,col2);
		cout<<"matriz nueva: "<<endl;
		reporte (M,f,c);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void intercambio (float M[][MAX],int f,int c,int col1,int col2){
	int i;
	float temp;
	for (i=0;i<f;i++){
		temp=M[i][col1];
		M[i][col1]=M[i][col2];
		M[i][col2]=temp;
	}
}
