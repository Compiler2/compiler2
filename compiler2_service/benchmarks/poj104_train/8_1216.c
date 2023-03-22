#define NUM_ITER 10090

#include <header.h>

int compare(const void * elem1, const void * elem2)
{
      return (*(int *)elem1) - (*(int *) elem2);
}
main_bench()
{
      int n,m;
      my_scanf("%d %d",&n,&m);
      int a[n],b[m];
      int i,j;
      for(i=0;i<n;i++)
            { my_scanf("%d",&a[i]);}
      for(i=0;i<m;i++)
             {my_scanf("%d",&b[i]);}
      qsort(a,n,sizeof(int),compare);
      qsort(b,m,sizeof(int),compare);
      int c[n+m];
      for(i=0;i<n;i++)
      {
                        c[i]=a[i];}
      for(i=n,j=0;i<m+n;i++,j++)
      {
                      c[i]=b[j];}
      for(i=0;i<n+m-1;i++)
       {
                        
                        my_printf("%d ",c[i]);}
                        my_printf("%d\n",c[i]);
     
}
