#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	int n1,n2,n3,n4,pro;
	cout<<"ingrese las notas (n1,n2,n3,n4):";
	cin>>n1>>n2>>n3>>n4;
	pro=(n1+n2+n3+n4)/4;
		cout<<"el promedio final es: "<<pro<<endl;
	if(n1<n2 && n1<n3 && n1<n4)
		cout<<"la nota eliminada es: "<<n1<<endl;
		else
			if(n2<n1 && n2<n3 && n2<n4)
				cout<<"la nota eliminada es: "<<n2<<endl;
			else
				if(n3<n1 && n3<n2 && n3<n4)
					cout<<"la nota eliminada es: "<<n3<<endl;
				else
					if(n4<n1 && n4<n2 && n4<n3)
						cout<<"la nota eliminada es: "<<n4<<endl;
	return 0;
}

