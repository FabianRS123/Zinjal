#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i,n,s=0;
	double may,men,x,pr;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	may = -1e30;
	men = 1e30;
	for (i=1;i<=n;i++) {
		do{
		cout<<"ingrese las edades: ";
		cin>>x;
		}while (x<=0);
		if (x > may)
			may = x; 
		if (x < men)
			men = x;
		s = s+x;
	}
	pr=s/n;
	cout<<"la edad mayor es: "<<may<<endl;
	cout<<"La edad menor es: "<<men<<endl;
	cout<<"el promedio de edades es: "<<pr<<endl;
	return 0;
}

