#define NUM_ITER 3714

#include <header.h>

 int main_bench()
 {
     int n,i;
     my_scanf("%d",&n);
     if(n>=5) 
     {
              for(i=5;i<=n;i++)
        {
         int a,b=0,c;
         for(a=2;a<i;a++)
           { 
            if(i%a==0)
            b=b+1;
            } 
          if(b==0)
          {

           for(c=2;c<i-2;c++)
           { 
            if((i-2)%c==0)
            b=b+1;
            } 
          
            if(b==0)
            my_printf("%d %d\n",i-2,i);
            }
            b=0;
        }
     }
    
          else my_printf("empty");
     
     return 0;
     }