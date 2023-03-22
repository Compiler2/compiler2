#include <header.h>

int main_bench()
{
 int n,i,j,k;
 int p[10000];
 my_scanf("%d",&n);
 if (n>=1&&n<=4)
  my_printf("empty");
 else
 {
  k=0;
  for(i=3;i<=n;i++)
  {
      for(j=2;j<i;j++)              
       {
        if(i%j==0)
        break;
        if(j==i-1)
        {
        p[k]=i;                 
        k++;
        }
       } 
       
  }
  p[k]='\0';
  for(i=0;i<k;i++)
    {
      if(p[i]+2<=n&&p[i]+2==p[i+1])
      my_printf("%d %d\n",p[i],p[i+1]);            
    }  
 }
 getchar();
 getchar();     
}
