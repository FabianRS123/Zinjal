#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char let;
	cout<<"ingrese una letra en minuscula: ";
	cin>>let;
	if(let>='a' && let<='z'){
		if(let=='a' || let=='e' || let=='i' || let=='o' || let=='u')
			cout<<"la letra es una vocal ";
	else 
	   if(let=='y')
	   cout<<"la palabra es una semivocal:";
	   else
		   cout<<"la letra es una consonante";
	}
	else{
		cout<<"error vuelva a poner la letra minuscula";
	}
	return 0;
}

