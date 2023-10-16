#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i=2,x=1, s=0;
	cout<<i<<"; ";
	while(i<1800){
		if(x==1){
			i=i+3;
			x = 2;
		}
		else{
			i=i+2;
			x = 1;
		}
		s =s+i;
		cout<<i<<"; ";
	}
	cout<<"La Suma de Terminos es: "<<s<<endl;
	return 0;
}

