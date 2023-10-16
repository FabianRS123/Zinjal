#include <iostream>
using namespace std;

void nelementos (int &n);
void eco (char cadena ,int n);

int main(int argc, char *argv[]) {
	char cadena [20];
	int n;
	cout<<"Ingrese la cadena: ";
	cin.getline (cadena,80);
	eco (cadena ,n)
	return 0;
}
void nelementos (int &n){
	cout<<"ingrese el numero de elementos: ";
	cin>>n;
}
void eco (char cadena [],int n){
	int i;
	for (i=0;cadena[i]!=0;i++){
		cout<<cadena[i]<<endl;
	}
}
