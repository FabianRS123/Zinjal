#include "estructura.h"
struct empleados{
	int cod;
	char nombre[60];
	float venta;
	float salario;
};
void nempleados(int &n);
void ingreso(empleados v[],int n);
void mayventas(empleados v[],int n);
void incrementosalario(empleados v[],int n);
void maypromedio(empleados v[],int n);
int main(int argc, char *argv[]) {
	empleados v[100];
	int n;
	char resp;
	do{
		system("cls");
		nempleados(n);
		ingreso(v,n);
		cout<<"\nDatos del Empleado quien obtuvo mayor Ventas Anuales"<<endl;
		mayventas(v,n);
		cout<<"\nIncrementamos el 10% de salario a los empleados que obtuvieron ventas anuales mayores a 100000"<<endl;
		cout<<"\nnuevos salarios:"<<endl;
		incrementosalario(v,n);
		cout<<"\nEmpleados que obtuvieron ventas inferiores al promedio de ventas anuales"<<endl;
		maypromedio(v,n);
		resp=opcion();
	} while(resp=='s' || resp=='S');
	return 0;
}
void nempleados(int &n){
	do{
		cout<<"cantidad de empleados: ";
		n=leerEntero();
	} while(n<=0);
}
void ingreso(empleados v[],int n){
	int i;
	for(i=0;i<n;i++){
		cout<<"\nDatos del Empleado "<<i+1<<endl;
		cout<<"\tIngrese su codigo: ";
		v[i].cod=leerEntero();
		cout<<"\tIngrese su nombre: ";
		leerLetras(v[i].nombre);
		do{
			cout<<"\tIngrese ventas anuales: ";
			v[i].venta=leerReal();
		} while(v[i].venta<=0);
		do{
			cout<<"\tIngrese el salario de este empleado: ";
			v[i].salario=leerReal();
		} while(v[i].salario<=0);
	}
}
void mayventas(empleados v[],int n){
	int i;
	float may;
	may=v[0].venta;
	for(i=0;i<n;i++)
		if(v[i].venta>may)
			may=v[i].venta;
	for(i=0;i<n;i++)
		if(may==v[i].venta){
			cout<<"\tSu codigo es: "<<v[i].cod<<endl;
			cout<<"\tSu nombre es: "<<v[i].nombre<<endl;
	}
}
void incrementosalario(empleados v[],int n){
	int i;
	for(i=0;i<n;i++)
		if(v[i].venta>100000)
			v[i].salario=v[i].salario+0.1*v[i].salario;
	for(i=0;i<n;i++)
		cout<<"Empleado "<<i+1<<", Salario: "<<v[i].salario<<endl;   
}
void maypromedio(empleados v[],int n){
	int i;
	float su=0,pro;
	for(i=0;i<n;i++){
		su=su+v[i].venta;
	}
	pro=su/n;
	for(i=0;i<n;i++)
		if(v[i].venta<pro)
			cout<<"\n\tEmpleado "<<i+1<<", Nombre: "<<v[i].nombre<<", Codigo: "<<v[i].cod<<"Ventas Anuales: "<<v[i].venta<<endl;
}
