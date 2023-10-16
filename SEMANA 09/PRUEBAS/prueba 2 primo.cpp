#include <iostream>
using namespace std;
bool factoresprimos (int n, int d);

int main(int argc, char *argv[]) {
	int num,d,n;
	do{
		cout<<"ingrese un numero: ";
		cin>>num;
	} while(num<=0);
	if (factoresprimos (num,2))
		cout<<"el numero es primo"<<endl;
	else
		cout<<"el numero no es primo"<<endl;
	return 0;
}
bool factoresprimos (int n, int d){
	int x;
	x=n;
	if (n>1){
		if (n%d==0){
			cout<<d<<" ";
			n=n/d;
			factoresprimos(n,d+1);
		}
	}
	cout<<" zvsxv"<<x<<endl;
	if (x==d)
		return true;
	else
		return false;
}
