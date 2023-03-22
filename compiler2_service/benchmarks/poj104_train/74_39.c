#define NUM_ITER 1191862

#include <header.h>

int f(int n)
{int x=0,t;
t=n;
while(n>0)
{x=x*10+n%10;
n=n/10;
}
if(t==x)return 1;
else return 0;
}
int g(int i)
{int j,t=0;
	for(j=2;j<i/2;j++)
		if(i%j==0) {return 0;break;}
		else t++;
if(t==i/2-1) return 1;		
}
int main_bench()
{int m,n,i,k=0;
my_scanf("%d %d",&m,&n);
for(i=m;i<=n;i++)
{if(f(i)&&g(i))
	{k++;
	if(k==1)my_printf("%d",i);
	else my_printf(",%d",i);
	}
}
if(k==0)my_printf("no\n");
else my_printf("\n");
}