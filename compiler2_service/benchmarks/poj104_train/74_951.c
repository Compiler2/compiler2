#define NUM_ITER 1096582

#include <header.h>


int main_bench()
{
	int m, n;
	int a[100000];
	int temp, i, k, l, p, q, c, w=0;
	my_scanf("%d%d", &m, &n);
	k=n-m;

	for(i=0;i>=0&&i<=k;i++)
	{
		a[i]=m+i;

	}

	for(i=0;i>=0&&i<=k;i++)
	{
		temp=a[i];
		q=0;
		while(temp>0)
		{
			p=temp%10;
			q=q*10+p;
			temp=temp/10;
		}
     	if(q==a[i])
		{		
			for(c=2;c<a[i];c++)
				if(a[i]%c==0)
					break;			
			if(c>=a[i])
			{
				w++;
				if(w==1)
					my_printf("%d", a[i]);
				else
					my_printf(",%d", a[i]);
			}
		}
		
	}
	if(w==0)
		my_printf("no");
	my_printf("\n");
	return 0;
}