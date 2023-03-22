#define NUM_ITER 12168

#include <header.h>

main_bench()
{
 int n;
 my_scanf("%d",&n);
 int*p;
 p=(int*)malloc(n*sizeof(int));
 int i,j;
 for(i=0;i<n;i++)
 my_scanf("%d",&p[i]); 
 my_printf("%d",p[0]); 
 for(i=1;i<n;i++)  
 {
  for(j=0;j<i;j++)
  {
   if(p[i]==p[j])
   break;
  }
  if(j==i)
  my_printf(" %d",p[i]);
 } 
 getchar();
 getchar();
 getchar();
 getchar();
 getchar();
 getchar();
}
