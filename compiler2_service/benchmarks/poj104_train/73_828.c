#define NUM_ITER 215748

#include <header.h>

main_bench()
{
int a[5][5];
int p=0;
int max,min,t,c;
int i,j;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
my_scanf("%d",&a[i][j]);
for(i=0;i<5;i++)
{
max=a[i][0];
t=0;
for(j=1;j<5;j++)
{
if(a[i][j]>max)
{max=a[i][j];
t=j;
}
}
min=max;
for(j=0;j<5;j++)
{
if(a[j][t]<min)
{
min=a[j][t];
break;}
}
if(max==min)
{my_printf("%d %d %d",i+1,t+1,max);
p=1;}
}
if(p==0)
my_printf("not found");
}