#include <header.h>

int su(int k)
{int i,t;
t=1;
for(i=2;i<k;i++)
{
	if(k%i==0)
	{t=0;
	break;}
}
return (t);
}
int main_bench()
{int n,i,j,k;
k=0;
my_scanf("%d",&n);
for(i=2;i<n-1;i++)
{if(su(i)==1&&su(i+2)==1)
{k=1;
my_printf("%d %d\n",i,i+2);
}
}
if(k==0)
my_printf("empty");
return 0;
}

