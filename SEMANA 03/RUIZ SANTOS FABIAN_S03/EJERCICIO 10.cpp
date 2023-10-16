#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char j1,j2;
	cout<<"ingrese lo elegido del primer jugador [roca(R), papel(P) o tijera(T)]: ";
	cin>>j1;
	cout<<"ingrese lo elegido del segundo jugador [roca(R), papel(P) o tijera(T)]: ";
	cin>>j2;
	switch (j1 && j2){
	case 1:
		if (j1=='T' && j2=='P')
			cout<<"T-P tijera corta papel gana jugador jugador 1"<<endl;
		else if(j1=='T' && j2=='R')
				cout<<"T-R roca rompe tijera gana jugador jugador 2"<<endl;
		else if(j1=='T' && j2=='T')
				cout<<"T-T tijera con tijera quedan en empate"<<endl;
		else if (j1=='R' && j2=='P')
			cout<<"R-P papel envuelve a roca gana jugador jugador 2"<<endl;
		else if(j1=='R' && j2=='T')
			cout<<"T-R roca rompe tijera gana jugador jugador 1"<<endl;
		else if (j1=='R' && j2=='R')
				cout<<"R-R roca con roca quedan en empate"<<endl;
		else if(j1=='P' && j2=='T')
			cout<<"P-T tijera corta papel gana jugador jugador 2"<<endl;
		else if(j1=='P' && j2=='R')
			cout<<"P-R papel envuelve a roca gana jugador 1"<<endl;
		else if(j1=='P' && j2=='P')
			cout<<"P-P papel con papel quedan en empate"<<endl;
	break;
	default:
		cout<<"datos fuera de rango"<<endl;
	}
	
	return 0;
}

