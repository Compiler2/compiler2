#define NUM_ITER 235482

#include <header.h>

int main_bench()
{
int check(int b[5][5],int k);
int i,j,k,m,n,t;

int a[5][5];
for(i=0;i<5;i++)
   for(j=0;j<5;j++)
	   my_scanf("%d",&a[i][j]);
my_scanf("%d %d",&n,&m);
if(check(a,n)==1&&check(a,m)==1)
{ for(i=0;i<5;i++)
  {
  t=a[n][i];
  a[n][i]=a[m][i];
  a[m][i]=t;
  }
for(i=0;i<5;i++)
{for(j=0;j<5;j++)
	 { my_printf("%d",a[i][j]);
     if(j<4)
		 my_printf(" ");}
my_printf("\n");}
}
else
my_printf("error");
}

check(int b[5][5],int k)
{
int flag=0;
if (k>=0&&k<=4)
  flag=1;
return(flag);

}