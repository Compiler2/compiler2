#define NUM_ITER 216293

#include <header.h>

int main_bench(){
int u[5][5],i,j;
for(i=0;i<5;i++)
{
   for(j=0;j<5;j++)
   {
      my_scanf("%d",&u[i][j]);
   }
}
int n,m;
my_scanf("%d%d",&m,&n);
if(n>4||m>4)
{
	my_printf("error\n");
}
else  
{
int t;
t=m;
m=n;
n=t;
for(i=0;i<n;i++)
{
	for(j=0;j<4;j++)
	{
	    my_printf("%d ",u[i][j]);
	}
	my_printf("%d\n",u[i][4]);
}
for(j=0;j<4;j++)
{
my_printf("%d ",u[m][j]);
}
my_printf("%d\n",u[m][4]);
for(i=n+1;i<m;i++)
{
	for(j=0;j<4;j++)
	{
	    my_printf("%d ",u[i][j]);
	}
	my_printf("%d\n",u[i][4]);
}
for(j=0;j<4;j++)
{
my_printf("%d ",u[n][j]);
}
my_printf("%d\n",u[n][4]);
for(i=m+1;i<5;i++)
{
  	for(j=0;j<4;j++)
	{
	    my_printf("%d ",u[i][j]);
	} 
	my_printf("%d\n",u[i][4]);
}
}

return 0;
}