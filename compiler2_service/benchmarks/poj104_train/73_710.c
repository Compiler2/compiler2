#define NUM_ITER 210269

#include <header.h>

main_bench()
{
int a[6][6];
int i,j,x,y,max,k,s=0;
for(i=1;i<6;i++)
for(j=1;j<6;j++)
my_scanf("%d",&a[i][j]);
for(i=1;i<6;i++)
{
    max=1;
for(j=1;j<6;j++)
{
if(a[i][j]>a[i][max])
max=j;
}
for(k=1;k<6;k++)
if(a[k][max]<a[i][max])
break;
if(k==6)
{
my_printf("%d %d %d\n",i,max,a[i][max]);
s++;
}
}
if(s==0)
my_printf("not found");
getchar();
getchar();
}
