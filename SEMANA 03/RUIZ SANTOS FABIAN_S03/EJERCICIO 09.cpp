#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	float b,h,l,r,ar;
	int op;
	cout<<"operaciones que desea realizar"<<endl;
	cout<<"[1]Area del triangulo"<<endl;
	cout<<"[2]Area del cuadrado"<<endl;
	cout<<"[3]Area del circulo"<<endl;
	cout<<"[4]Area del rectangulo"<<endl;
	cout<<"ingrese opcion(1-4): ";
	cin>>op;
	switch (op){
	case 1:
		cout<<"ingrese la base: ";
		cin>>b;
		cout<<"ingrese la altura: ";
		cin>>h;
		ar=(b*h)/2;
		cout<<"el area del triangulo es: "<<ar<<endl;
		break;
	case 2:
		cout<<"ingrese el lado: ";
		cin>>l;
		ar=pow(l,2);
		cout<<"el area del cuadrado es: "<<ar<<endl;
		break;
	case 3:
		cout<<"ingrese el radio: ";
		cin>>r;
		ar=3.14*pow(r,2);
		cout<<"el area del circulo es :"<<ar<<endl;
		break;
	case 4:
		cout<<"ingrese la base: ";
		cin>>b;
		cout<<"ingrese la altura: ";
		cin>>h;
		ar=h*b;
		cout<<"el area del rectangulo es: "<<ar<<endl;
		break;
	default:
		cout<<"datos fuera de rango"<<endl;
	}
	return 0;
}

