#include <header.h>

struct books
{char num[20];
char w[26];};
int main_bench()
{int k,j,i,m;
int b[150]={0};
my_scanf("%d",&m);
struct books a[1000];
for(i=0;i<m;i++)
{my_scanf("%s %s",a[i].num,a[i].w);
for(j=0;a[i].w[j]!='\0';j++)
b[a[i].w[j]]++;
   }
int max=0;
for(i='A',j=0;i<='Z';i++)
		if (max<b[i]) {max=b[i];j=i;}
 my_printf("%c\n",j);
my_printf("%d\n",max);
int n=0;
for(i=0;i<m;i++)
	{
		n=0;
		for(k=0;a[i].w[k]!='\0';k++)
			if (a[i].w[k]==j)n=1;
			if(n==1) my_printf("%s\n",a[i].num);

 }
}