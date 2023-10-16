#include "matriz.h"
using namespace std;

void ndato (int &n);
void reportediagonales(float M[][MAX],int f,int c);
void diagonalprincipalelemtos (float M[][MAX],int f,int c);
void intercambiardiagonal (float M[][MAX],int f,int c);
void invertirdiagonal (float A[][MAX],int f,int c);
void elementosdearribayabajo(float B[][MAX],int f,int c);

int main(int argc, char *argv[]) {
	float M[MAX][MAX],X[MAX][MAX],Y[MAX][MAX];
	int n;
	char resp;
	do{
		system ("cls");
		ndato (n);
		ingresematriz1 (M,X,Y,n,n);
		cout<<"\nMatriz ingresada: "<<endl;
		reporte (M,n,n);
		reportediagonales(M,n,n);
		intercambiardiagonal (M,n,n);
		cout<<"\n\nintercambio de diagonales: "<<endl;
		reporte (M,n,n);
		invertirdiagonal (X,n,n);
		cout<<"\ndiagonal invertida: "<<endl;
		reporte (X,n,n);
		cout<<endl;
		cout<<"Las diagonales de arriba y abajo: "<<endl;
		elementosdearribayabajo (Y,n,n);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void ndato (int &n){
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
}
void reportediagonales(float M[][MAX],int f,int c){
	int i,j;
	cout<<"\nel reporte de las diagonales: ";
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			if (j==i){
				cout<<M[i][j]<<"  ";
			}
		}
	}
	for (i=0,j=c-1;i<f;i++,j--){
		cout<<M[i][j]<<"  ";
	}
}
void intercambiardiagonal (float M[][MAX],int f,int c){
	int i,j,k;
	float temp;
	for(i=0,k=0,j=f-1;i<c;i++,k++,j--){
		temp=M[i][k];
		M[i][k]=M[i][j];
		M[i][j]=temp;
	}
}
void invertirdiagonal (float A[][MAX],int f,int c){
	int i,j,k,z;
	float temp;
	for (i=0,j=c-1;i<(f+2)/2;i++,j--){
		z=c-1;
		k=0;
		while (k<(f+2)/2){
			temp=A[k][i];
			A[k][i]=A[j][z];
			A[j][z]=temp;
			k++;
			z--;
		}
	}
}
void elementosdearribayabajo(float B[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			if (i<j || i>j){
				cout<<B[i][j]<<"\t";
			}
			else
				cout<<"\t";
		}
		cout<<endl;
	}
}
