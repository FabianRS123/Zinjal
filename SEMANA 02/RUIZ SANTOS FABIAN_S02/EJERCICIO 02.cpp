#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	float cap,in;
	cout<<"ingrese el capital: ";
	cin>>cap;
	if (cap<500)
	{
		in= cap*0.02;
		 cout<<"el interes es:"<<in<<endl;
	}
	else
	{
		if(cap>=500 && cap<=1500)
		{
		 in=cap*0.045;
		  cout<<"el interes es:"<<in<<endl;
		}
		else
		{
			 in=cap*0.09;
			 cout<<"la tasa de interes:"<<in<<endl;
		}
	}
	return 0;
}

