#define NUM_ITER 360763

#include <header.h>

int qiufan(int a);

main_bench()
{
    int a;
    int n;
    for(n=1;n<=6;n++)
    {
        my_scanf("%d",&a);        
        if(a>=0)
        {
            a=qiufan(a);        
        }
        else
        {
            a=0-a;
            a=0-qiufan(a);        
        }
        my_printf("%d\n",a);    
    }
    return 0;    
}

int qiufan(int a)
{
    int y=0,i=0,l=0,x;
    x=a;
    for(l=0;x!=0;l++)
    {
        x=x/10;                 
    }
    y=a%10;
    x=a/10;
    for(i=1;i<l;i++)
    {
        y=y*10+x%10;
        x=x/10;                
    }
    return(y);    
}