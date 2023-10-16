#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int po=0,ng=0,cer=0,n,x,i;
	do{
		cout<<"ingrese la cantidad de numeros: ";
		cin>>n;
	} while(n<=0);
	for (i=1;i<=n;i++){
		cout<<"ingrese un numero: ";
		cin>>x;
			if(x>=1)
			po=po+1;
			else
				if(x<=-1)
				ng=ng+1;
				else	
					cer=cer+1;
	}
	cout<<"el numero de positivos es: "<<po<<endl;
	cout<<"el numero de negativos es: "<<ng<<endl;
	cout<<"el numero de ceros es: "<<cer<<endl;
	return 0;
}

