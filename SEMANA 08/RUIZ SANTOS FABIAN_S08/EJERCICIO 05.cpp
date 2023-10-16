#include <iostream>
using namespace std;

void leernum (int &n, int &d);
void calculo(int &n,int &d);
void resultado (int n,int d);
char opcion ();


int main(int argc, char *argv[]) {
	int d,n;
	char resp;
	do{
		system ("cls");
		leernum(n,d);
		calculo (n,d);
		resultado (n,d) ;
		resp=opcion ();
	} while (resp=='s' || resp=='S');
	return 0;
}

void leernum (int &n, int &d){
	do{
		cout<<"ingrese un numero para el numerador: ";
		cin>>n;
		cout<<"ingrese un numero para el numerador: ";
		cin>>d;
	} while(n<=0 && d<=0);
	cout<<n<<" / "<<d<<" = ";
}
	
void calculo(int &n,int &d){
	int dv=2;
	while (dv<=n && dv<=d){
		if (n%dv==0 && d%dv==0){
			n=n/dv;
			d=d/dv;
		}
		dv++;
	}
}
void resultado (int n,int d){
	cout<<n<<" / "<<d<<endl;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
