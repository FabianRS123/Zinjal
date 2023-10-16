#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float nea;
	cout<<"ingrese el numero de examenes aprobados(1,2,3):" ;
	cin>>nea;
	if(nea==0)
		cout<<"no recibe nada adicional";
	else if(nea==1)
		cout<<"recibe 20 soles adicionales";
	else if(nea==2)
		cout<<"recibe 40 soles adicionales";
	else if(nea==3)
		cout<<"recibe 60 soles adicionales";
	else
		cout<<"datos incorectos";
	
	
	return 0;
}

