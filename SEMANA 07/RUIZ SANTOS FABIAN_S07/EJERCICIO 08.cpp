#include <iostream>
using namespace std;

int leernum ();
bool esPerfecto (int n);
char opcion ();

int main(int argc, char *argv[]) {
	int n1;
	char resp;
	do{
		system("cls");
		n1=leernum ();
		if (esPerfecto (n1))
			cout<<"el numero es perfecto"<<endl;
		else 
			cout<<"el numero no es perfecto"<<endl;
		resp=opcion();
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
bool esPerfecto (int n1){
	int cd=0,i;
	for (i=1;i<n1;i++){
		if (n1%i==0)
		cd=cd+i;
	}
	if (cd==n1)
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
		
		
