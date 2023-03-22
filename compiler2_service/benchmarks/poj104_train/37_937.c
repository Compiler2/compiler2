#define NUM_ITER 7605

#include <header.h>


int main_bench()
{
	int n,i,j,k,s,len;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		s=0;
		char a[100000];
		my_scanf("%s",a);
		len=strlen(a);
		int b[26]={0};
		for(j=0;j<len;j++)
		{
			for(k=97;k<123;k++)
			{
				if(a[j]==k)
				{
					b[k-97]++;
					break;
				}
				
			}
		}
		
		for(j=0;j<len;j++)
		{
			if(b[a[j]-97]==1)
			{
				my_printf("%c\n",a[j]);
				s=1;
				break;
			}
		}
		if(s==0)
		{
			my_printf("no\n");
		}

	}
	return 0;
}