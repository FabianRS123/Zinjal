#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float a,b,c;
	cout<<"ingrese 3 digitos:" ;
	cin>>a>>b>>c;
	if(a<b){
		if(a>c){
			cout<<"el numero intermedio es :"<<a<<endl;
		}
	}
	else if(a>b){
		if(a<c){
			cout<<"el numero intermedio es:"<<a<<endl;
		}
	}
	if(b<a){
		if(b>c){
			cout<<"el numero intermedio es:"<<b<<endl;
		}
	}
	else if(b>a){
		if(b<c){
			cout<<"el nunero intermedio es:"<<b<<endl;
		}
	}
	if (c<a){
		if(c>b){
			cout<<"el numero intermedio es:"<<c<<endl;
		}
	}
	else if(c>a){
		if(c<b){
			cout<<"el numero intermedio es:"<<c<<endl;
		}
	}
	return 0;
}

