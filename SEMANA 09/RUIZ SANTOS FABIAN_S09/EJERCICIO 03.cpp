#include <iostream>
using namespace std;

int producto (int n, int m);
void reporte (int x);
char opcion ();

int main(int argc, char *argv[]) {
	int a,b,r;
	char resp;
	do{
		system ("cls");
		cout<<"ingrese el multiplicando: ";
		cin>>a;
		cout<<"ingrese el multiplicador: ";
		cin>>b;
		r=producto(a,b);
		reporte (r);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
int producto (int n, int m){
	if (m==0 || n==0)
		return 0;
	if (m>0)
		return n+producto(n,m-1);
	else
		return -n-producto(n,-m-1);
}
void reporte (int x){
	cout<<"el resutado de la multiplicacion es: "<<x<<endl;
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
