#include <iostream>
using namespace std;

void leernum(int &n);
void proceso (int n,int &j);
char opcion ();

int main(int argc, char *argv[]) {
	int n,j;
	char resp;
	do{
		system ("cls");
		leernum (n);
		proceso (n,j);
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void leernum(int &n){
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
}
void proceso (int n,int &j){
	int i;
	for (i=n;i>=1;i--){
		cout<<endl;
		for (j=1;j<=i;j++)
			cout<<"*";
	}
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
