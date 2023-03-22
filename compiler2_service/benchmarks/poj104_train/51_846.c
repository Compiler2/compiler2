#include <header.h>

int main_bench()
{int i,j,k,max=0,t,len,n,b[501]={0};
char a[501]={'\0'};
my_scanf("%d",&n);
getchar();
gets(a);
len=strlen(a);
for(i=0;i<len;i++)
{	for(k=i;k<len-n+1;k++)
	{t=0;
		for(j=0;j<n;j++)
		{	if(a[i+j]!=a[k+j])
			t=1;
		}
	if(!t)
		b[i]++;
	}
}
for(i=0;i<len-n+1;i++)
	if(b[i]>max)
		max=b[i];

t=0;
for(i=0;i<len-n+1;i++)
	if(b[i]>1)
	{t=1;
	break;
	}
if(!t)
	{my_printf("NO");
	return;
	}
my_printf("%d\n",max);
for(i=0;i<len-n+1;i++)
	if(b[i]==max)
	{	for(j=0;j<n;j++)
		{my_printf("%c",a[i+j]);
		}
	my_printf("\n");
	}
}