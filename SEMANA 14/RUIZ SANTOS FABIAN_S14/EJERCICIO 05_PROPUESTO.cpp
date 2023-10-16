#include "estructura.h"
struct fraccion{
	int numerador;
	int denominador;
};
void ndato(int &n);
void reporte(fraccion v[],int n);
void ingreso(fraccion v[],float v1[],int n);
void sumaFraccion(fraccion v[],int n,float v1[],int &num,int &dem);
void simplificar(int &num,int &dem);

int main(int argc, char *argv[]) {
	fraccion v[100];
	int n,num,dem;
	float v1[60];
	char resp;
	do{
		system("cls");
		ndato(n);
		ingreso(v,v1,n);
		cout<<"Reportamos la fraccion"<<endl;
		reporte(v,n);
		cout<<endl;
		sumaFraccion(v,n,v1,num,dem);
		cout<<"La suma de las fracciones es: "<<num<<"/"<<dem<<endl;
		simplificar(num,dem);
		cout<<"fraccion simplificada:"<<num<<"/"<<dem<<endl;
		resp=opcion();
	} while(resp=='s' || resp=='S');
	return 0;
}
void ndato(int &n){
	do{
		cout<<"numero de terminos (>0): ";
		n=leerEntero();
	} while(n<=0);
}
void reporte(fraccion v[],int n){
	int i;
	for(i=0;i<n;i++){
		if(i==0)
			cout<<v[i].numerador<<"/"<<v[i].denominador;
		else
			cout<<" + "<<v[i].numerador<<"/"<<v[i].denominador;
	}
}
void ingreso(fraccion v[],float v1[],int n){
	for(int i=0;i<n;i++){
		cout<<"Fracción "<<i+1<<endl;
		do{
			cout<<"Ingrese el numerador: ";
			v[i].numerador=leerEntero();
			if(v[i].numerador<0)
				cout<<"El numerador debe ser positivo o 0"<<endl;
		} while(v[i].numerador<0);
		do{
			cout<<"Ingrese el denominador: ";
			v[i].denominador=leerEntero();
			v1[i]=v[i].denominador;
			if(v[i].denominador<0)
				cout<<"El denominador debe ser positivo"<<endl;
			if(v[i].denominador==0)
				cout<<"no puede ser ya que saldria indefinido"<<endl;
		} while(v[i].denominador<=0);
	}
}
void sumaFraccion(fraccion v[],int n,float v1[],int &num,int &dem){
	int i,x,j,y,s,may;
	float p;
	may=v[0].denominador;
	for(i=0;i<n;i++)
		if(v[i].denominador>may){
		may=v[i].denominador;
		}
	x=2;
	p=1;
	while(x<=may){
		for(i=0;i<n;i++){
			if(v[i].denominador%x==0){
				p=p*x;
				break;
			}
		}
		for(i=0;i<n;i++){
			if(v[i].denominador%x==0){
				v[i].denominador=v[i].denominador/x;
			}
		}
		y=x;
		x++;
		for(i=0;i<n;i++)
			if(v[i].denominador%y==0){
			x--;
			break;
		}
	}
	s=0;
	dem=p;
	for(j=0;j<n;j++){
		s=s+((dem/v1[j])*v[j].numerador);
	}
	num=s;
}
void simplificar(int &num,int &dem){
	int i=2;
	while(i<=num && i<=dem){
		if(num%i==0 && dem%i==0){
			num=num/i;
			dem=dem/i;
		}
		else
		   i++;
	}
}
