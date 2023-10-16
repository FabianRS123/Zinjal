#include <iostream>
#include<conio.h>
#include <windows.h>
#include <cstdlib>
#include <math.h>
#include <string.h>
using namespace std;
int leerEntero();
float leerReal();
void leerLetrasYNumeros(char dato[]);
char opcion ();
void leerLetras(char dato[]);

int leerEntero(){
	char car,dato[100];
	int n=0;
	do{
		car=getch();
		if((car>='0' && car<='9')|| car=='-'){
			cout<<car;
			dato[n]=car;
			n++;
		}
		else
		   if(car==8 && n>0){
			cout<<car; cout<<" "; cout<<car;
			n--;
		}
		   else
			  if(car==13)
			  cout<<endl;
	}while(car!=13);
	dato[n]=0;
	return atoi(dato);
}
float leerReal(){
	char car,dato[100];
	int n=0,punto=0;
	do{
		car=getch();
		if((car>='0' && car<='9')|| car=='-'){
			cout<<car;
			dato[n]=car;
			n++;
		}
		else
		   if(car=='.' && punto==0)
		{
			cout<<car;
			dato[n]=car;
			n++;
			punto++;
		}
		   else
			  if(car==8 && n>0){
			   cout<<car;
			   cout<<" ";
			   cout<<car;
			   if(dato[n-1]=='.')
				   punto--;
			   n--;
		   }
			  else
				 if(car==13) cout<<endl;
	}while(car!=13);
	dato[n]=0;
	return atof(dato);
}
void leerLetrasYNumeros(char dato[])
{
	char car;
	int n=0;
	do{
		car=getch();
		if((car>='0' && car<='9')|| car==' ' || (car>='a' && car<='z') || (car>='A' && car<='Z')){
			cout<<car;
			dato[n]=car;
			n++;
		}
		else
			if(car==8 && n>0){
			cout<<car;
			cout<<" ";
			cout<<car;
			n--;
		}
		else
			if(car==13) cout<<endl;
	} while(car!=13);
	dato[n]=0;
}
char opcion (){
	char resp;
	do{
		cout<<endl<<" desea continuar (s/n):";
		cin>>resp;
	} while(resp!='s' && resp!='n' && resp!='S' && resp!='N' );
	return resp;
}
void leerLetras(char dato[])
{
	char car;
	int n=0;
	do{
		car=getch();
		if((car==' ') || (car>='a' && car<='z') || (car>='A' && car<='Z')){
			cout<<car;
			dato[n]=car;
			n++;
		}
		else
			if(car==8 && n>0){
			cout<<car;
			cout<<" ";
			cout<<car;
			n--;
		}
		else
			if(car==13) cout<<endl;
	} while(car!=13);
	dato[n]=0;
}
