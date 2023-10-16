#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int um,u,num,x;
	cout<<"ingrese el numero :" ;
	cin>>num;
	um = num/1000;
	u = num%10;
	x = um*10+u;
	cout<<"el nuevo numero es :"<<x<<endl;
	return 0;
}

