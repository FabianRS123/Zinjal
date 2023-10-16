#include "biblioteca.h"

void numeroLado(int &n);
void reporteDiagonales(float M[][MAX],int f,int c);
void diagonalPrincipal(float M[][MAX],int f,int c);
void intercambiaDiagonales(float M[][MAX],int f, int c);
void invierteDiagonales(float A[][MAX],int f, int c);

int main(int argc, char *argv[]) {
	float M[MAX][MAX],A[MAX][MAX];
	int n;
	char op;
	do{
		system("cls");
		cout<<"\n\t\t\t\tMATRIZ CUADRADA"<<endl;
		numeroLado(n);
		cout<<"\n\tIngresamos Datos de la Matriz"<<endl;
		ingresoMatriz1(M,A,n,n);
		system("cls");
		cout<<"\n\tReportamos Datos de la Matriz"<<endl;
		reporteMatriz(M,n,n);
		cout<<"\n\tMostramos Datos de las Diagonales"<<endl;
		cout<<endl;
		reporteDiagonales(M,n,n);
		cout<<endl;
		cout<<"\n\tIntercambiamos Diagonales"<<endl;
		intercambiaDiagonales(M,n,n);
		reporteMatriz(M,n,n);
		cout<<"\n\tInvertimos Diagonales"<<endl;
		invierteDiagonales(A,n,n);
		reporteMatriz(A,n,n);
		cout<<"\n\tMostramos Datos extremos de las Diagonales"<<endl;
		cout<<endl;
		diagonalPrincipal(M,n,n);
		cout<<endl;
		op=respuesta();
	} while(op=='s' || op=='S');
	return 0;
}
void numeroLado(int &n){
	do{
		cout<<"\n\tIngrese el numero de lado: ";
		cin>>n;
		if(n<=0)
			cout<<"\n\t\tEl numero de lado debe ser un numero positivo"<<endl;
	}while(n<=0);
}
void reporteDiagonales(float M[][MAX],int f,int c){
	int i,j;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			if (j==i){
				cout<<"\t"<<M[i][j]<<"  ";
			}
		}
	}
	for (i=0,j=c-1;i<f;i++,j--){
		cout<<"\t"<<M[i][j]<<"  ";
	}
}
void diagonalPrincipal(float M[][MAX],int f,int c){
	int i,j,a=0,t=0;
	for (i=0;i<f;i++){
		for (j=0;j<c;j++){
			if (j==i){
				a++;
				if (a==1)
					cout<<"\t"<<M[i][j]<<" ";
				if (a==f)
					cout<<"\t"<<M[i][j]<<" ";
			}
		}
	}
	for (i=0,j=c-1;i<f;i++,j--){
		t++;
		if (t==1)
			cout<<"\t"<<M[i][j]<<" ";
		if (t==f)
			cout<<"\t"<<M[i][j]<<" ";
	}
}
void intercambiaDiagonales(float M[][MAX],int f, int c){
	int i,j,k;
	float temp;
	for(i=0,k=0,j=f-1;i<c;i++,k++,j--){
		temp=M[i][k];
		M[i][k]=M[i][j];
		M[i][j]=temp;
	}
}
void invierteDiagonales(float A[][MAX],int f, int c){
	int j,i,k,z,l;
	float temp;
	for(i=f-1,k=1,l=0;i>=1;i--,k++,l++){
		for(j=f-1,z=0;j>=k;j--,z++){
			temp=A[i][j];
			A[i][j]=A[z][l];
			A[z][l]=temp;
		}
	}
}
