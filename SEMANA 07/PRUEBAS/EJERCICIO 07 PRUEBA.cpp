#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	
	bool esdigito (char);
	
	int main(int argc, char *argv[]) {
		char caracter, rpta='N';
		bool digito= false;
		do{
			cout<<"\t\tidentificando digito"<<endl;
			cout<<"ingrese un caracter: ";
			cin>>caracter;
			digito= esdigito (caracter);
			if (digito)
				cout<<"el caracter ingresado es un digito: "<<endl;
			else 
				cout<<"el caracter ingresado no es un digito"<<endl;
			cout<<"desea ingresar otro caracter (s/n)?: ";
			cin>>rpta;
			if (rpta== 's' || rpta== 'S')
				system ("cls");
		} while(rpta== 'n' || rpta== 'N');
		return 0;
	}
	bool esdigito (char caracter){
		if (caracter>=48 && caracter<=57)
			return true;
		return false;
	}
		
	return 0;
}

