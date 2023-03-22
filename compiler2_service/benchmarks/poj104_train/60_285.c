#include <header.h>

main_bench()
{
int n;int m=0;int i=0;int j;int p=0;int t=0;
int num[8000]={0};
my_scanf("%d",&n);
if(n<5)
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
          {   num[i]=m;
               i++; 
               t=i;     
          }            
  }
  
    for(i=0;i<=t;i++)
    {
    if((num[i+1]-num[i])==2)
    my_printf("%d %d\n",num[i],num[i+1]);           
    }
}
    getchar();
    getchar();
}


