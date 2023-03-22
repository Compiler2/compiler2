#define NUM_ITER 27873

#include <header.h>


int f(int x)
{  return x%2; }

int cmp(const void*a,const void*b)
{  return *(int*)a-*(int*)b; }

main_bench()
{
      int i,j=0,n,x;
      int *b;
      my_scanf("%d",&n);
      b=(int*)malloc(n*sizeof(int));
      for(i=0;i<n;i++)
      {
           my_scanf("%d",&x);
           if(f(x)){ b[j]=x;j++;}
      }
      qsort(b,j,sizeof(int),cmp);
      for(i=0;i<j-1;i++) my_printf("%d,",b[i]);
      my_printf("%d",b[i]);
 
}
