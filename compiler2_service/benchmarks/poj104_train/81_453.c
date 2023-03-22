#define NUM_ITER 194550

#include <header.h>

int main_bench()
{
int f(int b[5][5],int n,int m);
int a[5][5];
int i,j,k,m,n,t;
for(i=0;i<5;i++)
  for (j=0;j<5;j++)
	  my_scanf("%d",&a[i][j]);
my_scanf("%d %d",&n,&m);
k=f(a,n,m);
if(k==0)
  my_printf("error");
if (k==1)
{  for (j=0;j<5;j++)
	 { t=a[n][j];
      a[n][j]=a[m][j];
	  a[m][j]=t;}
  for (i=0;i<5;i++)
  {for (j=0;j<4;j++)
		  my_printf("%d ",a[i][j]);
	  my_printf("%d\n",a[i][4]);}
}
}

f(int b[5][5],int n,int m)
{
int i,j,k,e,f;
e=0;f=0;
for(i=0;i<5;i++)
  for(j=0;j<5;j++)
	  if (b[i][j]==n)
	  {e=1;
	  break;}
for (i=0;i<5;i++)
  for (j=0;j<5;j++)
	  if (b[i][j]==m)
	  {f=1;
	  break;}
if(e==1&&f==1&&n<5&&m<5)
   k=1;
else k=0;
return (k);


}