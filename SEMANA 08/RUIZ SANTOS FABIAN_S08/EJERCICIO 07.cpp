#include <iostream>
using namespace std;

void leernum(int &n);
void calculo (int n,int &inv);
void reportar (int inv);
char opcion ();

int main(int argc, char *argv[]) {
	int n,inv;
	char resp;
	do{
		system ("cls"),
		leernum(n);
		calculo (n,inv);
		reportar (inv);
		resp=opcion ();
	} while (resp=='s' || resp=='S');
	return 0;
}
void leernum(int &n){
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
}
void calculo (int n,int &inv){
	int d,x=0;
	while (n>0){
		d=n%10;
		x=x*10+d;
		n=n/10;
	}
	inv=x;
}
void reportar (int inv){
	cout<<"el numero invertido es: "<<inv<<endl;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
