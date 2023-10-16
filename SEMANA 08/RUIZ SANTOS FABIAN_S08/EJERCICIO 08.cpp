#include <iostream>
#include <math.h>
using namespace std;

void leernum(int &n, int &x,int &m);
void calculo (int n,int x,int &sum);
void reporte (int sum,int m,int x);
char opcion ();

int main(int argc, char *argv[]) {
	int n,x,sum,m;
	char resp;
	do{	system ("cls");
		leernum (n,x,m);
		calculo (n,x,sum);
		reporte (sum, m, x);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void leernum(int &n, int &x,int &m){
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
		cout<<"ingrese la base que quiere convertir (2-9): ";
		cin>>x;
		m=n;
	} while(n<=0 || (x<2 || x>9));
}
void calculo (int n,int x,int &sum){
	int d,a,s=0,i;
	i=1;
	while (n>0){
		d=n%10;
		n=n/10;
		a=d*(pow(x,i-1));
		s=s+a;
		i++;
	}
	sum=s;
}
void reporte (int sum,int m,int x){
	cout<<" "<<m<<" en base "<<x<<" es: "<<sum<<endl;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
	}
