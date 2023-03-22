#define NUM_ITER 888014

#include <header.h>

int main_bench()
{
char a[500];
int b[500]={0}; 
int n,i,j,k,len,q=0,time=0,max; 
my_scanf("%d",&n);   
my_scanf("%s",a);
len=strlen(a);

 for(j=0;j<len-n+1;j++)
      {       
          for(i=0;i<=j;i++)                                                     
             { 
                
                for(k=0;k<n;k++)
               {   
                 if(a[j+k]==a[i+k])
                 q++;
                 else { q=0;break; }                            
               }
              if(q==n)
              {b[i]++;q=0;break;}
              else
              q=0; 
              
            }     
                  
     } 




max=b[0];
for(i=1;i<len-n+1;i++)
{
  if(b[i]>max)
  max=b[i];
  else;   
}


if(max==1) 
my_printf("NO");
else
{   
    my_printf("%d\n",max);
    for(i=0;i<len-n+1;i++)
    {
     if(max==b[i])
     for(k=0;k<n;k++)
         {    
             my_printf("%c",a[i+k]);
         }    
     my_printf("\n");
    }
}    
return 0;              
}
 