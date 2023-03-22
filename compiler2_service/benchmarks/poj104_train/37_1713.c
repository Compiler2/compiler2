#include <header.h>

main_bench()
{

int t,i=1,m;
my_scanf("%d",&t);
while(i<=t)
{char zifu[100000],q='0';
my_scanf("%s",&zifu);
m=strlen(zifu);
int k=0,j=0;
while(k<=m-2)
{j=0;
	while(j<=m-1&&q=='0')
	{if(zifu[k]==zifu[j]&&k!=j)
break;
else
j++;}
if(j==m)
{
q=zifu[k];
break;}
else
k++;
}
if(q=='0')
my_printf("no\n");
else
my_printf("%c\n",q);


i++;}}
