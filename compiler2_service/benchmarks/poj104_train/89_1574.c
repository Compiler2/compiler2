#define NUM_ITER 83744

#include <header.h>

int main_bench()
{
	int a[10000][2];
	int n,i;
	memset(a,0,sizeof(a));
	my_scanf("%d",&n);
	int b,c,f;
	while(my_scanf("%d %d",&b,&c))
	{
		if(b==0&&c==0)
			break;
		a[b][0]=1;
		a[c][1]++;
	}
	f=0;
	for(i=0;i<n;i++)
	{
		if(a[i][0]==0&&a[i][1]==n-1)
		{
			f=1;
			my_printf("%d\n",i);
		}
	}
	if(f==0)
		my_printf("NOT FOUND\n");
}