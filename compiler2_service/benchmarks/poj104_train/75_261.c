#define NUM_ITER 17294

#include <header.h>

int main_bench()
{
   int x[1001],y[1001];
   int f[1001];
   int i,j,n,ans;
   char ch;
    
 
   i=1; 
   my_scanf("%d%c",&x[1],&ch);
   while(ch==',')
   {
      i++;
      my_scanf("%d%c",&x[i],&ch);                           
   }  
   
   n=i;
   my_printf("%d ",n);
   i=1; 
   my_scanf("%d%c",&y[1],&ch);
   while(ch==',')
   {
      i++;
      my_scanf("%d%c",&y[i],&ch);                           
   }  
   
   for(i=0;i<=1000;i++)
      f[i]=0;
   
   for(i=1;i<=n;i++)
      for(j=x[i];j<y[i];j++)
         f[j]++;
   ans=0;
   for(i=0;i<=1000;i++)
     if(f[i]>ans)
       ans=f[i];
   my_printf("%d",ans);  
  
   return 0;                        
}