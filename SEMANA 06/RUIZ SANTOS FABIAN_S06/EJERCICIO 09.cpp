#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,d,s=1;
	double may;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	may= -1e30;
	while (n>0){
		d=n%10;
		s=s*d;
		n=n/10;
		if (d>may)
			may=d;
	}
	cout<<"el prducto de sus digitos es: "<<s<<endl;
	cout<<"el numero mayor es: "<<may<<endl;
	return 0;
}

