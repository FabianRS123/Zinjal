#include <iostream>
using namespace std;

int leernum ();
float factorial (double x);
float combinacion (float n, float m);
char opcion ();

int main(int argc, char *argv[]) {
	int n,m;
	char resp;
	do{
		system ("cls");
		n=leernum();
		m=leernum();
		cout<<"el resultado de la funcion combinacion es: "<<combinacion(n,m)<<endl;
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	
	return 0;
}

int leernum (){
	int x;
	do{
		cout<<"ingrese un numero: ";
		cin>>x;
	} while(x<=0);
	return x;
}
float factorial (double x){
	double f=1;
	int i;
	for (i=1;i<=x;i++)
		f=f*i;
	return f;
}
float combinacion (float n, float m){
		double comb;
		comb=factorial(n)/(factorial(m)*factorial(n-m));
		return comb;
}
char opcion (){
	char resp;
		do{
			cout<<" desea continuar (s/n):";
				cin>>resp;
		} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
