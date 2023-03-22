#define NUM_ITER 516

#include <header.h>

int main_bench()
{
	int n,i,j;
	char a;
	my_scanf("%d",&n);
    my_scanf("%c",&a);
	for(i=0;i<n;i++)
	{
        
		for(j=0;j<260;j++)
		{
			
			my_scanf("%c",&a);
			if(a=='\n')
			{
				my_printf("\n");
				break;
			}
			else if(a=='A')
			{
				my_printf("T");
			}
			else if(a=='T')
			{
				my_printf("A");
			}
            else if(a=='G')
			{
				my_printf("C");
			}
            else if(a=='C')
			{
				my_printf("G");
			}
		}
	}
	return 0;
}