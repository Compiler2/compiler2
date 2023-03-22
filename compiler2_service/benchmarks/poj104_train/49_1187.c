#define NUM_ITER 805706

#include <header.h>

int main_bench()
{
   char a[500],b[500],c[500];
   int i,k,j,l,m,h,x;
   gets(a);
   int n=strlen(a);
  
   for(i=1;i<n;i++)
    for(j=0;j<n-i;j++)
	{
	    m=0;
		x=0;
		for(k=j;k<=j+i;k++)
		{
			b[m]=a[k];
			m++;
		}
		for(l=0;l<m;l++)
		{
			c[l]=b[m-1-l];
		}
		for(h=0;h<m;h++)
		{
			if(b[h]!=c[h])
             x++;
			else x=x;
		}
		if(x==0)
		{
			for(k=j;k<=j+i;k++)
			my_printf("%c",a[k]);
			my_printf("\n");
		}
	}
   return 0;
}
