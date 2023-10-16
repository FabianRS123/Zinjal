#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i=0,cp,d,n,z;
	do{
		cout<<"ingrese el termino: ";
		cin>>n;
	} while(n<=0);
	
	cout<<"los "<<n<<" primeros numeros primos son: ";
	while (n>0){
			cp=0;
			i++;
			for (d=1;d<=i;d++){
				if(i%d==0)
					cp=cp+1;
			}
			if (cp==2){
				cout<<i<<" ";
				n--;
			}
			}
			

	return 0;
}

