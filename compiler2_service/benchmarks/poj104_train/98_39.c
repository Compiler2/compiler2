#include <header.h>

int main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	char s[500][41];
	for(i=0;i<n;i++)
	{
		my_scanf("%s",s[i]);
	}
	int count=-1;
	for(i=0;i<n;i++)
	{
		count+=strlen(s[i])+1;
		if((count-strlen(s[i])-1)==-1)
                {
                        my_printf("%s",s[i]);
                        continue;
                }
		else if(count>0&&count<=80)my_printf(" %s",s[i]);
		else if(count>80)
		{
			count=-1;
			i--;
			my_printf("\n");
		}
		

	}
    
	return 0;
}

