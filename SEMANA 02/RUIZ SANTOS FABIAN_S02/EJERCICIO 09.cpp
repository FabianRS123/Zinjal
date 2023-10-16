#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,b,c,d;
	cout<<"ingrese a,b,c,d respectivamente:";
	cin>>a>>b>>c>>d;
	if(a%2==0 && b%2==0 && c%2==0 && d%2==0)
		cout<<"si cumple con la condicion pues todos los digitos son pares"<<endl;
	else 
		if(a%2!=0 && b%2==0 && c%2==0 && d%2==0)
			cout<<"no cumple la condición ya que hay un numero impar que es el:"<<a<<endl;
		else 
			if(a%2==0 && b%2!=0 && c%2==0 && d%2==0)
			cout<<"no cumple la condición ya que hay un numero impar que es el:"<<b<<endl;
			else 
				if(a%2==0 && b%2==0 && c%2!=0 && d%2==0)
				cout<<"no cumple la condición ya que hay un numero impar que es el:"<<c<<endl;
				else 
					if(a%2!=0 && b%2==0 && c%2==0 && d%2!=0)
					cout<<"no cumple la condición ya que hay un numero impar que es el:"<<d<<endl;
	else
	   cout<<"no cumple con la condicion ya que el digito 7 es impar"<<endl;
	return 0;
}

