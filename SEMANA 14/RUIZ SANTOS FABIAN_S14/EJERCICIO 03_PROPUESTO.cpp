#include "estructura.h"
using namespace std;
struct polinomio{
	int coef;
};
void ngrado (int &n);
void valor (int &x);
void poli(polinomio v[] ,int n);
float calculo (polinomio v[],int n,int x);
void reportep (polinomio v[] ,int n);

int main(int argc, char *argv[]) {
	polinomio v[100];
	int x,n;
	char resp;
	do{
		system ("cls");
		ngrado (n);
		valor (x);
		poli (v,n);
		reportep (v,n);
		cout<<"EL VALOR DEL POLINOMIO: "<<calculo (v,n,x)<<endl;
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ngrado (int &n){
	do{
		cout<<"El grado del polinomio: ";
		n=leerEntero ();
	} while(n<=0);
}
void valor (int &x){
	cout<<"ingrese un valor para la X: ";
	x=leerEntero ();
}
void poli(polinomio v[] ,int n){
	int i;
	for (i=n;i>=0;i--){
		if (i==0){
			cout<<"ULTIMO TERMINO"<<endl;
		}
		else
			cout<<"TERMINO "<<i+1<<": "<<endl;
		cout<<"ingrese un valor para el coeficinete: ";
		v[i].coef=leerReal ();
	}
}
void reportep (polinomio v[] ,int n){
	int i;
	cout<<"la ecuacion polinomica es: ";
	for (i=n;i>=0;i--){
		if (i!=0){
			if (i==n)
				if(v[i].coef>0 ||v[i].coef<0)
					cout<<v[i].coef;
				else
					cout<<"";
			else
				if (v[i].coef>0)
					cout<<"+"<<v[i].coef<<"x^"<<i;
				else
					if(v[i].coef<0)
					cout<<v[i].coef<<"x^"<<i;
					else
						cout<<"";
		}
		else
			if(v[i].coef>0)
			cout<<"+"<<v[i].coef<<endl;
			else
				if(v[i].coef<0)
				cout<<v[i].coef;
				else
					cout<<"";
	}
	cout<<endl;
}
float calculo (polinomio v[],int n,int x){
	int i,s=0;
	for (i=n;i>=0;i--){
		s=s+v[i].coef*pow(x,i);
	}
	return s;
}
