#define NUM_ITER 26285

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char s[1000][50]={0};
	int i=0,j=0,a[1000]={0},z[1000]={0};
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
		a[i]=strlen(s[i]);
	}
	for(i=0;i<n-1;i++)
	{
		if(z[j]+a[i]<=80&&z[j]+a[i]+1+a[i+1]<=80)
		{
			my_printf("%s ",s[i]);
			z[j]=z[j]+a[i]+1;
		}
		else if (z[j]+a[i]<=80&&z[j]+a[i]+1+a[i+1]>80)
		{
			my_printf("%s",s[i]);
			z[j]=z[j]+a[i]+1;
		}
		else if(z[j]+a[i]>80)
		{
			j++;
			my_printf("\n%s ",s[i]);
			z[j]=z[j]+a[i]+1;
		}
                  	}

	
my_printf("%s",s[n-1]);
	return 0;
}