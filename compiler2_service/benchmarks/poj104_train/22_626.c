#define NUM_ITER 1944129

#include <header.h>

int main_bench()
{
	int a[300],i,n=0;
	int y,z;
	do
	{
		my_scanf("%d",&a[n++]);
	}
	while(getchar()==',');
    if(n==1) my_printf("No\n");
    else
    {
    	y=a[0];
        for(i=0;i<n;i++)
    	   if(a[i]>y) y=a[i];
 	    i=0;
        while(z=a[i]==y&&i<n)i++; 
        if(i==n)	 my_printf("No\n");
        else
        {for(i=0;i<n;i++)
 	       if(a[i]!=y&&a[i]>z) z=a[i]; 
         my_printf("%d\n",z);}
    }
}