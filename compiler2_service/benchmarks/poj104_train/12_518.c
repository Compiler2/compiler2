#include <header.h>


int main_bench()
{
	int i,j,t=-1,s=0;
	int a[10000];
	for(i=0;i<=10000;i++)
	{
		my_scanf("%d",&a[i]);
		if(a[i]==-1)
			break;
		else if(a[i]==0)
		{
			t=i;
			my_printf("%d\n",s);
		    s=0;
		}
		else
		{
			for(j=t+1;j<i;j++)
			{
				if(a[i]==2*a[j]||a[j]==2*a[i])
					s=s+1;
			}

		}
	}




	return 0;
}