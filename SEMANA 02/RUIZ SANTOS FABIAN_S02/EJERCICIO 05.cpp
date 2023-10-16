#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float n;
	cout<<"ingrese el numero del mes:";
	cin>>n;
	if(n==2)
		cout<<"el mes dura 28 dias o 29 si es bisiesto";
	else 
		if(n==11 || n==9 || n==6 || n==4)
		cout<<"el mes dura 30 dias";
	else 
		cout<<"el mes dura 31 dias";
	return 0;
}

/*int LeeNum (){
do{
cout<<"ingrese el año: ";
cin>>ñ;
cout<<"ingrese el mes: ";
cin>>m;
} while(ñ<=0 , m<=0);
}*/
