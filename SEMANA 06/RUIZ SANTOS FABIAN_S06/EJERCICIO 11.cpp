#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int cn,n,i=0,po=0, ne=0;
	double may,men;
	
	do{
		cout<<"ingrese la cantidad numeros :";
		cin>>cn;
	}while(cn<=0);
	may = -1e30;
	men = 1e30;
	for(i=1;i<=cn;i++){
		do{
		cout<<"Ingrese numero: ";
		cin>>n;
		}while (n!=0);
		if (n > may)
			may = n;
		if (n < men)
				men = n;
		if (n>0) 
			po=po+1;
		if (n<0) 
			ne=ne+1;
	}
	cout<<"el numero mayor es "<<may<<" y el numero menor es "<<men<<endl;
	cout<<"el total de numeros leidos es: "<<i-1<<endl;
	cout<<"el total de numeros positivos es "<<po<<" y el total de numeros negativos es: "<<ne<<endl;
	
	return 0;
}

