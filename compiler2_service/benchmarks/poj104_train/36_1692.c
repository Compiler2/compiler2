#define NUM_ITER 630743

#include <header.h>

int main_bench()
{
char a[500]={0},b[500]={0};
int c[500]={0};
int i,j,k,l1,l2;
my_scanf("%s %s",a,b);
l1=strlen(a);
l2=strlen(b);
if(l1!=l2)
{my_printf("NO");return 0;}
else
{
for(i=0;i<l1;i++)
for(j=0;j<l2;j++)
if((b[j]==a[i])&&(c[j]==0))
{c[j]=1;break;}

int sum=0;
for(i=0;i<l2;i++)
sum=sum+c[i];
if(sum==l1)
my_printf("YES");
else
my_printf("NO");


}


}