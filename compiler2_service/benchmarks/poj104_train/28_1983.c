#define NUM_ITER 1244762

#include <header.h>

char a[50000];
    
int main_bench()
{
    gets(a);
    int i,j;
    int n=strlen(a);
    int flag=0;
    int isfirst=1;
     a[n]=' ';
    for(j=0;j<n;j++)
    {
        if(a[j]!=' ') 
        {  
         flag++;
         }
        
     if(a[j+1]==' '&&a[j]!=' '&&isfirst!=1) 
     {my_printf(",%d",flag);
      flag=0;}   
     if(a[j+1]==' '&&a[j]!=' '&&isfirst==1) 
     {my_printf("%d",flag);
      isfirst=0;
      flag=0;}
    
    
    
    
     } 
return 0;
}