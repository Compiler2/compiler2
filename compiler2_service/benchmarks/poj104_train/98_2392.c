#define NUM_ITER 30238

#include <header.h>

int main_bench()
{
    int n,i,c,j;
	char a[300][100];
	int l[300];
	my_scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
        l[i]=strlen(a[i]);
	}
	c=l[0];j=0;


    while (j<n)
	{
 	    while ((c<=80)&&(j<n))
		{
 
			if (c==l[j]) my_printf("%s",a[j]); else my_printf(" %s",a[j]);
  		    c++;j++;
  		    c=c+l[j];
		}
  		 my_printf("\n");
 		c=l[j];
	}
	return 0;
}
