#define NUM_ITER 2354

#include <header.h>

int temp;
int flag=0;
int time;
void paixu(int a[],int n,int time)
{
    int i,j;
for(i=0;i<n;i++)
{
for(j=0;j<n-1-i;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}

for(i=0;i<n;i++)
{
if((time==1)&&i==0)my_printf("%d",a[i]);
else my_printf(" %d",a[i]);
}}
int main_bench()
{
int a[100],b[100];
int n1,n2;
my_scanf("%d%d",&n1,&n2);
int i,j;
for(i=0;i<n1;i++)
my_scanf("%d",&a[i]);
for(i=0;i<n2;i++)
my_scanf("%d",&b[i]);
paixu(a,n1,1);
paixu(b,n2,2);
}

