#define NUM_ITER 836592

#include <header.h>

int main_bench()
{
	char a[600];
	my_scanf("%s",a);
	int L;
	int t;
	L=strlen(a);
	int i,j,k,p;
	for(i=2;i<=L;i++)
	{   
		if(i%2==0)
		{
			for(j=i/2-1;j<=L-i/2;j++)
			{    t=0;
				for(k=0;k<i/2;k++)
				{
					if(a[j-k]!=a[j+k+1])
					{	t=1;
					break;}
				}
				if(t==0)
				{for(p=j-i/2+1;p<=j+i/2;p++)
						my_printf("%c",a[p]);
				
					my_printf("\n");
				}
			}
		}
	}






	return 0;
}


