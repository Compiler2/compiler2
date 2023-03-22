#define NUM_ITER 33289

#include <header.h>

int main_bench()
{
	char str[2000][50];
	int n,i,j,sum=0,geshu,ji=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%s",str[i]);
	for(i=0;i<n;i++)
	{
		j=0;
		geshu=0;
		while(str[i][j]!='\0')
		{
			geshu++;
			j++;
		}
		if(ji==0) 
		{
			my_printf("%s",str[i]);
		    sum=sum+geshu;
		}
		else
		{
			sum=sum+geshu+1;
			if(sum<=80)
				my_printf(" %s",str[i]);
			else
			{
				my_printf("\n%s",str[i]);
				sum=geshu;
			}
		}
		ji=1;
	}
	
	return 0;
}
		
