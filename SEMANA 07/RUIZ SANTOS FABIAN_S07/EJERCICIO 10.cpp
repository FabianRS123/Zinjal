#include <iostream>
using namespace std;

int leernum ();
int micomu (int x, int y);
char opcion ();

int main(int argc, char *argv[]) {
	int x,y;
	char resp;
	do{
		system ("cls");
		x=leernum ();
		y=leernum ();
		cout<<"el mcm es: "<<micomu(x,y)<<endl;
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
int leernum (){
	int n;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	return n;
}
int micomu (int x, int y){
	int dv=2,mcm=1;
	while (x>1 || y>1){
		if (x % dv==0 || y % dv==0){
			mcm=mcm*dv;
			if(x%dv==0)
				x=x/dv;
			if (y%dv==0)
				y=y/dv;
		}
		else 
			dv++;
	}
	return mcm;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
	}
