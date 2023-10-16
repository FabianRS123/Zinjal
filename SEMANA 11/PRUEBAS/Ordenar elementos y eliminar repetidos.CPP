#include<iostream>
#include<conio.h>
using namespace std;
#define MAX 50
void leer(int,int[]);
void ordenar(int, int[]);
void listaordenar(int,int[]);
 
int main(int argc, char *argv[]) {
int n, x[MAX],j,k,i;
 cout<<"Ingresar limite:";
 cin>>n;
 leer(n,x);
 ordenar(n,x);
 cout<<"La lista ordenada es:"<<endl;
 listaordenar(n,x);
 for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
   if(x[i]==x[j])
   {for(k=j;k<n-1;k++)
    x[k]=x[k+1];
    n=n-1;
    j=i;
   }
 cout<<endl<<"La nueva lista tiene:"<<n<<"elementos"<<endl;
 for(i=0;i<n;i++)
 cout<<x[i]<<endl;
}
void leer(int n, int a[])
{for(int i=0;i<n;i++)
 {cout<<"Numero ["<<i<<"]:";
  cin>>a[i];
  }
}
 
void ordenar(int n, int a[])
{int i, j, temp;
for(i=0;i<n;i++)
 for(j=n-1;j>=i;j--)
  if(a[j-1]>a[j])
  {temp=a[j-1];
   a[j-1]=a[j];
   a[j]=temp;
  }
}
void listaordenar(int n, int a[])
{
 for( int i=0;i<n;i++)
 {cout<<a[i];
  cout<<endl;
  }
}
 
void eliminar(int n, int a[])
{int i,j,k;
 for(i=0;i<n;i++)
  for(j=i+1;j<n;j++)
   if(a[i]==a[j])
   {for(k=j;k>n-1;k++)
    {a[k]=a[k+1];
    n=n-1;
    j=i;
   }
}
}
