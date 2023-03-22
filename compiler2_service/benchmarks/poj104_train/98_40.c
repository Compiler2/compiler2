#define NUM_ITER 29651

#include <header.h>

int main_bench()
{
	int n,i,j,k,len[8000],sum=0,a;
	char str[8000][40];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&str[i]);
		len[i]=strlen(str[i]);
	}
	for(j=0;j<(n-1);j++)
	{
		sum=sum+len[j];
		if(sum<=80)
			my_printf("%s",str[j]);
	

		a=sum+len[j+1];
		if(a<80)
		{
			my_printf(" ");
			sum++;
		}
		if(a>=80)
		{
			my_printf("\n");
			sum=0;
		}
	}
    if(a<=80)
		{
			my_printf("%s",str[n-1]);
		}
		if(a>80)
		{
			my_printf("\n");
			my_printf("%s",str[n-1]);
		}


	return 0;
}





