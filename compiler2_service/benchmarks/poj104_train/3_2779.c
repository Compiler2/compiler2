#define NUM_ITER 49524

#include <header.h>



int main_bench()
{
    int n,k,i,j;
    my_scanf("%d%d",&n,&k);
    int*num=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)my_scanf("%d",num+i);
    for(i=0;i<=n/2;i++)
        for(j=0;j<n;j++)
      {if(*(num+i)+*(num+j)==k)   {my_printf("yes\n");return 0;}
      else continue;}
      my_printf("no\n");
      return 0;


}
