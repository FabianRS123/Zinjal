#include <iostream>
using namespace std;

void leernum(int &n);
void proceso (int n);
char opcion ();

int main(int argc, char *argv[]) {
	int n;
	char resp;
	do{
		system ("cls");
		leernum (n);
		proceso (n);
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
void proceso (int n){
	int i,j;
	for(i=1;i<=n;i++){
		cout<<" * ";
		for (j=2;j<=n;j++)
			cout<<" * ";
		cout<<endl;
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

