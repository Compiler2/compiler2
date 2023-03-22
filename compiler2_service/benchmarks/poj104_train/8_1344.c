#include <header.h>

int compare(const void * elem1, const void * elem2)
{
      return (*(int *)elem1) - (*(int *) elem2);
}
int main_bench()
{
      int N,M,i;
      my_scanf("%d%d",&N,&M);
      int a[N],b[M];
      for(i=0;i<N;i++)
      {
              my_scanf("%d",&a[i]);
      }
      for(i=0;i<M;i++)
      {
              my_scanf("%d",&b[i]);
      }
       qsort(a,N,sizeof(int),compare);
       for(i=0;i<N-1;i++)
       {
              my_printf("%d ",a[i]);
             
       }  
       my_printf("%d ",a[i]);
        qsort(b,M,sizeof(int),compare);
       for(i=0;i<M-1;i++)
       {
              my_printf("%d ",b[i]);
             
       }  
       my_printf("%d\n",b[i]);
       
       return 0;
}
