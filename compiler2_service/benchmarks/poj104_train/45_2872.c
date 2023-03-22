#define NUM_ITER 1053489

#include <header.h>

int main_bench()
{
	int i,j,mark;
	char a[52],b[52];
	my_scanf("%s %s",a,b);
	for(i=0;i<strlen(b)-strlen(a)+1;i++)
	{
		mark=0;
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]!=b[i+j]) 
			{
				mark=1;
				break;
			}
		}
		if(mark==0) break;
	}
	my_printf("%d",i);
	return 0;
} 