#include <iostream>
using namespace std;

int leernum ();
bool esCapicua(int x);
char opcion ();

int main(int argc, char *argv[]) {
	int x;
	char resp;
	do{
		system ("cls");
		x=leernum ();
		if (esCapicua (x))
			cout<<"el numero es capicua"<<endl;
		else
			cout<<"el numero no es capicua"<<endl;
		resp=opcion ();
	}while (resp=='s' || resp=='S');
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
bool esCapicua(int x){
	int z=0,d,a;
	a=x;
	while (x>0){
		d=x%10;
		z=z*10+d;
		x=x/10;
	}
	if (a==z)
		return true;
	else 
		return false;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
	}

