#define NUM_ITER 1107340

#include <header.h>

int main_bench()
{
int m,n;
my_scanf("%d%d",&m,&n);

int shu[1000];
int shushu=1;
int test;
test=m;

for(;test<=n;test++)
{

int huiwen[10];
int i=1;
int k;
int tester=test;
for(i=1;tester!=0;i++)
{
huiwen[i]=tester%10;
tester=tester/10;
k=i;
}
i=i-1;
int counter=1;
int testhuiwen=0;
for(i=k;i>=1;i--)
{
testhuiwen=huiwen[i]*counter+testhuiwen;
counter=counter*10;
}

if(test==testhuiwen)
{
	int yinzi=2;
	for(;yinzi<=test;yinzi++)
	{
		if((test%yinzi)!=0)
		{   k=yinzi;
			continue;
		}
		else
		{break;}
	}
    if (yinzi==test)
    {shu[shushu]=test;
	shushu++;}
    else {}
}
else
{continue;}
}

if(shu[1]==0)
{my_printf("no");}
else
{
int p=1;
for(;p<(shushu-1);p++)
{my_printf("%d,",shu[p]);
}

my_printf("%d",shu[p]);
}




return 0;
}