#define NUM_ITER 1060606

#include <header.h>

int main_bench()
{
	char c1[50],c2[50];
	char *q,*r,*p1,*p2;
	int n,m1,m2;
	p1=c1;
	p2=c2;
	my_scanf("%s%s",p1,p2);
	m1=strlen(p1);
	m2=strlen(p2);
	for (q=p2;q<=p2+m2-1;q++)
	{
		if (*q==*p1)
		{
			n=0;
			for (r=q+1;r<=q+m1-1;r++)
			{
				if (*r!=*(p1+(r-q)))
					n=1;
			}
			if (n==0)
			{
				my_printf("%d\n",q-p2);
				break;
			}
		}
	}
}