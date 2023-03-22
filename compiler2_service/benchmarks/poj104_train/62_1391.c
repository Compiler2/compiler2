#define NUM_ITER 142082

#include <header.h>

int main_bench()
{
    
    char *p,*p1;
    p1=p=(char *)malloc(100*sizeof(char));
    int i,n;
    for(i=0;*(p+i-1)!='\n';i++)
    {
                            my_scanf("%c",(p+i));
                            
    }
    n=i;
    
    
    for(;*p!='\0';p++)
    {
                         if(((*p!=' ')&&(*(p+1)==' '))||((*p==' ')&&(*(p+1)!=' '))||((*p!=' ')&&(*(p+1)!=' '))||((*p!=' ')&&(*(p+1)=='\0')))
                         {
                                      my_printf("%c",*p);
                        }}
    return 0;
}