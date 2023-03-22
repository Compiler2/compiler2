#define NUM_ITER 242310

#include <header.h>


int main_bench()
{
    int i,j,k,n;
    char *p;
    p=(char *)malloc(1000*sizeof(char));
    gets(p);
    for(i=0;*(p+i)!='\0';i++)
    {
                             if((*(p+i+1))=='\0')
                             {
                                                 j=(*(p+i))+(*(p+0));
                                                 my_printf("%c",j);
                             }
                             else
                             {
                                                 j=(*(p+i))+(*(p+i+1));
                                                 my_printf("%c",j);
                             }
    }
    
    return 0;
}