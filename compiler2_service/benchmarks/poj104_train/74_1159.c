#define NUM_ITER 1084510

#include <header.h>

int sushu(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
       if(n%i==0)
        break;
    }
    if(i==n)
     return 1;
    else
     return 0;
}
int huiwenshu(int m)
{
    int d,m1;
     m1=m;
      for(d=0;m!=0;)
      {
           d=d*10+m%10;
           m=m/10;
      }
      if(m1==d)
       return 1;
      else
       return 0;
}
main_bench()
{
     int m,n,i,count=0;
     my_scanf("%d %d",&m,&n);
     for(i=m;i<=n;i++)
     {
          if(huiwenshu(i)==1)
          {
                if(sushu(i)==1)
                {
                  if(count==0)
                  {             
                    my_printf("%d",i);
                    count++;
                  }  
                  else
                   my_printf(",%d",i);
                }
          }
     }
     if(count==0)
       my_printf("no");
     getchar();
     getchar();
}                                                                 
        
