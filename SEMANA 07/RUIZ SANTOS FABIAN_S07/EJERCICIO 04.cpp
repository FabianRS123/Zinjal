#include <iostream>
using namespace std;

int leernum ();
int nmenor (int a, int b, int c);
char opcion ();

int main(int argc, char *argv[]) {
	int a,b,c;
	char resp;
	do{
		system ("cls");
			a=leernum ();
			b=leernum ();
			c=leernum ();
			cout<<"el numero menor es: "<<nmenor(a,b,c)<<endl;
			resp=opcion ();
	} while(resp=='s' || resp=='S');
	
	
	return 0;
}
int leernum (){
	int n;
	cout<<"ingrese un numero: ";
	cin>>n;
	return n;
}

int nmenor(int a, int b, int c){
	double men;
	men=1e30;
	if (a<men)
		men=a;
	if (b<men)
		men=b;
	if (c<men)
		men=c;
	return men;
}
	char opcion (){
		char resp;
		do{
			cout<<" desea continuar (s/n):";
			cin>>resp;
		} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
		return resp;
	}
