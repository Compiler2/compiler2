#include <header.h>

main_bench()
{
    static int a[105][105];
         int i,j,k,n,m;
    my_scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    for(j=0;j<m;j++)
        my_scanf("%d",&a[i][j]);


	     for(i=0,j=0;i<n;)
             {
			for(k=i;k<n&&i+j-k>=0;k++)
			    { my_printf("%d\n",a[k][i+j-k]); }
			   if(j!=m-1) j++;
			   else  if(j==m-1)  i++;
	      }
}