#include <iostream>
#include <string.h>
using namespace std;
#define MAX 100

char opcion ();

char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
