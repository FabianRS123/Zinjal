#include <iostream>
using namespace std;
bool esprimo(int n, int d);
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
		if (esprimo (a,2))
			cout<<"el numero es primo"<<endl;
		else
			cout<<"el numero no es primo"<<endl;
		resp=opcion ();
	}while(resp=='s' || resp=='S');
	return 0;
}
bool esprimo(int n, int d){
	if (n%d==0 && d==n)
		return true;
	else{
		if (n%d!=0)
			return esprimo (n,d+1);
		else
			return false;
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
