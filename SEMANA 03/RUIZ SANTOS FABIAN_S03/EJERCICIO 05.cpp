#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int d,m;
	cout<<"ingrese el dia de nacimiento: ";
	cin>>d;
	cout<<"ingrese el numero del mes de nacimiento: ";
	cin>>m;
	if(d>0 && d<=31 && m>0 && m<13){
	switch (m){
	case 1:
		if(d<21)
			cout<<"su signo zodiacal es Capricornio"<<endl;
		else
			cout<<"su signo zodiacal es acuario"<<endl;
		break;
	case 2:
		if(d<20)
			cout<<"su signo zodiacal es acuario"<<endl;
		else
			cout<<"su signo zodiacal es piscis"<<endl;
		break;
	case 3:
		if(d<21)
			cout<<"su signo zodiacal es piscis"<<endl;
		else
			cout<<"su signo zodiacal es aries"<<endl;
		break;
	case 4:
		if(d<21)
			cout<<"su signo zodiacal es aries"<<endl;
		else
			cout<<"su signo zodiacal es tauro"<<endl;
		break;
	case 5:
		if(d<22)
			cout<<"su signo zodiacal es tauro"<<endl;
		else
			cout<<"su signo zodiacal es geminis"<<endl;
		break;
	case 6:
		if(d<22)
			cout<<"su signo zodiacal es geminis"<<endl;
		else
			cout<<"su signo zodiacal es cancer"<<endl;
		break;
	case 7:
		if(d<23)
			cout<<"su signo zodiacal es cancer"<<endl;
		else
			cout<<"su signo zodiacal es leo"<<endl;
		break;
	case 8:
		if(d<23)
			cout<<"su signo zodiacal es leo"<<endl;
		else
			cout<<"su signo zodiacal es virgo"<<endl;
		break;
	case 9:
		if(d<23)
			cout<<"su signo zodiacal es virgo"<<endl;
		else
			cout<<"su signo zodiacal es libra"<<endl;
		break;
	case 10:
		if(d<23)
			cout<<"su signo zodiacal es libra"<<endl;
		else
			cout<<"su signo zodiacal es escorpio"<<endl;
		break;
	case 11:
		if(d<23)
			cout<<"su signo zodiacal es escorpio"<<endl;
		else
			cout<<"su signo zodiacal es sagitario"<<endl;
		break;
	case 12:
		if(d<22)
			cout<<"su signo zodiacal es sagitario"<<endl;
		else
			cout<<"su signo zodiacal es capricornio"<<endl;
		break;
	}
	}
	else
	   cout<<"datos fuera del rango"<<endl;
	return 0;
}

