#include <iostream>
using namespace std;

const int TAM = 3;

int main(int argc, char *argv[]) {
	int m[TAM][TAM], num, i, j;
	num=1;
	i = 0;
	j = TAM/2;
	m[i][j] = num;
	//cout<<"m["<<i<<"]["<<j<<"]: "<<num<<endl;
	for(num=2; num<=TAM*TAM; num++) {
		
		if(i == 0)
			i = TAM-1;
		else
			i--;
		if(j == TAM-1)
			j = 0;
		else
			j++;
		//cout<<"m["<<i<<"]["<<j<<"]: "<<num<<endl;
		m[i][j] = num;
		
		if(num%TAM == 0) {
			i++;
			num++;
			m[i][j] = num;
			//cout<<"m["<<i<<"]["<<j<<"]: "<<num<<endl;
		}
		
	}
	
	cout<<endl<<endl;	
	for(i=0; i<TAM; i++) {
		for(j=0; j<TAM; j++)
			cout<<"\t"<<m[i][j];
		cout<<endl;
	}
	return 0;
}
 
