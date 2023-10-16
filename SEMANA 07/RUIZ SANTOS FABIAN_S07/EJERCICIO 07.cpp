#include <iostream>
using namespace std;

bool esdigito (char);
char opcion ();

int main(int argc, char *argv[]) {
	char car,resp;
	bool dto= false;
	do{	system ("cls");
		cout<<"ingrese un caracter: ";
		cin>>car;
		dto= esdigito (car);
		if (dto)
			cout<<"el caracter ingresado es un digito: "<<endl;
		else 
			cout<<"el caracter ingresado no es un digito"<<endl;
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
bool esdigito (char car){
	if (car>=48 && car<=57)
		return true;
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
		
		
