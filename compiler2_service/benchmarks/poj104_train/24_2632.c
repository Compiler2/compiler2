#define NUM_ITER 33711

#include <header.h>



int main_bench()
{
    int i,n,x[250]={0},min=100,max=0;
    char s[250][50]={0};
    
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
          my_scanf("%s",*(s+i));              
    }
    
    for(i=0;i<n;i++)
    {
        *(x+i)=strlen(*(s+i));               
    }
    
    for(i=0;i<n;i++)
    {
        if(*(x+i)>max)
            max=*(x+i); 
        if(*(x+i)<min)
            min=*(x+i);               
    }
    
    for(i=0;i<n;i++)
    {
        if(*(x+i)==max)
        {
            my_printf("%s\n",*(s+i)); 
            break;              
        }                
    }
    
    for(i=0;i<n;i++)
    {
        if(*(x+i)==min)
        {
            my_printf("%s\n",*(s+i)); 
            break;              
        }                
    }
    
    
    
    
    
    
    my_scanf("%d",&n);
    return 0;    
}
