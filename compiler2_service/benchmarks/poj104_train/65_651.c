#define NUM_ITER 31603

#include <header.h>

int main_bench()
{
	int a[200], b[200], i, r=0, n;
	my_scanf("%d", &n);
	for(i=0;i<=(n-1);i++)
	{
		my_scanf("%d%d", &a[i], &b[i]);
	}
	for(i=0;i<=(n-1);i++)
	{
		if(((a[i]==0)&&(b[i]==1))||((a[i]==1)&&(b[i]==2))||((a[i]==2)&&(b[i]==0)))
		{	
			r++;
		}
		else if(((b[i]==0)&&(a[i]==1))||((b[i]==1)&&(a[i]==2))||((b[i]==2)&&(a[i]==0)))
		{
			r--;
		}
	}
	if(r>0)
	{	
		my_printf("A");
	}
	else if(r<0)
	{	
		my_printf("B");
	}
	else if(r==0)
	{
		my_printf("Tie");
	}
	return 0;
}