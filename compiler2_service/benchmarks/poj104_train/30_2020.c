#define NUM_ITER 57376

#include <header.h>


int main_bench()
{
    int n, i, j, p, sum;
    my_scanf("%d", &n);

    sum=0;
    for(i=1; i<=n; i++)
    {
        p=0;     
		j=i;
		if(j%7==0) p=1;
		else
		{
			while(j>=7)
			{
				if(j%10==7)
				{
					p=1;
			 	    break;
				}
                j=(j-j%10)/10;
			}
		    if(p==0) sum+=i*i;
		}
    }

    my_printf("%d\n", sum);
    return 0;
}