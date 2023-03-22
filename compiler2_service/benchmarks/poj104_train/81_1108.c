#define NUM_ITER 223038

#include <header.h>

int main_bench()
{
int n,a[5][5],i,j,m,k;
for(i=0;i<5;i++)
{for(j=0;j<5;j++){
my_scanf("%d",&a[i][j]);}}


my_scanf("%d %d",&n,&m);
if(m>=0&&n<5&&m<5&&n>=0)
{
for(i=0;i<5;i++)
{k=a[m][i];a[m][i]=a[n][i];a[n][i]=k;}
for(i=0;i<5;i++)
{for(j=0;j<5;j++){
if(j<=3)
my_printf("%d ",a[i][j]);
else my_printf("%d\n",a[i][j]);}}
return 1;}
else my_printf("error");


return 0;}
