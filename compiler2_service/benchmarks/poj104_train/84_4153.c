#define NUM_ITER 64663

#include <header.h>

int main_bench()
{
	int s[100000],i,j,k,t,n;
	my_scanf("%d",&n);
	for (i=1;i<=n;i++)
		my_scanf("%d",&s[i]);
	for (i=10;i>=2;i--)
	 if			(s[i]>s[i-1])		
	 {
			t=s[i-1];
			s[i-1]=s[i];
			s[i]=t;
	 }
	for (i=10;i>=3;i--)
		if (s[i]>s[i-1])
		{
			t=s[i-1];
			s[i-1]=s[i];
			s[i]=t;
		}
		my_printf("%d\n",s[1]);my_printf("%d\n",s[2]);
		return 0;
}
		 




