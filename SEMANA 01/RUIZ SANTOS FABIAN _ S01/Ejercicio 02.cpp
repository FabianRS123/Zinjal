#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float H,G,T ;
	cout<<"ingrese el tiempo recorrido en segundos :";
	cin>>T;
	G = 9.8;
	H = 0.5 * G * T * T;
	cout<<"la altura es : "<<H<<endl;
	return 0;
}

