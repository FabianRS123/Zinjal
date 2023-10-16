#include "vector.h"
using namespace std;

void ndatos (int &n);
void ingreso (char nombre[][60],float e1 [],float e2 [],float tra [], int n);
void promedio (float e1 [], float e2 [],float tra [],float pro[],float &proge,int n);
void reporte (char nombre [][60], float pro [], int n);
void ordenmer (char nombre[][60],float pro [], int n);

int main(int argc, char *argv[]) {
	float e1[MAX],e2[MAX],tra[MAX],pro [MAX],proge;
	int n;
	char nombre [MAX][60],resp;
	do{
		system ("cls");
		ndatos (n);
		ingreso (nombre,e1,e2,tra,n);
		promedio (e1,e2,tra,pro,proge,n);
		ordenmer (nombre,pro,n);
		cout<<"DATOS EN ORDEN DE MERITO: "<<endl;
		reporte (nombre,pro,n);	
		cout<<"EL PROMDEIO GENERAL ES: "<<proge<<endl;
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ndatos (int &n){
	do{
		cout<<"Numero de alumnos: ";
		cin>>n;
	} while(n<=0);
}
void ingreso (char nombre[][60],float e1 [],float e2 [],float tra [], int n){
	int i;
	for (i=0;i<n;i++){
		cin.get();
		cout<<"Nombre: ";
		cin.getline (nombre[i],60);
		do{
			cout<<" nota del examen 1 : ";
			cin>>e1 [i];
			cout<<" nota del examne 2: ";
			cin>>e2 [i];
			cout<<"nota de trabajos: ";
			cin>>tra [i];
		} while(e1[i]<0 && e2[i]<0 && tra[i]<0 );
	}
}
void promedio (float e1 [], float e2 [],float tra [],float pro[],float &proge,int n){
	int i;
	float se=0,s=0,no;
	for (i=0;i<n;i++){
		se=e1[i]*0.25+e2[i]*0.25;
		no= tra[i]*0.5;
		pro[i]= se+no;
		s=s+pro[i];
	}
	proge=s/n;
}
void reporte (char nombre [][60], float pro [], int n){
	int i;
	for (i=0;i<n;i++){
		cout<<nombre[i]<<", el promedio ponderado es: "<<pro[i]<<endl;
	}
}
void ordenmer (char nombre[][60],float pro [], int n){
	int i,j;
	char temp1 [60];
	float temp2;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (pro[i]<pro[j]){
				strcpy (temp1,nombre[i]);
				strcpy (nombre [i],nombre [j]);
				strcpy (nombre[j],temp1);
				temp2=pro[i];
				pro[i]=pro[j];
				pro[j]=temp2;
			}
		}
	}
}
