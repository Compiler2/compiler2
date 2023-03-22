#define NUM_ITER 29995

#include <header.h>

int main_bench()
{
	int n,i,j,len[250];
	char word[250][40];
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
	    my_scanf("%s",word[i]);
		len[i]=strlen(word[i]);
	}
	for(j=0,i=0;i<n;i++)
	{
		j+=len[i]+1;
		if(i!=n-1)
		{
		if(j-1>80)
		{
			my_printf("\n");
			i--;
			j=0;
		}else{
			if(j==80&&j-1==80)
			{
				my_printf("%s",word[i]);
				my_printf("\n");
			}else{
				if(j+len[i+1]>80)
				{
				my_printf("%s",word[i]);
				}else{
				my_printf("%s",word[i]);
				my_printf(" ");
				}
			}
		}
		}else{
			my_printf("%s",word[n-1]);
		}
	}
	return 0;
}

	
