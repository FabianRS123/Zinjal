#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n, i,nota, may, men, suma=0;
	float pro;
	srand ((unsigned)time(NULL));
	
	do{
		cout<<"ingresar un valor: ";
		cin>>n;
	}while(n<=0);
	
	nota=rand()%21;
	may=nota;
	men=nota;
	suma=nota;
	cout<<"Notas : "<<nota<<", ";
	
	for(i=1; i<n;i++){
		if(nota>may)
		may = nota;
	else if (nota < men)
		men = nota;
	
	suma =suma+nota;
	cout<<nota<<", ";
	}
	pro=suma/n;
	cout<<endl<<"La Nota Mayor es "<<may<<endl;
	cout<<"La Nota Menor es "<<men<<endl;
	cout<<"Promedio es: "<<pro<<endl;
	return 0;
}

