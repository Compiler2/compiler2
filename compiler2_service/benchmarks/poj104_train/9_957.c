#define NUM_ITER 5136

#include <header.h>


int num,n=0;
struct pa
{
	char id[10];
	int age;
	int o;
}*p;

int operate()
{
	struct pa *pi,*pj;
	int agem=0,om=0;
	for(pi=p;pi<p+num;pi++)
	{
		if(pi->o==0)
			continue;
		for(pj=p;pj<p+num;pj++)
		{
			if(pj->o==0)
				continue;
			if(pj->age<pi->age)
				pi->o++;
		}
		if(pi->o>om)
			om=pi->o;
	}
	return om;
}
void print(int om)
{
	int k;
	struct pa *pi;
	for(k=om;k>=0;k--)
		for(pi=p;pi<p+num;pi++)
		{
			if(pi->o==k)
			{
				if(n==0)
				{
					my_printf("%s",pi->id);
					n++;
				}
				else
					my_printf("\n%s",pi->id);
			}
		}
}

main_bench()
{
	my_scanf("%d",&num);
	struct pa *pi;
	int om;
	p=(struct pa*)malloc(num*sizeof(struct pa));
	for(pi=p;pi<p+num;pi++)
	{
		my_scanf("%s %d",pi->id,&pi->age);
		if(pi->age>=60)
			pi->o=1;
		else pi->o=0;
	}
	om=operate();
	print(om);
}
