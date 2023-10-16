#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int n,i,a,pro=0,prom;
	double may,men;
		cout<<"ingrese un numero: ";
		cin>>n;
	may=-1e30;
	men=1e30;
	for (i=1;i<=n;i++){
		cout<<"numero "<<i<<" : ";
		cin>>a;
		if(a>may)
			may=a;
		if(a<men)
			men=a;
		pro = pro+a;
		prom=pro/n;
	}
	cout<<" el numero mayor es "<<may<<" y el numero menor es "<<men<<endl;
	cout<<" el promedio es: "<<prom<<endl;
	return 0;
}

