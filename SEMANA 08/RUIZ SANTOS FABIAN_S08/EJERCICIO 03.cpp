#include <iostream>
using namespace std;

void leernum (int &a, int &b,int &c);
void calculo (int a, int b, int c, int &men, int &may);
void respuesta (int men, int may);
char opcion ();

int main(int argc, char *argv[]) {
	int a,b,c,men,may;
	char resp;
	do{
		system ("cls");
		leernum (a,b,c);
		calculo (a,b,c,men,may);
		respuesta (men,may);
		resp=opcion ();
	} while(resp=='s' || resp=='S');

	return 0;
}
void leernum (int &a, int &b,int &c){
	do{
		cout<<"ingrese un numero: ";
		cin>>a;
		cout<<"ingrese un numero: ";
		cin>>b;
		cout<<"ingrese un numero: ";
		cin>>c;
	} while(a<=0 && b<=0 && c<=0);
}
	
void calculo (int a, int b, int c, int &men, int &may){
	men=a;
	if (b<men)
		men=b;
	if (c<men)
		men=c;
	
	may=a;
	if (b>may)
		may=b;
	if (c>may)
		may=c;
}
	
void respuesta (int men, int may){
	cout<<"el numero menor es: "<<men<<endl;
	cout<<"el numero mayor es: "<<may<<endl;
}
	
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
	}

