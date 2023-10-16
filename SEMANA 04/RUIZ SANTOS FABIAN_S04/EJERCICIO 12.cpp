#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i;
	do{
		cout<<"inrese un nuemero:";
		cin>>i;
	}while(i<=0);
	cout<<"Sucesion generada es: ";
	while(i!=1)
	{
		cout<<i<<" ";
		if(i%2==0)
			i=i/2;
		else
			i=3*i+1;
	}
	cout<<"1 "<<endl;
	return 0;
}

