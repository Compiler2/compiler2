#define NUM_ITER 10371

#include <header.h>

int main_bench()
{
	struct s{
		char n[20];
		int p1,p2,p3;
		char a,b;
	}st[100];
	int money[100]={0};
	int i,num;
	int sum=0,m,h;
	my_scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		my_scanf("%s %d %d %c %c %d",st[i].n,&st[i].p1,&st[i].p2,&st[i].a,&st[i].b,&st[i].p3);
	}
	for(i=0;i<num;i++)
	{
		if(st[i].p1>80&&st[i].p3>=1)
		{
			money[i]+=8000;
		}
		if(st[i].p1>85&&st[i].p2>80)
		{
			money[i]+=4000;
		}
		if(st[i].p1>90)
		{
			money[i]+=2000;
		}
		if(st[i].p1>85&&(int)st[i].b=='Y')
		{
			money[i]+=1000;
		}
		if(st[i].p2>80&&(int)st[i].a=='Y')
		{
			money[i]+=850;
		}
	}
	m=money[0];
	h=0;
	for(i=1;i<num;i++)
	{
		if(money[i]>m)
		{
			m=money[i];
			h=i;
		}
	}
	for(i=0;i<num;i++)
	{
		sum+=money[i];
	}
	my_printf("%s\n",st[h].n);
	my_printf("%d\n",m);
	my_printf("%d\n",sum);
	return 0;
}