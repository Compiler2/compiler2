#define NUM_ITER 19809

#include <header.h>

int main_bench()
{int k,i,l,j,n=1,t,h,m;
char a[200];
my_scanf("%d",&n);
for(i=0;i<n;i++)
{my_scanf("%s",a);
l=strlen(a);
for(j=0;j<l;j++)
{my_printf("%c",a[j]);
}

my_printf("\n");
for(j=0;j<l;j++)
{
	if(a[j]=='(')
	{	a[j]='$';}
	else if(a[j]==')')
	{
		for (k=j;k>=-1;k--)
		{ if(k==-1)
			{a[j]='?';break;}
			if (a[k]=='$')
			{
				a[k]=' ';a[j]=' ';break;
			}
			
		}
		
	}
	else a[j]=' ';
	
}

for(j=0;j<l;j++)
{my_printf("%c",a[j]);
}

my_printf("\n");




}
return 0;
}