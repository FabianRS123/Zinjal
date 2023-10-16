#include "vector.h"
using namespace std;

float medarmoni(float v[],int n);

int main(int argc, char *argv[]) {
	float x[MAX];
	int n;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingreso los datos del vector :"<<endl;
		leernum (x,n);
		cout<<"la media armonica es: "<<medarmoni(x,n)<<endl;
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
float medarmoni(float v[],int n){
	float c=0,armonica;
	int i;
	for (i=0;i<n;i++){
		c=c+1/v[i];	
	}
	armonica= n/c;
	return armonica;
}
	

