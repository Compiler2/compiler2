#include <header.h>

main_bench()
{
     int a[10000]={0};
      int i=0,n,m,s,k,p=2;
      my_scanf("%d",&n);
      if(n<=4)
      my_printf("empty");
      else
      {
      for(m=2;m<=n;m++)
      {
          for(p=2;p<m;p++)
             {
               if(m%p==0)
               break;           
             }
          if(p==m)
          {   a[i]=m;
               i++;      
          }            
      }
      
     k=i-1;
     i=0;
      for(s=0;s<=k;s++)
      {
          if(a[i+1]- a[i]==2)
          {
             my_printf("%d %d\n",a[i],a[i+1]);
             i++;   
           }
           else
              i++;        
      }
      }
      getchar();
      getchar();
}
