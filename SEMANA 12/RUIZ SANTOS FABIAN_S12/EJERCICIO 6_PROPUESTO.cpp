#include "vector.h"
using namespace std;

void ndatos(int &n);
void ingreso(float cant[],float peso[],int n);
float calcularpropon(float cant[],float peso[],int n);
char continuar();

int main(int argc, char *argv[]) {
	float cant[MAX],peso[MAX];
	int n;
	char resp;
	do{
		system("cls");
		ndatos(n);
		ingreso(cant,peso,n);
		cout<<"El promedio ponderado de los datos es: "<<calcularpropon(cant,peso,n)<<endl;
		resp=opcion();
	} while(resp=='s' || resp=='S');
	return 0;
}
void ndatos(int &n){
	do{
		cout<<"numero de datos: ";
		cin>>n;
	} while(n<=0);
}
void ingreso(float cant[],float peso[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"Cantidad "<<i+1<<": ";
		cin>>cant[i];
		cout<<"Peso: ";
		cin>>peso[i];
	}
}
float calcularpropon(float cant[],float peso[],int n){
	int i;
	float x=0,y=0,propon;  
	for(i=0;i<n;i++){
		x=x+cant[i]*peso[i];
		y=y+peso[i];
	}
	propon=x/y;
	return propon;
}
	
