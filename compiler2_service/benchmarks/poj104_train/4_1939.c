#define NUM_ITER 549

#include <header.h>

int main_bench()
{
    int n,m,a[100][100],row,col,i;
    my_scanf("%d %d",&n,&m);
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            my_scanf("%d",&a[row][col]);
        }
    }
    if(n<m)
    {
       for(i=0;i<n;i++)
       {
           for(row=0;row<=i;row++)
               my_printf("%d\n",a[row][i-row]);
       }
       for(i=n;i<m;i++)
       {
           for(row=0;row<n;row++)
               my_printf("%d\n",a[row][i-row]);
       }
       for(i=m;i<n+m-1;i++)
	   {
		   for(col=m-1;col>=i-n+1;col--)
           my_printf("%d\n",a[i-col][col]);
	   }
    }
    if(n>=m)
    {
        for(i=0;i<m;i++)
        {
            for(row=0;row<=i;row++)
                my_printf("%d\n",a[row][i-row]);
        }
        for(i=m;i<n;i++)
        {
            for(col=m-1;col>=0;col--)
				my_printf("%d\n",a[i-col][col]);
        }
		for(i=n;i<n+m-1;i++)
		{
			for(col=m-1;col>=i-n+1;col--)
			my_printf("%d\n",a[i-col][col]);
		}
    }
	return 0;
}