#include <iostream>
using namespace std;

int leernum();
int producto (int a,int b);
char opcion ();

int main(int argc, char *argv[]) {
	int a,b;
	char resp;
	do{
		system("cls");
		a=leernum ();
		b=leernum ();
		cout<<" el producto es: "<<producto(a,b)<<endl;
		resp=opcion();
	} while(resp=='s' || resp=='S');
	return 0;
}
int leernum (){
	int n;
	do{
	cout<<"ingrese un numero: ";
	cin>>n;
	}while (n<=0);
	return n;
}

int producto (int a,int b){
	int i,z=0;
	for (i=1;i<=b;i++)
		z=z+a;
	return z;
}
	
char opcion (){
		char resp;
		do{
			cout<<" desea continuar (s/n):";
			cin>>resp;
		} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
		return resp;
}
