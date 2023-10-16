#include "vector.h"
using namespace std;

void numero (int &z);
int calculo (float v[], int n,int z);

int main(int argc, char *argv[]) {
	float x[MAX];
	int n,z;
	char resp;
	do{
		system ("cls");
		numele (n);
		cout<<" Ingrese los datos del vector:"<<endl;
		leernum (x,n);
		numero (z);
		cout<<"Las veces que se repite el numero "<<z<<" es: "<<calculo (x,n,z)<<endl;
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void numero (int &z){
	cout<<"ingrese el numero: ";
	cin>>z;
}
int calculo (float v[], int n,int z){
	int i,y=0;
	for (i=0;i<n;i++){
		if (v[i]==z)
			y++;
	}
	return y;
}
