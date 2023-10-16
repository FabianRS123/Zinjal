#include <iostream>
using namespace std;

bool numig (int n);
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
		if (numig (a))
			cout<<"los digitos del numero ingresado son iguales"<<endl;
		else
			cout<<"los digitos del numero ingresado son diferentes"<<endl;
		resp=opcion ();
	}while(resp=='s' || resp=='S');
	return 0;
}
bool numig (int n){
	if (n/10==0)
		return true;
	else{
		if (n%10==((n/10)%10))
			return numig (n/10);
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
