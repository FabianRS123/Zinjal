#include <iostream>
using namespace std;

int mcm (int a, int b);
char opcion ();
	
int main(int argc, char *argv[]) {
	int a,b;
	char resp;
	do{
		system ("cls");
		do{
		cout<<"ingrese un numero: ";
		cin>>a;
		cout<<"ingrese un numero: ";
		cin>>b;
		}while(a<=0 && b<=0);
		cout<<"el m.c.m es: "<<a*b/mcm(a,b)<<endl;
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}

int mcm (int a, int b){
	if (a>=b && a%b==0)
		return b;
	else 
		return mcm(b,a%b);
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
		
