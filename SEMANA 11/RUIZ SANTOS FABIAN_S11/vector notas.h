#include <iostream>
using namespace std;
#define MAX 100
void numele (int &n);
void leernum(float v[], int n);
void numeing (float v[], int n);
char opcion ();

void numele (int &n){
	do{
		cout<<"El numero de notas que quiere ingresar: ";
		cin>>n;
	} while(n<=0 || n>MAX);
}
void leernum(float v[], int n){
	int i;
	for (i=0;i<n;i++){
		do{
		cout<<" v ["<<i<<"]: ";
		cin>>v[i];
		}while (v[i]>=21);
	}
}
void numeing (float v[], int n){
	int i;
	for (i=0;i<n;i++){
		cout<<v[i]<<endl;
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

