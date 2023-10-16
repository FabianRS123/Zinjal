#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	int l, c=0;
	srand ((unsigned)time(NULL));
	do{
		l=rand()%6+1;
		cout<<"Lanzamiento:"<<l<<endl;
		c=c+1;
	}while(l!=6);
	cout<<"el numero de lanzamientos es:"<<c<<endl ;
	
	return 0;
}

