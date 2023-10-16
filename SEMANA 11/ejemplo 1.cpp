#include "vector.h"
using namespace std;

void maymen(float v[], int n);
void promedio (float v[], int n);

int main(int argc, char *argv[]) {
	float x[MAX];
	int n;
	cout<<"\n\n\t\t\tNUMEROS MAYOR - MENOR - PROMEDIO "<<endl;
	numele (n);
	leernum (x,n);
	cout<<"\t\tLos numeros ingresados son: "<<endl;
	reporte (x,n);
	maymen (x,n);
	promedio (x,n);
	return 0;
}
void maymen(float v[], int n){
	int i;
	double may,men;
	may= -1e30;
	men= 1e30;
	for (i=0;i<n;i++){
		if(v[i]>may)
			may=v[i];
		if (v[i]<men)
			men=v[i];
	}
	cout<<"\n\t\t El numero mayor es: "<<may<<endl;
	cout<<"\t\t El numero menor es: "<<men<<endl;
}
void promedio (float v[], int n){
	int i,s=0;
	float pro;
	for (i=0;i<n;i++){
		s=s+v[i];
	}
	pro = s/n;
	cout<<"\t\t El promedio es: "<<pro<<endl;
}
