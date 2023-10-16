#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int i, n, s;
	for(i=1;i <= 1000;i++){ 
		s=0;
		for(n = 1;n <i;n++){                             
			if(i % n==0)
				s = s + n; 
		}
		if(i == s)                   
			cout<<i<< " ";
		
	}
	return 0;
}

