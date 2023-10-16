#include "vector.h"
using namespace std;

void ndatos (int &n);
void ingreso (char apellidos [][60],char nombre [][60], float d[],float m[],float a[],int n);
void ordenarapellidos (char apellidos [][60],char nombre [][60],float d[],float m[],float a[],int n);
void reporte (char apellidos [][60],char nombre [][60],float d[],float m[],float a[],int n);
void ordenarfecha (char apellidos [][60],char nombre [][60],float d[],float m[],float a[],int n);

int main(int argc, char *argv[]) {
	char apellidos [MAX][60],nombre [MAX][60],resp;
	float d [MAX],a [MAX], m [MAX];
	int n;
	do{
		system ("cls");
		ndatos (n);
		ingreso (apellidos,nombre,d,m,a,n);
		ordenarapellidos (apellidos,nombre,d,m,a,n);
		cout<<"DATOS ORDENADOS SEGUN APELLIDOS: "<<endl;
		reporte (apellidos,nombre,d,m,a,n);
		ordenarfecha (apellidos,nombre,d,m,a,n);
		cout<<"DATOS ODENADOS POR FECHA DE INSCRIPCION: "<<endl;;
		reporte (apellidos,nombre,d,m,a,n);
		resp=opcion ();
	} while (resp=='s' || resp=='S');
	return 0;
}
void ndatos (int &n){
	do{
		cout<<"ingrese el numero de datos: ";
		cin>>n;
	} while(n<=0);
}
void ingreso (char apellidos [][60],char nombre [][60], float d[],float m[],float a[],int n){
	int i;
	for (i=0;i<n;i++){
		cin.get();
		cout<<" Apellidos: ";
		cin.getline (apellidos [i],60);
		cout<<"Nombre: ";
		cin.getline (nombre[i],60);
		do{
			cout<<"FECHA DE INGRESO"<<endl;
			cout<<"dia: ";
			cin>> d [i];
			cout<<"mes: ";
			cin>> m[i];
			cout<<"año: ";
			cin>> a [i];
		} while(d[i]<0 && m[i]<0 && a[i]<0 );
	}
}
void ordenarapellidos (char apellidos [][60],char nombre [][60],float d[],float m[],float a[],int n){
	int i,j;
	char temp1 [60],temp2 [60];
	float temp3,temp4,temp5;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (strcmp(apellidos[i],apellidos[j])>0){
				strcpy (temp1,apellidos[i]);
				strcpy (apellidos [i],apellidos [j]);
				strcpy (apellidos[j],temp1);
				
				strcpy (temp2,nombre[i]);
				strcpy (nombre [i],nombre [j]);
				strcpy (nombre[j],temp2);
				
				temp3=d[i];
				d[i]=d[j];
				d[j]=temp3;
				
				temp4=m[i];
				m[i]=m[j];
				m[j]=temp4;
				
				temp5=a[i];
				a[i]=a[j];
				a[j]=temp5;
			}
		}
	}
}
void reporte (char apellidos [][60],char nombre [][60],float d[],float m[],float a[],int n){
	int i;
	for (i=0;i<n;i++){
		cout<<apellidos[i]<<", "<<nombre[i]<<", "<<d[i]<<"-"<<m[i]<<"-"<<a[i]<<endl;
	}
}
void ordenarfecha (char apellidos [][60],char nombre [][60],float d[],float m[],float a[],int n){
	int i,j;
	char temp1 [60],temp2 [60];
	float temp3,temp4,temp5;
	for (i=0;i<n-1;i++){
		for (j=i+1;j<n;j++){
			if (a[i]>a[j]){
				strcpy (temp1,apellidos[i]);
				strcpy (apellidos [i],apellidos [j]);
				strcpy (apellidos[j],temp1);
				
				strcpy (temp2,nombre[i]);
				strcpy (nombre [i],nombre [j]);
				strcpy (nombre[j],temp2);
				
				temp3=d[i];
				d[i]=d[j];
				d[j]=temp3;
				
				temp4=m[i];
				m[i]=m[j];
				m[j]=temp4;
				
				temp5=a[i];
				a[i]=a[j];
				a[j]=temp5;
			}
			if (a[i]==a[j]){
				if (m[i] > m[j]){
					strcpy (temp1,apellidos[i]);
					strcpy (apellidos [i],apellidos [j]);
					strcpy (apellidos[j],temp1);
					
					strcpy (temp2,nombre[i]);
					strcpy (nombre [i],nombre [j]);
					strcpy (nombre[j],temp2);
					
					temp3=d[i];
					d[i]=d[j];
					d[j]=temp3;
					
					temp4=m[i];
					m[i]=m[j];
					m[j]=temp4;
					
					temp5=a[i];
					a[i]=a[j];
					a[j]=temp5;
				}
			}
			if (a[i]==a[j] && m[i]==m[j]){
				if (d[i] > d[j]){
					strcpy (temp1,apellidos[i]);
					strcpy (apellidos [i],apellidos [j]);
					strcpy (apellidos[j],temp1);
					
					strcpy (temp2,nombre[i]);
					strcpy (nombre [i],nombre [j]);
					strcpy (nombre[j],temp2);
					
					temp3=d[i];
					d[i]=d[j];
					d[j]=temp3;
					
					temp4=m[i];
					m[i]=m[j];
					m[j]=temp4;
					
					temp5=a[i];
					a[i]=a[j];
					a[j]=temp5;
				}
			}
		}
	}
}
