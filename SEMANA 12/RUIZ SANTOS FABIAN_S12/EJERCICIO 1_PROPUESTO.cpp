#include "vector.h"
using namespace std;

void ndatos (int &dia);
void dia_semana(int dia, char nomdia []);

int main(int argc, char *argv[]) {
	int dia;
	char nomdia [MAX],resp;
	do{
		system ("cls");
		ndatos (dia);
		dia_semana (dia,nomdia);
		cout<<"DIA: "<<nomdia<<endl;
		resp=opcion ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ndatos (int &dia){
	do{
		cout<<"INGRESE UN NUMERO: ";
		cin>>dia;
	} while(dia<1 || dia>7);
}
void dia_semana(int dia, char nomdia []){
	switch (dia){
	case 1:
		nomdia [0]='L';
		nomdia [1]='U';
		nomdia [2]='N';
		nomdia [3]='E';
		nomdia [4]='S';
		nomdia [5]=0;
		break;
	case 2:
		nomdia [0]='M';
		nomdia [1]='A';
		nomdia [2]='R';
		nomdia [3]='T';
		nomdia [4]='E';
		nomdia [5]='S';
		nomdia [6]=0;
		break;
	case 3:
		nomdia [0]='M';
		nomdia [1]='I';
		nomdia [2]='E';
		nomdia [3]='R';
		nomdia [4]='C';
		nomdia [5]='O';
		nomdia [6]='L';
		nomdia [7]='E';
		nomdia [8]='S';
		nomdia [9]=0;
		break;
	case 4:
		nomdia [0]='J';
		nomdia [1]='U';
		nomdia [2]='E';
		nomdia [3]='V';
		nomdia [4]='E';
		nomdia [5]='S';
		nomdia [6]=0;
		break;
	case 5:
		nomdia [0]='V';
		nomdia [1]='I';
		nomdia [2]='E';
		nomdia [3]='R';
		nomdia [4]='N';
		nomdia [5]='E';
		nomdia [6]='S';
		nomdia [7]=0;
		break;
	case 6:
		nomdia [6]='S';
		nomdia [6]='A';
		nomdia [6]='B';
		nomdia [6]='A';
		nomdia [6]='D';
		nomdia [6]='O';
		nomdia [6]=0;
		break;
	case 7:
		nomdia [0]='D';
		nomdia [1]='O';
		nomdia [2]='M';
		nomdia [3]='I';
		nomdia [4]='N';
		nomdia [5]='G';
		nomdia [6]='O';
		nomdia [7]=0;
	}
}

