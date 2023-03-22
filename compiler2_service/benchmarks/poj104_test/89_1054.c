#include <header.h>

int main_bench()
{
int n,i,j,k=0,P[10000]={0};
my_scanf ("%d",&n);

for (;;)
{
my_scanf ("%d%d",&i,&j);
if (i==0&&j==0)
break;
P[j]++;
if (P[j]==(n-1))
{
my_printf("%d",j);k=1;break;}

}     
if(k==0)
my_printf("NOT FOUND") ;
}
