#define NUM_ITER 5361

#include <header.h>

int n[100];
int main_bench()
{
	int x;
	my_scanf("%d",&x);
	int i;
	for(i=0;i<=x-1;i++) my_scanf("%d",&n[i]);
	void m(int a,int n[100]);
	m(x,n);
	my_printf("%d\n",n[0]);
	my_printf("%d\n",n[1]);
}
void m(int a,int n[100])
{
	int j;
	for(j=0;j<=a-2;j++)
	{
		int k;
		for(k=0;k<=a-2-j;k++)
		{
			if(n[k]<n[k+1])
			{
				int l;
				l=n[k];
				n[k]=n[k+1];
				n[k+1]=l;
			}
		}
	}
}