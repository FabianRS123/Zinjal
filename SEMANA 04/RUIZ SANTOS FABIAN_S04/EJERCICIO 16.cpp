#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n,i,j, no;
	srand ((unsigned)time(NULL));
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	}while(n<=0);
	
	for(i=1; i<=n;i++){
		no=rand()%21;
		
		cout<<endl<<"Alumno "<<i;
		cout<<endl<<"nota: "<<no;
		
		for(j=1;j<=no;j++){
			cout<<"*";
		}
	}	
	return 0;
}

