#define NUM_ITER 27359

#include <header.h>

int  num1[10000],num2[10000],n;

int main_bench()
{
    char str;
    int temp=0,i,max=0,tmp,j;
    n=0;
    my_scanf("%c",&str);
    while(str != '\n')
    {
         if(str==',')
         {
               num1[n]=temp;
               temp=0;
               n++;   
         }
         else temp=temp*10+str-'0';  
         my_scanf("%c",&str);        
    }
    num1[n]=temp;
    n++;
    for(i=0;i<n;i++)
    {
          my_scanf("%d",&num2[i]);
          my_scanf("%c",&str);          
    }
   
   for(i=0;i<1000;i++)
   {
         tmp=0;
         for(j=0;j<n;j++)
         if(i>=num1[j] && i<num2[j])
              tmp++;
         if(tmp>max)
            max=tmp;             
   }
   my_printf("%d %d",n,max);
    
    return 0;
}
