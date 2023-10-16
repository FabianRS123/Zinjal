#include "matriz.h"
using namespace std;

void promedioalumno (float M[][MAX],int f,int c,float pro[MAX]);
void promedioexamen (float M[][MAX],int f,int c,float prou[MAX]);
void mayorfil (float M[][MAX],int f,int c,float pro [MAX]);
void mayornota(int f,int c,float pro[MAX],int &x);
void mayorexamen(int f,int c,float prou[MAX],int &y);

int main(int argc, char *argv[]) {
	float M[MAX][MAX],pro [MAX],prou[MAX];
	int f,i,j,x,y;
	char resp;
	do{
		system ("cls");
		ndatos (f,4);
		ingresonota (M,f,4);
		cout<<"datos ingresados: "<<endl;
		reportenota (M,f,4);
		promedioalumno(M,f,4,pro);
		for (i=0;i<f;i++)
			cout<<"promdedio de alumno "<<i+1<<" = "<<pro[i]<<endl;
		promedioexamen (M,f,4,prou);
		for (j=0;j<4;j++)
			cout<<"promedio de examen "<<j+1<<" = "<<prou[j]<<endl;
		mayornota (f,4,pro,x);
		cout<<"el alumno "<<x+1<<" fue quien tuvo mayor promedio con: "<<pro[x]<<endl;
		mayorexamen (f,4,prou,y);
		cout<<"el examen "<<y+1<<" fue el que tuvo mayor calificacion con: "<<prou[y]<<endl;
		resp=opcion ();
	} while(resp=='s' || resp=='S');
	return 0;
}
void promedioalumno (float M[][MAX],int f,int c,float pro[MAX]) {
	int i,j;
	float su;
	for (i=0;i<f;i++){
		su=0;
		for (j=0;j<c;j++){
			su=su+M[i][j];
		}
		pro[i]=su/c;
	}
}
void promedioexamen (float M[][MAX],int f,int c,float prou[MAX]){
	int i,j;
	float su;
	for (j=0;j<c;j++){
		su=0;
		for (i=0;i<f;i++){
			su=su+M[i][j];
		}
		prou[j]=su/f;
	}
}
void mayornota(int f,int c,float pro[MAX],int &x){
	int i=0;
	float may;
	may=pro[0];
	while(i<f){
		if(may<pro[i]){
			may=pro[i];
		}
		i++;
	}
	for(i=0;i<f;i++){
		if(may==pro[i])
			x=i;
	}
}
void mayorexamen(int f,int c,float prou[MAX],int &y){
	int j=0;
	float may;
	may=prou[0];
	while(j<c){
		if(may<prou[j]){
			may=prou[j];
	}
	j++;
	}
	for(j=0;j<c;j++){
		if(may==prou[j])
			y=j;
	}
}
