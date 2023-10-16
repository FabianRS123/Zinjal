#include <iostream>
using namespace std;
void leernum(int &n);
void proceso (int n,int &h,int &m,int &s);
void reporte (int h,int m,int s);
char opcion ();

int main(int argc, char *argv[]) {
	int n,h,m,s;
	char resp;
	do{
		system ("cls");
			leernum(n);
			proceso (n,h,m,s);
			reporte (h,m,s);
			resp=opcion ();
	}while(resp=='s' || resp=='S');
	return 0;
}
void leernum(int &n){
	do{
		cout<<"ingrese el numero de segundos: ";
		cin>>n;
	} while(n<=0);
}
void proceso (int n,int &h,int &m,int &s ){
	h=n/3600;
	n=n%3600;
	m=n/60;
	s=n%60;
}
void reporte (int h,int m,int s){
	cout<<h<<" horas, "<<m<<" minutos, "<<s<<" segundos"<<endl;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
	}
