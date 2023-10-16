#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i,cp=0,ci=0,suma=0,x,n,su=0;
	double pro;
	do {
		cout<<"la cantidad de numeros a ingresar: ";
		cin>>n;
	} while(n<=0);
	for (i=1;i<=n;i++){
		cout<<"ingrese un numero: ";
		cin>>x;
		if(x%2==0){
			cp=cp+1;
			suma=suma+x;
		}
		else{ 
			ci=ci+1;
			su=su+x;
		}
	}
	pro=(float)su/ci;
	cout<<"la suma de los numeros pares es: "<<suma<<endl;
	cout<<"el numero de pares es: "<<cp<<endl;
	cout<<"el promedio de los numeros impares es:"<<pro<<endl;
	return 0;
}

