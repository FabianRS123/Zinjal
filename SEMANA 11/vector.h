#include <iostream>
using namespace std;
#define MAX 100
void numele (int &n);
void leernum (float v[], int n);
void reporte (float v[], int n);

void numele (int &n){
	do{
		cout<<"\t\tIngrese el numero de elementos: ";
		cin>>n;
	} while(n<=0);
}
void leernum (float v[], int n){
	int i;
	for (i=0;i<n;i++){
	cout<<"\t\t v ["<<i<<"]: ";
	cin>>v[i];
	}
}
void reporte (float v[], int n){
	int i;
	for (i=0;i<n;i++){
	cout<<"\t\t "<<v[i]<<endl;
	}
}
