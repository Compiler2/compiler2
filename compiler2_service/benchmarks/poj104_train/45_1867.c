#define NUM_ITER 1078657

#include <header.h>

int main_bench()
{
	char s1[50],s2[100],*p;
	my_scanf("%s %s",s1,s2);
	int n=strlen(s1),m=strlen(s2),d=0,k=0;
	for(p=s2;*p!='\0';p++)
	{
		k++;
		if(s1[0]==*p)
		{
			for(int i=0;i<n-1;i++)
			{
				if(s1[i]==*p)	
				{
					d++;
					p++;
				}
				else break;
			}
			if(d==n-1)
			{
		
				my_printf("%d",k-1);
			}
		}

	}
	return 0;
}
