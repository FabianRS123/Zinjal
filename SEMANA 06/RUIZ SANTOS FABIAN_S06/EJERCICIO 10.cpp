#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a,n,s,z,p;
	double may;
	cout<<"ingrese el total de numeros: ";
	cin>>n;
	may=-1e30;
	while(n>0){
		do{
			cout<<"ingrese un numero: ";
			cin>>a;
		}while(a<=0 || a>=100);
		p=a;
		s=0;
		while(a>0){
			s=s+a%10;
			a=a/10;
		}
		if (s>may){
			may=s;
			z=p;
		}
		n--;
	};
	cout<<"la suma de los digitos de "<<z<<" es mayor ya que es: "<<may<<endl;
	return 0;
}

