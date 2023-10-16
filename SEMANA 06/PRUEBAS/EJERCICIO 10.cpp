#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int s=0,n,i=0,a,y,b,l,lo,x=0;
	double may;
	do{
		cout<<"cuantos numeros quiere ingresar: ";
		cin>>n;
	} while(n<=0);
	may=-1e30;
	while (n>0){
		cout<<"ingrese un numero que tenga solo 2 digitos: ";
		cin>>l;
		n--;
		i++;
		y=l;
		a=l/10;
		b=l%10;
		if (a<b || a>b){
			x=a+b;
			s++;
		}
		if (s==i){
			cout<<endl;
		if (x>may)
			may=x;
			lo=y;
		}

		
	}
	cout<<"en la suma de cifras el mayor es: "<<may<<"da"<<lo<<endl;
	
	return 0;
}

