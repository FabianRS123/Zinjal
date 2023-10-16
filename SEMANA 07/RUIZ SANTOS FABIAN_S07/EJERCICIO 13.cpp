#include <iostream>
using namespace std;

int leernum ();
void proceso (int x);
char opcion ();

int main(int argc, char *argv[]) {
	int x;
	char resp;
	do{system ("cls");
		x=leernum ();
		proceso (x);
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	
	return 0;
}

int leernum (){
	int n;
	do{
		cout<<"ingresar un numero:";
		cin>>n;
	} while(n<=0);
	return n;
}
void proceso (int x){
		int i,j;
		for (i=1;i<=x;i++){
			for (j=1;j<=i;j++)
				cout<<j<<" ";
			cout<<endl;
		}
		for (i=x-1; i>=1; i--){
			for (j=1;j<=i;j++)
				cout<<j<<" ";
			cout<<endl;
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
			
