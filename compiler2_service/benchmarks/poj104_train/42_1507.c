#define NUM_ITER 44407

#include <header.h>

int main_bench()
{int n,v[100000],k,p=0,t=0;
 my_scanf("%d",&n);
 for(int i=0;i<=n-1;i++)
  {
    my_scanf("%d",&v[i]);
  }
 my_scanf("%d",&k);
 for(int j=0;j<=n-1;j++)
  {
    if(v[j]!=k)
    {p++;}  
         
  } 
 for(int l=0;l<=n-1;l++)
 {if(v[l]!=k)
  {t++;
   if(t==p){my_printf("%d",v[l]);}
   else {my_printf("%d ",v[l]);}
   }
 
 }
  
 return 0;  

}
