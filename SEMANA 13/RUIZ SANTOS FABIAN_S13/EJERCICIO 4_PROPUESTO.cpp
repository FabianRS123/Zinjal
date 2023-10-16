#include "matriz.h"
using namespace std;

void nlado(int &n);
void cuadradomagico(float M[][MAX], int n);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int n;
	char resp;
	do{
		system ("cls");
		nlado(n);
		cuadradomagico(M,n);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void nlado(int &n){
	do{
		cout<<"Ingrese el numero de lado (numero impar): ";
		cin>>n;
	}while(n<=0 || n>MAX || n%2==0);
}
void cuadradomagico(float M[][MAX], int n){
	int i=0,j=n/2,num;
	num=1;
	M[i][j] = num;
	for(num=2; num<=n*n; num++){
		
		if(i == 0)
			i = n-1;
		else
			i--;
		if(j == n-1)
			j = 0;
		else
			j++;
		M[i][j] = num;
		
		if(num%n == 0){
			i++;
			num++;
			M[i][j] = num;
		}
		
	}
	cout<<endl<<"\t";
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++){
			cout<<"\t"<<M[i][j];
		}
			cout<<endl<<"\t";
	}
}
