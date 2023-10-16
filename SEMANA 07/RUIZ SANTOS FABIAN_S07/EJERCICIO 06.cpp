#include <iostream>
using namespace std;

int leernum ();
void catest (int n1);
char opcion ();

int main(int argc, char *argv[]) {
	int n1;
	char resp;
	do{	
		system("cls");
		n1=leernum ();
		catest (n1);
		resp=opcion();
	} while(resp=='s' || resp=='S');
	return 0;
}

int leernum (){
	int n;
	do{
		cout<<"ingrese una nota: ";
		cin>>n;
	} while(n<=0);
	return n;
}
void catest (int n1){
	if (n1>=17)
		cout<<"categoria A "<<endl;
	else
		if (n1>=14 && n1<17)
			cout<<"categoria B "<<endl;
		else
			if (n1>=12 && n1<14)
				cout<<"categoria C "<<endl;
			else
				if (n1<12)
					cout<<"categoria D "<<endl;
}
char opcion (){
		char resp;
		do{
			cout<<" desea continuar (s/n):";
			cin>>resp;
		} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
		return resp;
	}
		
	
