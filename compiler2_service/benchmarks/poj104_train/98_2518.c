#define NUM_ITER 30746

#include <header.h>


int main_bench()
{
    int n;
	my_scanf("%d",&n);
	char word[1000][41];
	int len[1000];
	int i;
	for(i=0;i<n;i++)
	{
		my_scanf("%s",word[i]);
		len[i]=strlen(word[i]);

	}
	int m=0;
	int flag=0;
	for(i=0;i<n;i++)
	{
		if(m==0)
		      {m+=(len[i]);flag=1;}
		else m+=(len[i]+1);
		if(m<=80)
		{
			if(flag==1)
			{my_printf("%s",word[i]);flag=0;}
			else my_printf(" %s",word[i]);

		}
		else
		{
			m=0;
			my_printf("\n");
			i--;
		}
	}

	

    return 0;

}