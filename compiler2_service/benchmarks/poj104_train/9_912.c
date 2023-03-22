#define NUM_ITER 1467

#include <header.h>

int main_bench()
{
	int i,j,n,e;
	char q[11];
	struct point
	{
		char name[11];
		int age;
	}
	p[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s%d",&p[i].name,&p[i].age);
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if((p[i].age>60||p[i].age==60)&&(p[i+1].age>60||p[i+1].age==60)&&p[i].age<p[i+1].age||p[i].age<60&&(p[i+1].age>60||p[i+1].age==60))
			{
				e=p[i].age;
				p[i].age=p[i+1].age;
				p[i+1].age=e;

				strcpy(q,p[i].name);
				strcpy(p[i].name,p[i+1].name);
				strcpy(p[i+1].name,q);
			}
		}
	}
	for(i=0;i<n;i++)
	{
		my_printf("%s",p[i].name);
		if(i!=n-1)
		{
			my_printf("\n");
		}
	}
	return 0;
}
