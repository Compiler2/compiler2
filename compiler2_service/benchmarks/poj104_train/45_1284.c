#define NUM_ITER 969120

#include <header.h>

int main_bench(){                 
   char a[100],b[100];                 
   int i,j,l,r,c=0;                 
   my_scanf ("%s",a);                 
   my_scanf ("%s",b);               
     l=strlen(a);               
     r=strlen(b);               
     for (i=0;i<r;i++)    {             
        for(j=0,c=0;j<l;j++) 
       {                      
          if(a[j]==b[i+j])          
                  c++;                
        }                     
    if (c==l)                   
     {my_printf("%d",i);                           break;               
          }               
     }         
           return 0;     
}                