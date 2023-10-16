#include <iostream>
#include <math.h>
using namespace std;

int menu ();
float leerparametro (float va,string p);
float areacirculo(float r);
char opcion ();

int main(int argc, char *argv[]) {
	int op;
	float r1,r2,h,med;
	char resp;
	op=menu ();
	do{system ("cls");
		do{
			switch (op){
			case 1: 
				r1= leerparametro (0.0, "radio ");
				med= areacirculo (pow(r1,2));
				cout<<"el area del circulo es: "<<med<<endl;
				break;
			case 2:
				r1= leerparametro (0.0, "radio 1");
				r2= leerparametro (r1, "radio 2");
				med= areacirculo (pow(r2,2)-pow(r1,2));
				cout<<"el area del aro es: "<<med<<endl;
				break;
			case 3:
				r1= leerparametro (0.0, "radio");
				h= leerparametro (0.0, "altura");
				med= areacirculo (pow(r1,2)*h);
				cout<<"el volumen del cilindro es: "<<med<<endl;
				break;
			case 4:
				break;
			}
		}while (op<0 && op>=4);
		resp=opcion ();
	}while(resp=='s' || resp=='S');
	return 0;
}

int menu (){
	int op;
	do{
		cout<<"menu principal "<<endl;
		cout<<"[1] Area de un circulo"<<endl;
		cout<<"[2] Area de un aro"<<endl;
		cout<<"[3] Volumen de un cilindro"<<endl;
		cout<<"[4] Salir"<<endl;
		cout<<"ingrese un numero del menu (1-4): ";
		cin>>op;
	} while(op<1 || op>4);
	return op;
}
float leerparametro (float va,string p){
	float parametro;
	do{
		cout<<"digite el valor "<<p<<" (>"<<va<<"): ";
		cin>>parametro;
		if (parametro <= va)
			cout<<"el valor del "<<p<<" debe ser mayor que "<<va<<endl;  
	} while(parametro<=va);
	return parametro;
}
float areacirculo(float radio){
		return 3.14*radio;
	}

char opcion (){
	char resp;
	do{
		cout<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
	
