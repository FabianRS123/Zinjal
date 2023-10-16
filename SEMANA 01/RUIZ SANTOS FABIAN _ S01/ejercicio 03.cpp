#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float H,V,r,Pi;
	cout<<"ingrese la altura :";
	cin>>H;
	Pi = 3.14;
	r = 2;
	V = Pi * r * r * H;
	cout<<"el volumen del cilindro es : "<<V<<endl;
	return 0;
}

