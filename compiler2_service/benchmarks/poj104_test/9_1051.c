#define NUM_ITER 15835

#include <header.h>

struct v
{
	char a[10];
	int b;
};
int main_bench()
{
	int n,i,j=0,l,k;
	struct v *c;
	struct v e[100],y;
	my_scanf("%d",&n);
	c=(struct  v*)malloc(n*sizeof(struct v));
	for(i=0;i<n;i++)
	{
		my_scanf("%s %d",c[i].a,&c[i].b);
	}
	for(i=0;i<n;i++)
	{
		if(c[i].b>=60)
		{
			e[j]=c[i];
			j=j+1;
		}

	}
    k=j;
	for(l=1;l<k;l++)
	{
		for(j=0;j<k-l;j++)
		{
			if(e[j].b<e[j+1].b)
			{
				y=e[j];
				e[j]=e[j+1];
				e[j+1]=y;

			}
		}
	}
	for(j=0;j<k;j++)
	{
		my_printf("%s\n",e[j].a);
	}
	for(i=0;i<n;i++)
	{
		if(c[i].b<60)
		{
			my_printf("%s\n",c[i].a);
		}
	}
  return 0;
}