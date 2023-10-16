#include "estructura.h"
using namespace std;
struct dato{
	float valor;
	float peso;
};
void numdato (int &n);
void ingreso (dato v[],int n);
void reportedato (dato v[],int n);
float promedioponderado (dato v[],int n);

int main(int argc, char *argv[]) {
	dato v[100];
	int n;
	numdato (n);
	ingreso (v,n);
	reportedato (v,n);
	cout<<"El promedio ponderado es: "<<promedioponderado (v,n)<<endl;
	return 0;
}
void numdato (int &n){
	do{
		cout<<"numero de datos: ";
		n=leerEntero ();
	} while(n<=0);
}
void ingreso (dato v[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<"\nDATO "<<i+1<<" :"<<endl;
		cout<<"valor ["<<i+1<<"]: ";
		v[i].valor=leerReal ();
		cout<<"peso ["<<i+1<<"]: ";
		v[i].peso=leerReal ();
	}
}
void reportedato (dato v[],int n){
	int i;
	cout<<"datos ingresados"<<endl;
	for (i=0;i<n;i++)
		cout<<v[i].valor<<", "<<v[i].peso<<endl;
}
float promedioponderado (dato v[],int n){
	int i;
	float s1=0,s2=0;
	for (i=0;i<n;i++){
		s1=s1+v[i].valor*v[i].peso;
		s2=s2+v[i].peso;
	}
	return s1/s2;
}
