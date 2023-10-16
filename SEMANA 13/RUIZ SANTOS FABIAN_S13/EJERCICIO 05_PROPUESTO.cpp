#include "matriz.h"
using namespace std;

void ndato (int &n);
void diagonalprincipalmodificada (float M[][MAX],int f, int c);
void diagonalprincipal2(float M[][MAX],int f, int c);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int n;
	char resp;
	do{
		system ("cls");
		ndato (n);
		diagonalprincipalmodificada (M,n,n);
		diagonalprincipal2(M,n,n);
		reporte (M,n,n);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ndato (int &n){
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
}
void diagonalprincipalmodificada (float M[][MAX],int f, int c){
	int i,j;
	for (i=f-1;i>=0;i--){
		for (j=c-1;j>=0;j--){
			if (j==i){
				M[i][j]=1;
			}
			else {
				M[i][j]=0;
			}
		}
	}
	
}
void diagonalprincipal2(float M[][MAX],int f, int c){
	int i,j;
	for (i=0,j=c-1;i<f;i++,j--){
		M[i][j]=1;
	}
}
