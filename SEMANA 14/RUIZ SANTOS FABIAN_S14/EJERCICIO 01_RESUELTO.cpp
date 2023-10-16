#include "estructura.h"
using namespace std;
struct punto {
	float x; 
	float y;
};
void ingresopunto (punto &p,const char mensaje []);
float distancia (punto p1,punto p2);
void calculo (punto p1,punto p2,float &m,float &b);
void reporte (float m,float b);

int main(int argc, char *argv[]) {
	punto p1,p2;
	float m,b;
	ingresopunto (p1,"Primer punto");
	ingresopunto (p2,"Segundo punto");
	cout<<"La distancia entre los puntos es: "<<distancia (p1,p2);
	calculo (p1,p2,m,b);
	reporte (m,b);
	return 0;
}
void ingresopunto (punto &p,const char mensaje []){
	cout<<mensaje<<endl;
	cout<<"Valor de X: ";
	p.x=leerReal();
	cout<<"Valor de Y: ";
	p.y=leerReal();
}
float distancia (punto p1,punto p2){
	return sqrt (pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
void calculo (punto p1,punto p2,float &m,float &b){
	m=(p2.y-p1.y)/(p2.x-p1.x);
	b=p1.y-m*p1.x;
}
void reporte (float m,float b){
	cout<<"\nla ecuacion de la recta es: "<<endl;
	cout<<m<<"x";
	if (b>0)
		cout<<"+"<<b<<endl;
	else
		cout<<b<<endl;
}
