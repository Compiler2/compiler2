#define NUM_ITER 1594255

#include <header.h>

main_bench()
{
      int num[300],n,N,i,max;
      char ch;
      n=0;
      do { my_scanf("%d%c",&num[n],&ch);
           n=n+1;}
      while(ch==',');
      N=n;
      max=0;
      for(i=0;i<N;i++)
        if(num[i]>max)
         max=num[i];
      for(i=0;i<N;i++)
        if(max==num[i])
         num[i]=0;
      max=0;
      for(i=0;i<N;i++)
        if(num[i]>max)
          max=num[i];
      if(max!=0)
       my_printf("%d",max);
      else
       my_printf("No");
}