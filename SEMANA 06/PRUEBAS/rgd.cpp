#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i,j,n,s;
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
	for(i=1;i<=n;i++){
		cout<<"*";
		for (j=2;j<=n;j++)
		cout<<"*";
		//for(s=3;s<=n;s++)
		//cout<<s<<"  ";
		
		
		
		cout<<endl;
	}
		
	return 0;
}

