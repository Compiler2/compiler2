#define NUM_ITER 36217

#include <header.h>


main_bench()
{
      int n,ai=0,bi=0,c;
      my_scanf("%d",&n);
      int a,b;
      for(c=0;c<n;c++)
      {
        my_scanf("%d %d",&a,&b);
        if(a==b)
                ;
        else
      {
        if(a==0 && b==1)
        ai++;
        else 
        {
          if(a==1 && b==2)
          ai++;
          else
            {
            if(a==2 && b==0)
             ai++;
             else
             bi++;
            }
        }
        }
      }
      if (ai>bi)
      my_printf("A");
      else ;
      if (ai==bi)
      my_printf("Tie");
      else ;
      if (ai<bi)
      my_printf("B");
      else ;
}
