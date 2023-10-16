#include "matriz.h"

void numeroLado(int &n);
void cuadradoMagico(float M[][MAX], int n);

int main(int argc, char *argv[]) {
	int n;
	char op;
	float M[MAX][MAX];
	do{
		system ("cls");
		cout<<endl<<"\n\t\t\t\t\t\tCUADRADO MAGICO"<<endl<<endl;
		numeroLado(n);
		cuadradoMagico(M, n);
		cout<<endl;
		op=respuesta();
		cout<<endl;
		system ("pause");
	} while(op=='s' || op=='S');
	return 0;
}
void numeroLado(int &n){
	do{
		cout<<"\n\tIngrese el numero de lado: ";
		cin>>n;
		if(n<=0)
			cout<<"\n\t\tEl numero de lado debe ser un numero positivo"<<endl;
		if(n%2==0)
			cout<<"\n\t\tEl numero debe ser un numero impar"<<endl;
	}while(n<=0 || n>MAX || n%2==0);
}
void cuadradoMagico(float M[][MAX], int n){
	int i=0, j=n/2, num;
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
