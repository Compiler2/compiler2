#define NUM_ITER 14362

#include <header.h>

int main_bench()
{
    char a[255];
	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
        if(i!=0)
			my_printf("\n");
	    my_scanf("%s",&a);
		for(j=0;j<strlen(a);j++)
		{
			if(a[j]=='A')
				my_printf("T");
			if(a[j]=='T')
				my_printf("A");
			if(a[j]=='C')
				my_printf("G");
			if(a[j]=='G')
				my_printf("C");
		}
		memset(a,0,sizeof(a));
	}
	return 0;
}
