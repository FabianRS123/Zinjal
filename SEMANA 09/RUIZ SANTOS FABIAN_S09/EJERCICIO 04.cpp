#include <iostream>
using namespace std;
int producto(int n);
void reporte (int n);
char opcion ();

int main(int argc, char *argv[]) {
	int a,r;
	char resp;
	do{
		system("cls");
		do{
			cout<<"ingrese un numero: ";
			cin>>a;
		} while(a<0);
		r= producto(a);
		reporte (r);
		resp=opcion ();
	}while(resp=='s' || resp=='S');
	return 0;
}
int producto(int n){
	if (n==0)
		return 1;
	else
		return n%10*producto(n/10);
}
void reporte (int n){
	cout<<"el producto de sus digitos es: "<<n<<endl;
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
