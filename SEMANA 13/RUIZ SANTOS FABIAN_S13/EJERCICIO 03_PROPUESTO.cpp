#include "ventas.h.h"
using namespace std;

float ventanual(float M[][MAX],int f,int c);
void mayornota(float M[][MAX],int f,int c);
void numi(int &a);
void mayor (float M[][MAX],int f,int c,int a);
void menor (float M[][MAX],int f,int c,int a);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int a;
	char resp;
	do{
		system ("cls");
		ordenmatriz (5,12);
		ingresedepa (M,5,12);
		reporteventa (M,5,12);
		cout<<"la suma anual de la fabrica es:"<<ventanual (M,5,12)<<endl;
		mayornota (M,5,12);
		numi (a);
		mayor (M,5,12,a);
		menor (M,5,12,a);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
float ventanual(float M[][MAX],int f,int c){
	float su[MAX],s=0;
	int i,j;
	for (i=0;i<f;i++){
		su[i]=0;
		for (j=0;j<c;j++){
			su[i]=su[i]+M[i][j];
		}
		s=s+su[i];
	}
	return s;
}
void mayornota(float M[][MAX],int f,int c){
	int i;
	float may,sum=0,x;
	may=M[0][6];
	for (i=0;i<f;i++){
		sum=sum+M[i][6];
			if (may<M[i][6]){
				may=M[i][6];
			}
	}
	for(i=0;i<f;i++){
		if(may==M[i][6])
			x=i;
	}
	cout<<"el departamento que tuvo mayores ventas es el departamento "<<x+1<<endl;
	cout<<"las ventas del mes de julio es: "<<sum<<endl;
}
void numi(int &a){
	do{
		cout<<"ingrese el numero del departamento (>0): ";
		cin>>a;
	} while (a<=0 || a>=5); 
}
void mayor (float M[][MAX],int f,int c,int a){
	int i,j;
	float may,x;
	i=a-1;
	may = M[i][0];
	for (j=0;j<c;j++){
		if (may<M[i][j])
			may = M[i][j];
	}
	for (j=0;j<c;j++){
		if (may==M[i][j])
			x=j;
	}
	cout<<"en el departamento "<<i+1<<" se registro una mayor venta en el mes "<<x+1<<" con "<<may<<" en ventas"<<endl; 
}
void menor (float M[][MAX],int f,int c,int a){
	int i,j;
	float men,y;
	i= a-1;
	men = M[i][0];
	for (j=0;j<c;j++){
		if (men>M[i][j])
			men = M[i][j];
	}
	for (j=0;j<c;j++){
		if (men==M[i][j])
			y=j;
	}
	cout<<"en el departamento "<<i+1<<" se registro una menor venta en el mes "<<y+1<<" con "<<men<<" en ventas"<<endl; 
}
