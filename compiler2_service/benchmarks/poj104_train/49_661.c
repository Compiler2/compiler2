#define NUM_ITER 826875

#include <header.h>

int main_bench()
{
	char s[600];
	my_scanf("%s",s);
	int l=strlen(s);
	int i,j,k;
	int hw;
	for(i=2;i<=l;i++)  
	{
		if(i%2==0)   
		{
			for(j=i/2-1;j<l-i/2;j++)  
			{
				hw=1;    
				for(k=1;k<=i/2;k++)
				{
					if(s[j-k+1]!=s[j+k])
					{
						hw=0;
						break;
					}
				}
				if(hw==1)
				{
					for(k=j-i/2+1;k<=j+i/2;k++)
					{
						my_printf("%c",s[k]);
					}
					my_printf("\n");
				}
			}
		}
		else
		if(i%2==1)  
		{
			for(j=i/2;j<l-i/2-1;j++)
			{             
				hw=1;
				for(k=1;k<=i/2;k++)
				{
					if(s[j-k]!=s[j+k])
					{
						hw=0;
						break;
					}
				}
				if(hw==1)
				{
					for(k=j-i/2;k<=j+i/2;j++)
					{
						my_printf("%c",s[k]);
					}
					my_printf("\n");
				}
			}
		}
	}
	return 0;
}
