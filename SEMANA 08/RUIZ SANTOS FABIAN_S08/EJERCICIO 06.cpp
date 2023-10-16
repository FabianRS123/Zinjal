#include <iostream>
using namespace std;

void leernum(int &n);
void calculo(int n, int &x, int &z);
void respuesta (int s,int p);
char opcion ();

int main(int argc, char *argv[]) {
	int n,x,z;
	char resp;
	do{
		system("cls");
		leernum (n);
		calculo (n,x,z);
		respuesta (x,z);
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
void calculo(int n, int &x, int &z){
	int d,s=0,p=1;
	while (n>0){
		d=n%10;
		s=s+d;
		p=p*d;
		n=n/10;
	}
	x=s;
	z=p;
}
void respuesta (int x,int z){
	cout<<"la suma de digtos es: "<<x<<endl;
	cout<<"el producto de sus digitos es: "<<z<<endl;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
		
