#define NUM_ITER 3737

#include <header.h>

main_bench()
{
  int i,j,k,l,m,n;
  char id[200][200];
  int age[100];
  my_scanf("%d",&n);
  for(i=0;i<n;i++)
  {
   my_scanf("%s %d",id[i],&age[i]);
   }
   for(j=200;j>=60;j--)
   {
      for(i=0;i<n;i++)             
      { if(age[i]==j)
        my_printf("%s\n",id[i]);}
   }
   for(i=0;i<n;i++)
    if(age[i]<60)
     my_printf("%s\n",id[i]);
   getchar();
   getchar();
}
    
    