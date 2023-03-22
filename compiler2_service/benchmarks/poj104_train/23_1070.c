#define NUM_ITER 988586

#include <header.h>


int main_bench()
{
	char a[100][100];
	int i=0,j;

			while(1)
	{
		my_scanf("%s",a[i]);
	    if ((a[i][0]>=65)&&(a[i][0]<=122))
			;
		else
			break;
		i++;
	
	}
	i--;
	for (j=i;j>=1;j--)
    my_printf("%s ",a[j]);
    my_printf("%s",a[0]);
    
	return 0;
}
