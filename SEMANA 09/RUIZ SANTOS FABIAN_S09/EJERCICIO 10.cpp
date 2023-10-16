#include <iostream>
using namespace std;

int sumpar (int n);
char opcion ();

int main(int argc, char *argv[]) {
	int a;
	char resp;
	do{
		system ("cls");
		do{
			cout<<"ingrese un numero: ";
			cin>>a;
		} while(a<=0);
		cout<<"la suma de digitos pares es: "<<sumpar(a)<<endl;
		resp=opcion ();
	}while(resp=='s' || resp=='S');
	return 0;
}
int sumpar (int n){
	int dig=n%10;
	if (n==0)
		return 0;
	else {
		if (dig%2==0)
			return dig+sumpar (n/10);
		else
			return sumpar (n/10);
	}
	
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
	
