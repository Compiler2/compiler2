#include <header.h>

main_bench()
{
int n,m,i,k,s[1000];
memset(s,0,sizeof(s));
for(k=0;k<1000;k++) 
{my_scanf("%d %d",&n,&m);
for (i=2;i<=n;i++) 
s[i]=(s[i-1]+m)%i;
if(m==0)
break;
if(n==1)
my_printf("1\n");
else
my_printf("%d\n",s[n]+1);
}}