#include <header.h>

int main_bench(){
int n,j,i,m,k,s[100],t,sum;
my_scanf("%d",&n);
for(i=0;i<n;i++)
{
my_scanf("%d",&m);
for(j=0;j<m;j++)
my_scanf("%d",&s[j]);
if(m==0)my_printf("60\n");
else
{
k=sum=0;
for(t=1;t<=60;t++)
{

sum++;
if(sum==s[k]){t+=3;if(k<m-1)k++;}
}
my_printf("%d\n",sum);
}
}
}