#define NUM_ITER 25109

#include <header.h>


int main_bench()
{
	int a[3], n,c,b,d,g[3], i,temp;

	int j = 0;
	my_scanf("%d",&n);
	for(i = 0; i < 3; i++)
	{
		my_scanf("%d %d %d", &d,&b,&c);
		g[i] = d;
		a[i] = b+c;
	}

	for (i = 0; i < 3 - 1; i++)
		for (j = 0; j < 3 - 1 - i; j++)
			if (a[j] < a[j+1]) {
				temp = a[j] ;
				a[j] = a[j+1];
				a[j+1] = temp;
				temp = g[j];
				g[j] = g[j+1];
				g[j+1] = temp;
			}

	for(i=3;i<n;i++)
	{
		my_scanf("%d %d %d",&d,&b,&c);
		temp=b+c;

		
		if(temp <= a[2])
		{
			continue;
		} else {
			if (a[1] >= temp){
				a[2] = temp;
			g[2]=d;
			}
			else {
				a[2] = a[1];
				g[2]=g[1];
				if(a[0] >=temp){
					a[1]=temp;
				    g[1]=d;
				}
				else {
					a[1]=a[0];
					g[1]=g[0];
						a[0]=temp;
						g[0]=d;
				}
			}
		}
	}

			my_printf("%d %d\n%d %d\n%d %d\n",g[0],a[0],g[1],a[1],g[2],a[2]);
}