#include "biblioteca4.h"
using namespace std;

void reportesinRepetir(float v[],int n);

int main(int argc, char *argv[]) {
	int n;
	float v[MAX];
	char op;
	do{
		system ("cls");
		cout<<endl<<"\t\t\t\t\tELIMINANDO DATOS REPETIDOS DE UN VECTOR"<<endl<<endl;
		numeroDatos(n);
		cout<<"\n\t\tIngresamos Datos del Vector "<<endl;
		ingresarVector(v,n);
		cout<<"\n\t\tReportamos los Datos Ingresados"<<endl;
		reporteVector(v,n);
		cout<<"\n\t\t\tMostrando el Vector sin Datos Repetidos"<<endl;
		reportesinRepetir(v,n);
		op=respuesta();
		cout<<endl;
		system ("pause");
		cout<<endl;
	} while(op=='s' || op=='S');
	return 0;
}

void reportesinRepetir(float v[], int n){
	int i, j=0,k,z=0,c,n1;
	float v1[MAX];
	for (i=0; i<n; i++){
		c=0;
		n1=v[i];
		v1[j]=n1;
		j++;
		for (k=0; k<n; k++)
			if(v1[k]==n1)
				c++;
		if(c==1){
			v[z]=n1;
			z++;
		}
	}
	for(i=0; i<z; i++)
		cout<<"\n\t\t\t\tv["<<i<<"]: "<<v[i]<<endl;
}
