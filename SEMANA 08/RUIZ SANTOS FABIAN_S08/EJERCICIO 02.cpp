#include <iostream>
using namespace std;
void leernum (float &a,float &b,float &c,float &d);
void proceso (float a,float b,float c,float d,float &pro, float &men);
void respuesta (float pro, float men);
char opcion ();

int main(int argc, char *argv[]) {
	float a,b,c,d,pro,men;
	char resp;
	do{
		system ("cls");
		leernum (a,b,c,d);
		proceso (a,b,c,d,pro,men);
		respuesta (pro,men);
		resp=opcion();
	}while (resp=='s' || resp=='S');
	return 0;
}
void leernum (float &a,float &b,float &c,float &d){
	do{
		cout<<"ingrese una nota: ";
		cin>>a;
		cout<<"ingrese una nota: ";
		cin>>b;
		cout<<"ingrese una nota: ";
		cin>>c;
		cout<<"ingrese una nota: ";
		cin>>d;
	}while (a<=0 && b<=0 && c<=0 && d<=0);
}
void proceso (float a,float b,float c,float d,float &pro, float &men){
	men=a;
	if (b<men)
		men=b;
	if (c<men)
		men=c;
	if (d<men)
		men=d;
	pro=float(a+b+c+d-men)/3;
}	
void respuesta (float pro, float men){
	cout<<"La nota eliminada es "<<men<<endl;
	cout<<"el promedio es "<<pro<<endl;
}
char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
	}
