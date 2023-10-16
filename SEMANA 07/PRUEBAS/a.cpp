#include <iostream>
using namespace std;

bool digito(char);
int leernum ();
char opcion ();

int main(int argc, char *argv[]) {
	char resp;
	bool carac= false;
	do{
		carac=leernum ();
		if (digito(carac))
			cout<<"el caracter ingresado es un digito: "<<endl;
		else
			cout<<"el carac ingresado no es un digito: "<<endl;
		resp=opcion ();	
	} while(resp=='s' || resp=='S');
	
	return 0;
}
int leernum (){
	int n;
	do{
		cout<<"ingrese un caracter: ";
		cin>>n;
	} while(n<=0);
	return n;
}

bool digito(char carac){
	if (carac>=48 && carac<=57)
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
		
		
