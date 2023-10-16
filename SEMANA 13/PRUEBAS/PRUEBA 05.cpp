#include "matriz.h"
using namespace std;

void ndato (int &n);
void diagonalprincipalmodificada (float M[][MAX],int f, int c);

int main(int argc, char *argv[]) {
	float M[MAX][MAX];
	int n;
	ndato (n);
	diagonalprincipalmodificada (M,n,n);
	reporte (M,n,n);
	return 0;
}
void ndato (int &n){
	do{
		cout<<"ingrese un numero: ";
		cin>>n;
	} while(n<=0);
}
void diagonalprincipalmodificada (float M[][MAX],int f, int c){
	int i,j;
	for (i=f-1;i>=0;i--){
		for (j=c-1;j>=0;j--){
			if (j==i){
				M[i][j]=1;
			//	cout<<M[i][j]<<"\t";
			}
			else {
				M[i][j]=0;
			//	cout<<M[i][j]<<"\t";
			}
			
		}
		//cout<<endl;
	}

}
