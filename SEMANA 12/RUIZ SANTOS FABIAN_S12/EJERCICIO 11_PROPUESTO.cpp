#include "vector.h"
using namespace std;

const int cal = 5;

void ndato (int &n);
void ingreso (int a [], int n);
int contarOcurrencias(int, int, int[]);
bool buscarCalificacion(int, int, int[]);
void imprimeDatos(int, int[], int[]);

int main(int argc, char *argv[]) {
	int a[50], b[cal+1], c[cal+1], n;
	int j = 0, x;
	bool re;
	char resp;
	do{
		ndato (n);
		ingreso (a,n);

		b[j] = a[0];
		x = contarOcurrencias(b[j], n, a);
		c[j] = x;
		j++;
		
		re = buscarCalificacion(a[1], j, b);
		if(re == false) {
			b[j] = a[1];	
			x = contarOcurrencias(b[j], n, a);
			c[j] = x;
			j++;
		}
		
		re = buscarCalificacion(a[2], j, b);
		if(re == false) {
			b[j] = a[2];		
			x = contarOcurrencias(b[j], n, a);
			c[j] = x;
			j++;
		}
		
		re = buscarCalificacion(a[3], j, b);
		if(re == false) {
			b[j] = a[3];		
			x = contarOcurrencias(b[j], n, a);
			c[j] = x;
			j++;
		}
		imprimeDatos(j, b, c);
		resp=opcion ();
		cin.get ();
	}while (resp=='s' || resp=='S');
	return 0;
}
void ndato (int &n){
	do{	
		cout<<"Número de calificaciones a registrar: ";
		cin>>n;
	} while (n<=0);
}
void ingreso (int a [], int n){
	int i;
	for(i=0; i<n; i++) {
		cout<<"Digite la calificación del estudiante "<<(i+1)<<": ";
		cin>>a[i];
	}
}

int contarOcurrencias(int c, int n, int a[]) {
	int ocurrencias = 0,i;
	for(i=0; i<n; i++)
		if(c == a[i])
			ocurrencias++;
	return ocurrencias;
}

bool buscarCalificacion(int c, int j, int b[]) {
	for(int i=0; i<j; i++) {
		if(c == b[i])
			return true;
	}
	return false;
}

void imprimeDatos(int j, int b[], int c[]) {
	for(int i=0; i<j; i++)
		cout<<"El numero "<<b[i]<<" tiene una frecuencia de: "<<c[i]<<endl;
}
