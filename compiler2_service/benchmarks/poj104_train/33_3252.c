#define NUM_ITER 28624

#include <header.h>

int main_bench()
{
    int n,i,j;
    char a[256];
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        my_scanf("%s",a);
        for(j=0;a[j]!='\0';j++)
	{
	    if(a[j]=='C') my_printf("G");
	    else if(a[j]=='G') my_printf("C");
	    else if(a[j]=='T') my_printf("A");
	    else my_printf("T");
	}
    my_printf("\n");
    }
    return 0;
}