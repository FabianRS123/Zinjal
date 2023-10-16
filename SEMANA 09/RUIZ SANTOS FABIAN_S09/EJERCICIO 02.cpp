#include <iostream>
using namespace std;

int sumapar(int n);
void reporte (int n);
char opcion ();

int main(int argc, char *argv[]) {
	int a,r;
	char resp;
	do{
		system ("cls");
		do{
			cout<<"ingrese el numero de terminos: ";
			cin>>a;
		} while(a<=0);
		r= sumapar (a);
		reporte (r);
		resp=opcion ();
	}while(resp=='s' || resp=='S');
	return 0;
}
int sumapar(int n){
	if (n<=0)
		return 0;
	else 
		return 2*n-1+sumapar(n-1);
}
void reporte (int n){
	cout<<"la suma de pares es: "<<n<<endl;
}
char opcion (){
	char resp;
	do{
	cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
