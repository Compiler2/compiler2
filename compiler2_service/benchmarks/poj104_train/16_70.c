#define NUM_ITER 1197691

#include <header.h>

int main_bench()
{
    int n=0,i,t;
    char c[10001];
    my_scanf("%s",c);
    for(i=0;;i++)
    {
                 if(c[i]!='\0')
                 {
                             n++;
                 }
                 else break;
    }        
    if(n%2==0)
    {
              for(i=0;i<n/2;i++)
              {
                                 t=c[i];
                                 c[i]=c[n-1-i]; 
                                 c[n-1-i]=t;
              }
    }
    else
    {
        for(i=0;i<(n-1)/2;i++)
              {
                                 t=c[i];
                                 c[i]=c[n-1-i]; 
                                 c[n-1-i]=t;
              }
    }
    my_printf("%s",c);
    getchar();
    getchar();
    getchar();
}
