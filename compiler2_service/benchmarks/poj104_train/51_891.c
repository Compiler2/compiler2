#define NUM_ITER 842574

#include <header.h>



int main_bench()
{
	char s[600];
	int n,i,j,l;
	my_scanf("%d",&n);
	my_scanf("%s",s);
	l=strlen(s);
	int a[500]={0},max=0;
	int k;
	for(i=0;i<l;i++)
	{
	
		for(j=1+i;j<l;j++)
		{
			
			for(k=0;k<n;k++)
			{
				if(s[i+k]!=s[j+k])
					break;
			}
			if(k==n)
			{
				a[i]++;
				
			}		
		}
		
	}
	
	for(i=0;i<l;i++)
	{ 
		if(a[i]>max)
		{
			k=i;
			max=a[i];
		}
	}
	if(max==0)
		my_printf("NO");
	else


	{
	my_printf("%d\n",a[k]+1);
	for(j=0;j<l;j++)
	{
		if(a[j]==max)
		{
			for(k=0;k<n;k++)
				my_printf("%c",s[j+k]);
			my_printf("\n");
		}		
	}
	}
	
	return 0;
}
