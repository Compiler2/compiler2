#include <header.h>

int main_bench()
{
	int n,t1=0,t2=0,i=0;
	my_scanf("%d",&n);
	int sz[100];
	
			while(i<n)
	{
			my_scanf("%d",&sz[i]);
            if(i==0)
			{
					t1=sz[i];
					t2=sz[i];

			}
			else{
			if(t1<=sz[i])
			{
				t1=sz[i];
			}
			if(t2<=sz[i]&&t1>sz[i])
				t2=sz[i];
			}
		i++;
	}
	my_printf("%d\n%d",t1,t2);
	return 0;
}