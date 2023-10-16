#include <iostream>
using namespace std;

void leernum (int &a, int &b);
void calculo (int a, int b, int &co,int &re);
void respuesta (int co, int re);
char opcion ();

int main(int argc, char *argv[]) {
	int a,b,co,re;
	char resp;
	do{
		system ("cls");
		leernum(a,b);
		calculo (a,b,co,re);
		respuesta (co,re);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void leernum (int &a, int &b){
	do{
		cout<<"ingrese el dividendo: ";
		cin>>a;
		cout<<"ingrese el divisor: ";
		cin>>b;
	} while(a<=0 && b<=0);
}
void calculo (int a, int b, int &co,int &re){
	re=a;
	co=0;
	while (re>=b){
		re=re-b;
		co++;
	}
}
void respuesta (int co, int re){
	cout<<"el cociente de la division es: "<<co<<endl;
	cout<<"el residuo de la division es: "<<re<<endl;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
	
