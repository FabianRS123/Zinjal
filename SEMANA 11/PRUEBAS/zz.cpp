#include "vector.h"
using namespace std;

void eliminarn (float v[], int &n);
//void reporte (float v[], int n);

int main(int argc, char *argv[]) {
	float a[MAX];
	int n;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingrese los datos del vector:"<<endl;
		leernum (a,n);
		//ordenar (a,n);
		//cout <<"la lista ordenada es: "<<endl;
		cout<<"La lista de numeros es: "<<endl;
		eliminarn (a,n);
		ordenar (a,n);
		numeing (a,n);
		//reporte (a,n);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void eliminarn (float v[], int &n){
	int i,j,s;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(v[i]==v[j]){
				for(s=j;s<n-1;s++){
					v[s]=v[s+1];
					n--;
					j=i;
				}
			}
		}
	}
	n--;
}
	/*void reporte (float v[], int n){
	int i;
	for(i=0;i<n;i++)
	cout<<v[i]<<endl;
	}*/
