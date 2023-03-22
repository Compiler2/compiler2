#include <header.h>


int main_bench()
{
    int i,a,n,num=1;
    char str[1001];
    my_scanf("%s",str);
    n=strlen(str);

    
    for (    i=0  ;i<=(n-1)   ;i++   )
    {
            if   (  str[i]>=97  )
            str[i]=str[i]-32;
    }
    
    
    for (    i=0  ;i<=(n-1)   ;i++   )
    {
            if (     str[i]==str[i+1]  )
            num++;
            else
            {
            my_printf("(%c,%d)",str[i],num);
            num=1;
            }
            
    }  
    
    
  
    
    
}
