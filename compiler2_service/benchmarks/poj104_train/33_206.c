#define NUM_ITER 26812

#include <header.h>

int main_bench()
{
	int n,l,i,j;
    char c[256];
	char d[5]="ATCG";
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
        my_scanf("%s",c);
		l=strlen(c);
		for(j=0;j<l;j++)
		{
			if(c[j]==d[0])
			{
				my_printf("T");
			}
            if(c[j]==d[1])
			{
				my_printf("A");
			}
            if(c[j]==d[2])
			{
				my_printf("G");
			}
            if(c[j]==d[3])
			{
				my_printf("C");
			}
		}
		my_printf("\n");
	}
	return 0;
}
