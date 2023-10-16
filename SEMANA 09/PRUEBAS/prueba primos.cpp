#include <iostream>
using namespace std;
bool primo (int a,int dv);

int main(int argc, char *argv[]) {
	int a;
	cout<<"ingrese un numero: ";
	cin>>a;
	if (primo (a,2))
		cout<<"si"<<endl;
	else 
		cout<<"ni"<<endl;
	return 0;
}
bool primo (int a,int dv){
	if (a%dv==0){
		a=a/dv;
		primo (a,dv);
	}
	else
		primo (a,dv+1);
	if (a==dv)
		return true;
	else
		return false;
}

	
	/*int c=0;
	if (a%dv==0){
		c=c+1;
		cout<<c<<" ";}
	else
		return primo (a,dv+1);*/
