#define NUM_ITER 691651

#include <header.h>

int judge(int n)
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

int scan(int n)
{
    int a,b,i,j,k,r,s=1,t=1,count=0;
    for(i=0;;i++)
    {
                 t=10*t;
                 if(n/t==0)
                 break;
    }
    for(j=0;j<=i/2;j++)
    {
                       t=t/10;s=s*10;r=s/10;
                       a=(n/t)%10;
                       b=(n%s)/r;
                       if(a==b)
                       count++;
    }
    if(count==i/2+1)
    return 1;
    else
    return 0;
}   

main_bench()
{
      int a,b,i,p=0,q=0,count=0;
      my_scanf("%d %d",&a,&b);
      for(i=a;i<=b;i++)
      {
                  p=judge(i);
                  q=scan(i);
                  if(p==1&&q==1&&count!=0)
                  {
                                          count++;
                                          my_printf(",%d",i);
                  }
                  if(p==1&&q==1&&count==0)
                  {
                                          my_printf("%d",i);
                                          count++;
                  }
      }
      if(count!=0)
      my_printf("\n");
      else 
      my_printf("no\n");
      return 0;
}