#define NUM_ITER 5229

#include <header.h>

int max(int a[],int n)
{   int i,s;
    for(i=1,s=a[1];i<n;i++)                         
     s=(s>=a[i])?s:a[i];
     return (s);
     }
main_bench()
{    int a[200]={0},i,n,c[200]={0},e,t=1;
     char b[200][12];          
     my_scanf("%d",&n);
     for(i=1;i<=n;i++)
     {   my_scanf("%s%d",b[i],&e);            
       if(e>=60)
          a[i]=e;
       else
          c[i]=e;                      
                             }
      for(;;)                       
    {   t=max(a,n) ;    
       if (t==0)
         break;            
      for(i=1;i<=n;i++)
     {   
      if(a[i]==t)
     {  my_printf("%s\n",b[i]);                       
          a[i]=0;     
                       }  
                       }  
                       }                            
      for(i=1;i<=n;i++)
       if(c[i]!=0)
       my_printf("%s\n",b[i]);
                
                                                                
}
