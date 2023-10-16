#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float mtv,sue,ve,ad;
	cout<<"ingrese el monto vendido total: ";
	cin>>mtv;
	if(mtv>0)
	{
		sue= mtv*0.10;
			cout<<"el sueldo del vendedor es: "<<sue<<endl;
	if(mtv>5000)
	{
		ve= mtv - 5000;
		ad= (ve/500)*25;
		sue= sue+ad;
		cout<<"el sueldo del vendedor es: "<<sue<<endl;
	}
	}
	else 
	   cout<<"el monto vendido total no puede ser negativo"<<endl;
	return 0;
}

