#include <iostream>
using namespace std;

bool anos (int n);
void mesdias (int m, int n);
char opcion ();

int main(int argc, char *argv[]) {
	int n,m;
	char resp;
	do{
		system ("cls");
		do{
			cout<<"ingrese el año: ";
			cin>>n;
			cout<<"ingrese el mes: ";
			cin>>m;
		} while((n<=0 || m<=0) && m>12);
		mesdias (m,n);
		resp=opcion();
	} while(resp=='s' || resp=='S');
	return 0;
}

bool anos (int n){
	if ((n%4==0 && n%100!=0) || n%400==0)
		return true;
	else
		return false;
}
void mesdias (int m, int n){
	switch (m){
	case 1:case 3:case 5:case 7:case 8:case 10:case 12:		
		cout<<"el mes tiene 31 dias"<<endl;
		break;
	case 2:
		if (anos(n))
			cout<<"el mes tiene 29 dias"<<endl;
		else 
			cout<<"el mes tiene 28 dias"<<endl;
		break;
	case 4:case 6:case 9:case 11:
		cout<<"el mes tienes 30 dias"<<endl;
		break;
	}
}
char opcion (){
		char resp;
		do{
			cout<<" desea continuar (s/n):";
			cin>>resp;
		} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
		return resp;
	}
