#include <header.h>


void play(int n[],int l);

int main_bench()
{
	int n,m,i;
	int num[100];
	my_scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		my_scanf("%d",&num[i]);
	for(i=1;i<=m;i++)
	    play(num,n);
	for(i=0;i<n;i++)
	{
		if(i!=0)
			my_printf(" ");
		my_printf("%d",num[i]);
	}
	my_printf("\n");
	return 0;
}

void play(int n[],int l)
{
	int k,t;
	t=n[l-1];
	for(k=l-1;k>0;k--)
		n[k]=n[k-1];
	n[0]=t;
}