#include <iostream>
using namespace std;

void leernum (int &n);
float calcular (float n1, float n2, float &may);
float calcular (float n1, float n2, float n3, float &may);
float calcular (float n1, float n2, float n3, float n4, float &may);
void nmayor (float may);
void reporte (int n);
char opcion ();


int main(int argc, char *argv[]) {
	int n;
	char resp;
	do{
		system ("cls");
		leernum (n);
		reporte (n);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	
	return 0;
}
void leernum (int &n){
	do{
		cout<<"la cantidad de numeros que quieres ingresar (2-4): ";
		cin>>n;
	} while(n<2 || n>4);
}
void reporte (int n){
	float n1,n2,n3,n4,may;
	switch (n){
	case 2:
		cout<<"ingrese un numero: ";
		cin>>n1;
		cout<<"ingrese un numero: ";
		cin>>n2;
		calcular (n1,n2,may);
		nmayor (may);
	break;
	case 3:
		cout<<"ingrese un numero: ";
		cin>>n1;
		cout<<"ingrese un numero: ";
		cin>>n2;
		cout<<"ingrese un numero: ";
		cin>>n3;
		calcular (n1,n2,n3,may);
		nmayor (may);
	break;
	case 4:
		cout<<"ingrese un numero: ";
		cin>>n1;
		cout<<"ingrese un numero: ";
		cin>>n2;
		cout<<"ingrese un numero: ";
		cin>>n3;
		cout<<"ingrese un numero: ";
		cin>>n4;
		calcular (n1,n2,n3,n4,may);
		nmayor (may);
	break;
	}
}
float calcular (float n1, float n2, float &may){
	if (n1>=n2)
		may=n1;
	if (n2>=n1)
		may=n2;
	return may;
}

float calcular (float n1, float n2, float n3, float &may){
	if (n1>=n2 && n1>=n3)
		may=n1;
	if (n2>=n1 && n2>=n3)
		may=n2;
	if (n3>=n1 && n3>=n2)
		may=n3;
	return may;
}
float calcular (float n1, float n2, float n3, float n4, float &may){
	if (n1>=n2 && n1>=n3 && n1>=n4 )
		may=n1;
	if (n2>=n1 && n2>=n3 && n2>=n4)
		may=n2;
	if (n3>=n1 && n3>=n2 && n3>=n4)
		may=n3;
	if (n4>=n1 && n4>=n2 && n4>=n3)
		may=n4;
	return may;
}
void nmayor (float may){
	cout<<"el numero mayor es: "<<may;
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
