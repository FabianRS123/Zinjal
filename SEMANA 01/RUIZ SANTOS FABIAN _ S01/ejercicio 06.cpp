#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int b1,b2,b3,m1,m2,m3,num;
 	cout<<"ingrese el numero:" ;
	cin>>num;
	b1 = num/100;
	num = num%100;
	b2 = num/50;
	num = num%50;
	b3 = num/10;
	num = num%10;
	m1 = num/5;
	num = num%5;
	m2 = num/2;
	m3 = num%2;
	cout<<"los billetes de 100 :"<<b1<<endl;
	cout<<"los billetes de 50 :"<<b2<<endl;
	cout<<"billetes de 10 :"<<b3<<endl;
	cout<<"monedas de 5 :"<<m1<<endl;
	cout<<"monedas de 2 :"<<m2<<endl;
	cout<<"monedas de 1 :"<<m3<<endl;
	return 0;
}

