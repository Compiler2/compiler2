#define NUM_ITER 1396

#include <header.h>

int main_bench()
{
    int a[100]={0},t,n,i,j,ans;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      my_scanf("%d",&t);
      for(j=0;j<t;j++)
      {
      my_scanf("%d",&a[j]);
       }  
       if(t==0)
        {my_printf("60\n");continue;}
       else if(a[t-3]+3*(t-2)<60&&a[t-2]+3*(t-2)>60)
       { 
              ans=60-3*(t-2);
              my_printf("%d\n",ans);  continue; } 
        else if(a[t-2]+3*(t-1)>60)
       { 
              ans=a[t-2];
              my_printf("%d\n",ans);  continue; }
        else if(a[t-1]+3*(t-1)<=60&&a[t-1]+3*t>=60)
       { my_printf("%d\n",a[t-1]);
         continue; }      
            
       else if(a[t-1]+3*(t-1)<60)
       { my_printf("%d\n",60-3*t);
         continue; }
         
              else if(a[t-1]+3*(t-1)>60)
       { my_printf("%d\n",60-3*(t-1));
        continue; }               
       else if(a[t-1]+3*(t-2)>60)
       { 
            ans=60-3*(t-2);
            my_printf("%d\n",ans);
         continue; }           
       
        
         
                    }
     return 0;
    
    
    }
