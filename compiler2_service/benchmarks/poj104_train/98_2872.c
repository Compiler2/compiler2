#define NUM_ITER 13838

#include <header.h>

int main_bench()
{
	int n;
	my_scanf("%d",&n);
	char **p=(char **)malloc((n+5)*sizeof(char *));
	for(int i=0;i<n;i++)
	    {
		p[i]=(char *)malloc(sizeof(char)*41);
		my_scanf("%s",p[i]);	
		}
	int count=0;
	for(int i=0;i<n;i++)
	    {
		if(count==0)
			{
			my_printf("%s",p[i]);
			count+=strlen(p[i]);	
			}	
		else
			{
			if(count+strlen(p[i])+1<=80)
				{
				my_printf(" %s",p[i]);
				count+=(strlen(p[i])+1);	
				}	
			else
				{
				my_printf("\n");
				my_printf("%s",p[i]);
				count=strlen(p[i]);
				}	
			}
		}
}