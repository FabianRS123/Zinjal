#include <iostream>
using namespace std;
#define MAX 100
void numele (int &n);
void leernum(float v[], int n);
void numeing (float v[], int n);
void ordenar(float v[],int n);
char opcion ();

void numele (int &n){
	do{
		cout<<"Ingrese el numero de elementos: ";
		cin>>n;
	} while(n<=0 || n>MAX);
}
void leernum(float v[], int n){
	int i;
	for (i=0;i<n;i++){
		cout<<" v ["<<i<<"]: ";
		cin>>v[i];
	}
}
void numeing (float v[], int n){
	int i;
	for (i=0;i<n;i++){
		cout<<v[i]<<endl;
	}
}
void ordenar(float v[],int n){
	int i,j;
	float temp;
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
			if (v[i]>v[j]){
				temp=v[i];
				v[i]=v[j];
				v[j]=temp;
	}
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
		return resp;
}
	

