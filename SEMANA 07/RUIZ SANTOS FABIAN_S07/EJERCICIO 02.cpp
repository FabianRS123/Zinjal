#include <iostream>
using namespace std;

int leeNum ();
bool esbisiesto (int n);
char opcion ();

int main(int argc, char *argv[]) {
	int n;
	char resp;
	do{
		system ("cls");
		n=leeNum();
		if(esbisiesto(n))
			cout<<"el año es bisiesto "<<endl;
		else	
			cout<<"el año no es bisiesto"<<endl;
		resp=opcion();
	} while (resp=='s' || resp=='S');
	return 0;
}

int leeNum (){
	int num;
	do{
	cout<<" inegrese el año: ";
	cin>>num;
	}while(num<=0);
	return num;
}

bool esbisiesto (int n){
	if ((n%4==0 && n%100!=0) || n%400==0)
		return true;
	else	
		return false;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
