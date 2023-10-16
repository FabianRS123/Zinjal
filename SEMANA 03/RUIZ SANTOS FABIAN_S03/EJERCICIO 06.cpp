#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int dia,m;
	cout<<"ingrese el dia: ";
	cin>>dia;
	cout<<"ingrese el numero del mes: ";
	cin>>m;
	if(dia>0 && dia<=31 && m>0 && m<13)
	{
	switch (m){
	case 1: case 2:
		cout<<"estacion de verano"<<endl;
		break;
	case 4: case 5:
		cout<<"estacion de otoño"<<endl;
		break;
	case 7: case 8:
		cout<<"estacion de invierno"<<endl;
		break;
	case 10: case 11:
		cout<<"estacion de primavera"<<endl;
		break;
	case 3:
		if(dia<22)
			cout<<"estacion de verano"<<endl;
		else
			cout<<"estacion de otoño"<<endl;
		break;
	case 6:
		if(dia<22)
			cout<<"estacion de otoño"<<endl;
		else
			cout<<"estacion de invierno"<<endl;
		break;
	case 9:
		if(dia<23)
			cout<<"estacion de invierno"<<endl;
		else
			cout<<"estacion de primavera"<<endl;
		break;
	case 12:
		if(dia<22)
			cout<<"estacion de primavera"<<endl;
		else
			cout<<"estacion de verano"<<endl;
		break;
	}
	}
	else 
	   cout<<"datos erroneos"<<endl;
	return 0;
}

