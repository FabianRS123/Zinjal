#include <iostream>
using namespace std;

void leernum (int &n);
int calcular (int n1, int n2,int &mcd);
int calcular (int n1, int n2,int n3,int &mcd);
int calcular (int n1, int n2,int n3,int n4,int &mcd);
void maxcodi(int mcd);
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
	} while (resp=='s' || resp=='S');
	return 0;
}
void leernum (int &n){
	do{
		cout<<"la cantidad de numeros que quieres ingresar (2-4): ";
		cin>>n;
	} while(n<2 || n>4);
}
int calcular (int n1, int n2,int &mcd){
	int x=1,d=2;
	while (d<=n1 && d<=n2){
		if (n1 % d==0 && n2 % d==0){
			x=x*d;
			n1=n1/d;
			n2=n2/d;
		}
		else 
			d++;
	}
	mcd=x;
	return mcd;
}
int calcular (int n1, int n2,int n3,int &mcd){
	int x=1,d=2;
	while (d<=n1 && d<=n2 && d<=n3){
		if (n1 % d==0 && n2 % d==0 && n3 % d==0){
			x=x*d;
			n1=n1/d;
			n2=n2/d;
			n3=n3/d;
		}
		else 
			d++;
	}
	mcd=x;
	return mcd;
}
int calcular (int n1, int n2,int n3,int n4,int &mcd){
	int x=1,d=2;
	while (d<=n1 && d<=n2 && d<=n3 && d<=n4){
		if (n1 % d==0 && n2 % d==0 && n3 % d==0 && n4 % d==0){
			x=x*d;
			n1=n1/d;
			n2=n2/d;
			n3=n3/d;
			n4=n4/d;
		}
		else 
			d++;
	}
	mcd=x;
	return mcd;
}
void maxcodi(int mcd){
	cout<<" el maximo comun divisor es: "<<mcd;
}


void reporte (int n){
	int n1,n2,n3,n4,mcd;
	switch (n){
	case 2:
		cout<<"ingrese un numero: ";
		cin>>n1;
		cout<<"ingrese un numero: ";
		cin>>n2;
		calcular (n1,n2,mcd);
		maxcodi (mcd);
		break;
	case 3:
		cout<<"ingrese un numero: ";
		cin>>n1;
		cout<<"ingrese un numero: ";
		cin>>n2;
		cout<<"ingrese un numero: ";
		cin>>n3;
		calcular (n1,n2,n3,mcd);
		maxcodi (mcd);
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
		calcular (n1,n2,n3,n4,mcd);
		maxcodi (mcd);
		break;
	}
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
