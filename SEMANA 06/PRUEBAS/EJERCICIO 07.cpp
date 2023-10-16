#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int d=2,i,cd=0;
	while (d<=1000){
		cd=0;
		d++;
		for (i=1;i<d;i++){
			if(d%i==0)
				cd=cd+i;
		}
			if (d==cd)
				cout<<d<<" ";
	}
	return 0;
}

