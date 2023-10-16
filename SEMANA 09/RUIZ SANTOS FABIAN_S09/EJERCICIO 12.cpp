#include <iostream>
using namespace std;

int cociente (int n, int m);
int residuo (int n,int m);
char opcion ();

int main(int argc, char *argv[]) {
	int a,b;
	char resp;
	do{
		system ("cls");
		cout<<"ingrese el dividendo: ";
		cin>>a;
		cout<<"ingrese el divisor: ";
		cin>>b;
		cout<<"el cociente de la division es: "<<cociente(a,b)<<endl;
		cout<<"el residuo de la division es: "<<residuo(a,b)<<endl;
		resp=opcion ();
	} while (resp=='s' || resp=='S'); 
	return 0;
}
int cociente (int n,int m){
	if (n<m)
		return 0;
	else
		return 1+cociente(n-m,m);
}
int residuo (int n,int m){
	if (n<m)
		return n;
	else
		return residuo(n-m,m);
}
char opcion (){
	char resp;
	do{
	cout<<" desea continuar (s/n):";
	cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
