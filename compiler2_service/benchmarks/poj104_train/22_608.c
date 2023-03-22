#define NUM_ITER 3635

#include <header.h>


int main_bench()
{
    char ch;
    int f[10000]={0};
    int x,count,i;
    
  
    my_scanf("%d%c",&x,&ch);
    while(ch==',')
    {
        f[x]=1;          
        my_scanf("%d%c",&x,&ch);
              
    }
    f[x]=1; 
    count=0;

    for(i=9999;i>=0;i--)
    {                        
       if(f[i]>0)
       {
         count++;
       
       }
       if(count==2)
       {
         my_printf("%d",i);
         return 0;          
       }
    }
    my_printf("No");
     return 0;    
}

