#include "estructura.h"
using namespace std;
struct departamento{
	char codigo [60];
	char nombre [60];
	char depa [60];
	char grado [60];
	char nac [60];
	float salario;
	float monto;
};
void nprofesores (int &n);
void ingreso (departamento v[],int n);
void maymonto (departamento v[], int n);
void montoanual (departamento V[],int n);
float extranjeros (departamento v[],int n);
void depay (departamento v[], int n);

int main(int argc, char *argv[]) {
	departamento v[100];
	int n;
	nprofesores (n);
	ingreso (v,n);
	cout<<"\n\tEl profesor que gano mayor monto el año anterior "<<endl;
	maymonto (v,n);
	montoanual (v,n);
	cout<<"\n\tEl monto total pagado a los profesores extrajeros es: "<<extranjeros (v,n)<<endl;
	depay (v,n);
	return 0;
}
void nprofesores (int &n){
	do{
		cout<<"ingrese el numero de profesores: ";
		cin>>n;
	} while(n<=0);
}
void ingreso (departamento v[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"\nIngrese Datos del profesor "<<i+1<<endl;
		cout<<"\tIngrese su codigo: ";
		leerLetrasYNumeros (v[i].codigo);
		cout<<"\tIngrese su nombre del profesor: ";
		leerLetras(v[i].nombre);
		cout<<"\tIngrese el departamento: ";
		leerLetras (v[i].depa);
		cout<<"\tIngrese el grado academico: ";
		leerLetras (v[i].grado);
		cout<<"\tIngrese la nacionalidad: ";
		leerLetras (v[i].nac);
		do{
			cout<<"\tIngrese el salario del profesor: ";
			v[i].salario=leerReal();
			v[i].monto=v[i].salario*12;
		} while(v[i].salario<=0);
	}
}
void maymonto (departamento v[], int n){
	int i;
	float may;
	may=v[0].monto;
	for(i=0;i<n;i++)
		if(v[i].monto>may)
			may=v[i].monto;
	for(i=0;i<n;i++)
		if(may==v[i].monto){
		cout<<"\tcodigo: "<<v[i].codigo<<endl;
		cout<<"\tnombre: "<<v[i].nombre<<endl;
		cout<<"\tNacionalidad: "<<v[i].nac<<endl;
	}
}
void montoanual (departamento v[],int n){
	int i;
	float s=0;
	char depa1 [60];
	cout<<"\tingrese el departamento: ";
	leerLetras (depa1);
	for (i=0;i<n;i++){
		if (strcmp(depa1, v[i].depa)==0){
			s=s+v[i].monto;
		}
	}
	cout<<"\n\tEl monto anual pagado en el departamento de "<<depa1<<" es: "<<s<<endl;
}
float extranjeros (departamento v[],int n){
	int i;
	float s=0;
	char nac1[6]="Peru",nac2[6]="peru";
	for (i=0;i<n;i++){
		s=s+v[i].monto;
		if (strcmp(v[i].nac,nac1)==0|| strcmp(v[i].nac,nac2)==0){
			s=s-v[i].monto;
		}
	}
	if (s<0)
		return 0;
	return s;
}
void depay (departamento v[], int n){
	int i,j;
	float may=-3e10;
	char depa2 [60];
	cout<<"\n\tingrese el departamento: ";
	leerLetras (depa2);
	for(i=0;i<n;i++){
		if (strcmp(depa2,v[i].depa)==0){
			if(v[i].monto>may)
				may=v[i].monto;
		}
	}
	for(j=0;j<n;j++)
		if(may==v[j].monto){
		cout<<"\tEl que mas gano en el departamento "<<depa2<<" el año anterior fue: "<<v[j].nombre<<endl;
	}
}
