#define NUM_ITER 911558

#include <header.h>

int main_bench()
{
	unsigned i,j,k,n;
	char a[50],b[50];
	my_scanf("%s %s",a,b);
    for(i=0;i<=strlen(b)-strlen(a);i++)
	{
		n=0;
		for(j=i,k=0;k<strlen(a);j++,k++)
		{
			if((int)(a[k]-b[j])==0)
				n++;
		}
	    if(n!=strlen(a))
			continue;
		
			my_printf("%d",i);
		    break;
	
	}

	return 0;

}