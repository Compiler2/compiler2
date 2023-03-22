#define NUM_ITER 3304

#include <header.h>

int main_bench()
{
	int m,n,i,j,a=0,w=0,c=0;
	int s[1001],t[1001];
    my_scanf("%d",&s[c]);
	while(getchar()==',')
	{
		c++;
		my_scanf("%d",&s[c]);
	}
	m=c;
	c=0;
   my_scanf("%d",&t[c]);
	while(getchar()==',')
	{
		c++;
		my_scanf("%d",&t[c]);
	}

	for(i=0;i<10001;i++)
	{
		for(j=0;j<=m;j++)
		{

		 if(i>=s[j]&&i<t[j])
		 {
			 w++;
		 }
		}
		if(w>a)
			a=w;
		w=0;
	}
	c=(m+1);
	my_printf("%d %d",c,a);
}

