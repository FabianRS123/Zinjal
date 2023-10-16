#include <iostream>
using namespace std;

int leernum ();
int sumdig (int x);
char opcion ();

int main(int argc, char *argv[]) {
	int x;
	char resp;
	do{system ("cls");
		x=leernum ();
		cout<<"la suma de digitos es: "<<sumdig(x)<<endl;
		resp=opcion ();	
	} while(resp=='s' || resp=='S');
	return 0;
}

int leernum (){
	int n;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	return n;
}
int sumdig (int x){
	int d,s=0;
	while (x>0){
		d=x%10;
		s=s+d;
		x=x/10;
	}
	return s;
}	
char opcion (){
		char resp;
		do{
			cout<<" desea continuar (s/n):";
			cin>>resp;
		} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
		return resp;
	}
		
		
