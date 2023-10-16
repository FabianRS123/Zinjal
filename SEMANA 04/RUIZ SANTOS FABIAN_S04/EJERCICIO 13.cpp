#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int h;
	double may, men,t;
	may = -1e30;
	men = 1e30;
	for (h=1;h<=6;h++) {
		cout<<"ingrese la temperatura: ";
		cin>>t;
		if (t>may)
			may = t;
		else 
			if (t < men)
			men = t;
	}
	cout<<"la temperatura mayor es: "<<may<<endl;
	cout<<"La temperatura menor es: "<<men<<endl;
	return 0;
}

